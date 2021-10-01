// add whatever includes you need. You don't have to use all the ones
// listed here.

#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<thread>
using std::thread;
using namespace std::this_thread;
#include<mutex>
using std::mutex; using std::lock_guard;
#include<shared_mutex>
using std::shared_mutex; 
#include<map>
using std::map;
#include<initializer_list>
using std::initializer_list;
#include<utility>
using std::pair;
#include<chrono>
using namespace std::chrono_literals;
#include<random>
using std::mt19937_64; using std::uniform_int_distribution; using std::random_device;

mt19937_64 prng{random_device()() };
uniform_int_distribution<int> dist(100,500);

class ATM{
private:
  // add whatever you need

  map<long, double> accounts;
public:
  ATM()=default;
  ATM(initializer_list<pair<long, double>>);
  double query(long);
  bool deposit(long, double);
  double withdraw(long, double);
};

ATM::ATM(initializer_list<pair<long, double>> il){
  for(auto &p : il){
    accounts[p.first] = p.second;
  }
}

double ATM::query(long id){
  // do this
}

bool ATM::deposit(long id, double cash){
  // do this
}  

double ATM::withdraw(long id, double cash){
  // do this
}

void work_stream1(ATM &a){
  // make a workstream, a stream of atm visits
  // maybe a loop. Could take more params if you like for your testing
  // needs. 

  // if you want to have each thread wait, here is a way to get some
  // ms from the prng
  std::chrono::milliseconds wait(dist(prng));
  
}

int main (){
  char c;

  // setup the accounts: {id, money}
  ATM atm({ {1, 100}, {2, 100}, {3, 100} });

  // atm is a shared variable, each thread gets a reference
  thread t1(work_stream1, std::ref(atm));

  t1.join();
  t2.join();

}
  
