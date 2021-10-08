#include<iostream>
using std::cout; using std::endl;
#include<omp.h>


const int t_num = 4;
const size_t sz = 5;

void init_array(double ary[][sz], double val){
#pragma omp parallel for collapse(2)  num_threads(t_num) ordered
  for(int i=0; i<sz; ++i)
    for(int j=0; j<sz; ++j){
      ary[i][j] = val;
#pragma omp ordered 
      cout << "T:"<<omp_get_thread_num()<<endl;
    }
}

int main (){

  double a[sz][sz];
  double b[sz][sz];
  double c[sz][sz];

  init_array(a,2);
  init_array(b,4);
  init_array(c, 8);
}
