#include<iostream>
using std::cout; using std::endl;
#include<vector>
using std::vector;
#include<cmath>


size_t sz = 10;

int main (){
  vector<double> a(sz, 3.14159), b(sz, 1.2345), y(sz, 0), z(sz, 16);
#pragma omp parallel
  {
#pragma omp for nowait
    for(int i=1; i<sz; ++i){
      b[i] = (a[i] + a[i-1])/2.0;
      cout << "doing b"<<endl;
     }
#pragma omp for nowait
    for(int i=0; i<sz; ++i){
       y[i] = sqrt(z[i] * i);
       cout << "doing y" << endl;
     }
   }
}
