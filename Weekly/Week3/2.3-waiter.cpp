#include<thread>
using std::thread; 
#include<chrono>
using std::chrono::duration; 
using std::chrono::seconds;
#include<iostream>
using std::cout; using std::endl;

bool stop = false;

void thread_fun(){
  cout << "I am:"<<std::this_thread::get_id()<<endl;
  auto wait_for = seconds(2);
  while (!stop){
    cout << "**Inside thread...\n";
    std::this_thread::sleep_for(wait_for);
  }
}
  
int main() {
  thread  t = thread(thread_fun);
  getchar();  // wait for user to press enter:
  stop = true;  // stop thread:
  t.join();    // wait for thread to finish
}

