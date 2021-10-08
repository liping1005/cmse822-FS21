#include<iostream>
using std::cout; using std::endl;
#include<omp.h>

long iterative_fib(int n) {
   if (n <= 2) {
     return 1;
   }
   long a = 1, b = 1, c;
   for (int i = 0; i < n - 2; ++i) {
     c = a + b;
     b = a;
     a = c;
   }
   return a;
}

long omp_fib(int n, int t_cnt){
   if (n <= 2) {
     return 1;
   }
   long a = 1, b = 1, c=0;
   long result=0;
#pragma omp parallel num_threads(t_cnt) reduction(+:result)
   {
#pragma omp for 
     for (int i = 0; i < n - 2; ++i) {
       c = a + b;
       b = a;
       a = c;
     }
   result += a;
   }
   return result;
}

int main (int argc, char* argv[]){
  if (argc != 3)
    cout << "Needs nth fib and thread count" << endl;
  else{
    int n = atoi(argv[1]);
    int t_cnt = atoi(argv[2]);
    
    double t1=omp_get_wtime();
    long ans = omp_fib(n, t_cnt);
    double t2 = omp_get_wtime();
    
    cout << n <<"th fib is "<<ans<<", took "<<t2-t1<<" seconds"<<endl;
}
}
