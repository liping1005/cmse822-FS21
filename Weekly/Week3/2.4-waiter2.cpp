#include<thread>
using std::thread; 
using std::this_thread::sleep_for;
using std::this_thread::get_id;
#include<chrono>
using std::chrono::milliseconds; 
using std::chrono::duration;
#include<iostream>
using std::cout; using std::endl;
#include<random>
using std::default_random_engine; using std::uniform_int_distribution;
#include<iomanip>
using std::fixed; using std::dec;
#include<ratio>
using std::ratio;

bool stop=false;

void thread_fun(int seed){
  default_random_engine dre(seed);
  uniform_int_distribution<int> dist(500,2000);
  int rand_val;
  auto wait_for = milliseconds(1);
  //auto wait_for = duration<int,ratio<1,1000>>(1);
  while (!stop){
    rand_val = dist(dre);
    //wait_for = duration<int,ratio<1,1000>>(rand_val);
    wait_for = milliseconds(rand_val);
    cout << "Thread:"<<get_id()<<" slept for:"
	 << dec << wait_for.count()<<endl;
    sleep_for(wait_for);
  }
}

int main () {
  thread t1(thread_fun, 1);
  thread t2(thread_fun, 2);  
  thread t3(thread_fun, 3);
  thread t4(thread_fun, 4);  
  getchar();    // wait for user to press enter:
  stop = true;  // stop thread:
  t1.join(); 
  t2.join();
  t3.join();
  t4.join();
}
