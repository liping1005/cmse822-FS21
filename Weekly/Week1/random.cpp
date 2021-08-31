#include<iostream>
using std::cout; using std::endl;
#include<random>
using std::mt19937_64; using std::uniform_int_distribution; using std::random_device;

int main (){
  random_device rd;
  cout << "Got entropy? " << rd() << endl;
  // seed with whatever the rd provides
  mt19937_64 prng(rd() );
  // templated, defaults to int but you can use another int type
  // range of values are 0-244 inclusive
  uniform_int_distribution<long> dist(0,255);
  // distribution takes the prng as an arg
  for(int i=0; i<10; ++i)
    cout << dist(prng) << endl;
}
  
