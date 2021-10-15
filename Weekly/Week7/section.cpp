#include<iostream>
using std::cout; using std::endl;
#include<sstream>
using std::stringstream;
#include<thread>
#include<chrono>
#include<omp.h>

const int t_num = 4;

void function_1(int val){
  stringstream s;
  for (int i = 0; i != 3; i++){
    s << "Function 1 call "<< val
      << "(i = " << i << ") thread :"<< omp_get_thread_num()<< endl;
      cout << s.str();
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void function_2(int val){
  stringstream s;  
  for (int j = 0; j != 4; j++){
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    s << "                   Function 2 call " << val
      << "(j = " << j << ") thread: "<<omp_get_thread_num << endl;
   cout << s.str();
  }
}

int main(){
#pragma omp parallel num_threads(t_num)
  {
    cout << omp_get_num_threads() << " threads"<<endl;
#pragma omp sections
    {
#pragma omp section
    function_1(1);
    
#pragma omp section
    function_2(2);

#pragma omp section
    function_1(3);

#pragma omp section
    function_2(4);
    }    
  }
}
