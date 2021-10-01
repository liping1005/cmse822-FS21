#include<iostream>
using std::cout; using std::endl;
#include<cstdlib>
#include<omp.h>

int main (int argc, char *argv[]){
  if (argc != 2)
    cout << "Need a thread count arg" << endl;
  else {
    int thrd_cnt = atoi(argv[1]);
    omp_set_num_threads(thrd_cnt);

    cout << "Max number of threads: "<<omp_get_max_threads() <<endl;
    #pragma omp parallel
    {
      if (omp_get_thread_num() == 0){
	cout << "I'm the prime node, I'm special "<<endl;
	cout << "Actual number of threads: "<<omp_get_num_threads()<<endl;	
      }
      cout << "I'm worker "<<omp_get_thread_num()<<endl;
    }
  }
}
