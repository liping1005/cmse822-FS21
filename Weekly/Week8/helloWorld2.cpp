#include <iostream>
using std::cout; using std::endl;
#include <mpi.h>     

int main(int argc, char **argv){
  int        comm_sz;  // total procs
  int        my_rank;  // my id              

  // MPI from here
  //MPI_Init(&argc, &argv); 
  MPI::Init(argc, argv);

  // get # of procs from communicator
  //MPI_Comm_size(MPI_COMM_WORLD, &comm_sz); 
  comm_sz = MPI::COMM_WORLD.Get_size();
  
  // get my id from the communicator
  // MPI_Comm_rank(MPI_COMM_WORLD, &my_rank); 
  my_rank = MPI::COMM_WORLD.Get_rank();

  if (my_rank == 0)
     cout <<"I'm the master process 0"<<endl;
   else
     cout <<"I'm process:"<<my_rank<<", out of:"<<comm_sz<<endl;

  // MPI finished here 
  MPI::Finalize(); 
}
