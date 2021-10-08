#include<iostream>
using std::cout; using std::endl;
#include<omp.h>

const int t_num=28;

long collatz(long num){
  if (num % 2)
    num = 3*num + 1;
  else
    num = num/2;

  return num;
}

int main (){
  long global_result = 0;
#pragma omp parallel num_threads(t_num) shared(global_result) 
  {
    long result=0;
    result = collatz(omp_get_thread_num() );
#pragma omp critical
    global_result = (global_result > result) ? global_result : result;
#pragma omp barrier
    result = collatz(global_result);
#pragma omp barrier
#pragma omp critical
    global_result = (global_result > result) ? global_result : result;    
  }
  cout << "biggest was: "<<global_result<<endl;
}
