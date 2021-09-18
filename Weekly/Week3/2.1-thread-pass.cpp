#include<iostream>
using std::cout; using std::endl;
#include<thread>
using std::thread;
#include<string>
using std::string; using std::to_string;

void thread_fun(long start, long stop, string &outs){
  int even=0, odd=0;
  for(int i=start; i<stop; i++)
    if (i%2 == 0)
      even++;
    else
      odd++;
  outs = "Even:" + to_string(even) + ", Odd:" + to_string(odd);
}

int main (){
  string s;
  thread t(thread_fun, 100, 1000, std::ref(s));
  t.join();
  cout << s << endl;
}

    
