// omp_using_locks.c
// compile with: /openmp /c
// MS example
// https://docs.microsoft.com/en-us/cpp/parallel/openmp/a-examples?view=msvc-160
// with mods from me, wfp

#include<iostream>
using std::cout; using std::endl;
#include<omp.h>


const int t_num = 400;

void work(int id){
  cout << "Thread "<<id<<" did the work"<<endl;
}

void skip(int id){
  double start = omp_get_wtime();
  do{
    cout << "thread "<<id << " waiting"<<endl;
  }
  while(start + 1 < omp_get_wtime());
}

int main() {
   omp_lock_t lck;
   int id;

   omp_init_lock(&lck);
   
#pragma omp parallel shared(lck) private(id) num_threads(t_num)
   {
      id = omp_get_thread_num();

      omp_set_lock(&lck);
      cout << "My thread id is "<< id << endl;

      // only one thread at a time can execute this printf
      omp_unset_lock(&lck);

      while (! omp_test_lock(&lck)) {
         skip(id);   // we do not yet have the lock,
                     // so we must do something else
      }
      work(id);     // we now have the lock
                    // and can do the work
      omp_unset_lock(&lck);
   }
   omp_destroy_lock(&lck);
}
