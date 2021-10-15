#include<iostream>
using std::cout; using std::endl;
#include<vector>
using std::vector;
#include <omp.h>



int fib(int n, vector<int> &v){
  int i, j;
  if (n<2)
    return n;
  else{
#pragma omp task shared(i,v) firstprivate(n)
    if (v[n-1] == 0){
      i = fib(n-1, v);
    }
    else
      i = v[n-1];

#pragma omp task shared(j,v) firstprivate(n)
    if (v[n-2] == 0){
      j = fib(n-2, v);
    }
    else
      j = v[n-2];
#pragma omp taskwait
    v[n] = i+j;
    return i+j;
  }
}

int main(int argc, char *argv[]){
  if (argc != 2)
    cout << "fibo of what?"<<endl;
  else{
    int n = atoi(argv[1]);
    vector<int>v(n+1,0);
    omp_set_dynamic(0);
    omp_set_num_threads(4);
    
#pragma omp parallel shared(n)
    {
#pragma omp single
      cout << "fib("<<n<<") = "<<fib(n, v) << endl;
    }
  }
}
