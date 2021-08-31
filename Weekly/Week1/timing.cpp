#include<iostream>
using std::cout; using std::endl;
#include<vector>
using std::vector;
#include<random>
using std::mt19937_64; using std::uniform_real_distribution; using std::random_device;
#include<algorithm>
using std::sort; using std::generate;
#include<chrono>

int main (){
  const int sz = 1'000'000; // C++14, ' is a separator for readability
  vector<double> v(sz);
  random_device rd;
  mt19937_64 prng;
  // default for real is double, you can template with other real value
  uniform_real_distribution<float> dist(0,1000);
  for(int i=0; i<sz; ++i)
    v[i] = dist(prng);
  // instead of for, one line using generate and a lambda
  // generate(v.begin(), v.end(), [&](){return dist(prng);} );

  // time the sort
  using duration = std::chrono::milliseconds;  
  auto t1 = std::chrono::steady_clock::now();
  sort(v.begin(), v.end());
  auto t2 = std::chrono::steady_clock::now();

  auto elapsed = std::chrono::duration_cast<duration>(t2-t1).count();
  cout << "Sort took "<<elapsed<<" milliseconds"<<endl;
}
