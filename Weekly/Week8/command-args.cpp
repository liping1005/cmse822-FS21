#include<iostream>
using std::cout; using std::endl;

#include <mpi.h>

int main (int argc, char **argv){
  const size_t sz = 10;
  long buffer;
  int comm_sz, my_rank;

  for(int i = 0; i<argc; i++)
    cout << "Arg "<<i<<":"<<argv[i]<<endl;

  MPI_Init(&argc, &argv);
  MPI_Comm world;
  world = MPI_COMM_WORLD;
  MPI_Comm_size(world, &comm_sz);
  MPI_Comm_rank(world, &my_rank);

  for(int i = 0; i<argc; i++)
    cout << "Arg "<<i<<":"<<argv[i]<<endl;  
  
  //MPI_Finalize();
}

    
  
