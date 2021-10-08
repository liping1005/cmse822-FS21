#include<iostream>
using std::cout; using std::endl;
#include "omp.h"

// Remember?
// dx = (b-a)/n
// area = dx/2 * ( f(a) + 2*f(x_1) + 2*f(x_2) + ... + 2*f(x_n-1) + f(x_n) )
// x_i = a + i*dx

double f(double x){
  return 1/((x-3)*(x-3) + 0.01) + 1/((x-2)*(x-2) + 0.05) + 2;
}

double sq(double x){
  return x*x;
}

double Trap(double left, double right, int n, int t_cnt){
  double dx = (right - left)/n;
  double result = (f(left) + f(right)) / 2.0;

#pragma omp parallel for num_threads(t_cnt) reduction(+: result)
  for (int i=1; i< n-1; ++i){
    result += f(left + i*dx);
  }
  result *= dx;
  // cout << my_rank <<":"<<left<<":"<<right<<" got "<< result << endl;
  return result;
}
  
int main (int argc, char* argv[]){
  if (argc != 5)
    cout << "need thread cnt, left, right and number of traps argument";
  else{
    double global_result=0.0;
    int t_cnt = atoi(argv[1]);
    double left = atoi(argv[2]);
    double right = atoi(argv[3]);
    int trap_cnt = atoi(argv[4]);

    double start = omp_get_wtime();
    global_result = Trap(left, right, trap_cnt, t_cnt);
    double end = omp_get_wtime();
    
    cout << left << " to "<< right <<" area is: "<<global_result<< " elapsed: "<<end-start<<endl;
  }
}
    
      
  
  
