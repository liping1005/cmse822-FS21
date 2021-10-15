#include<iostream>
using std::cout; using std::endl;
#include<sstream>
using std::stringstream;
#include<omp.h>

int main (){
  
#pragma omp parallel num_threads(2) default(none) shared(cout)
  {
#pragma omp task
    {
      stringstream s;      
      s << "Doing task 1 on thread" << omp_get_thread_num()  << endl;
      cout << s.str();
    }
    
#pragma omp task
    {
      stringstream s;    
      s << "Doing task 2 on thread" << omp_get_thread_num() <<endl;
      cout << s.str();
    }
    
  } // of parallel
}
