#include<iostream>
using std::cout; using std::endl;
#include<thread>
using std::thread;
#include<string>
using std::string; using std::stol;
#include<functional>
using std::ref;

void thread_fun(long l, double d, string s, long &num){
  long val;
  val = (all_of(s.begin(), s.end(), isdigit)) ? stol(s) : 0;
  num = l + d + val;
}

thread construct_thread(long l, double d, string s, long &num){
  thread t(thread_fun, l, d, s, ref(num));
  return t;
}

int main () {
  long l;
  thread t1(thread_fun, 1, 3.14, "1234", ref(l));
  thread t2 = std::move(t1);
  t2.join();
  cout << "Long:"<<l<<endl;

  l = 0;
  thread t3 = construct_thread(10, 35.678, "5678", ref(l));
  t3.join();
  cout << "Long:"<<l<<endl;
}
