#include<iostream>
using std::cout; using std::endl;
#include<sstream>
using std::ostringstream;
#include<string>
using std::string;

// pass as array of unknown size, basically a pointer
string to_string(int ary[], size_t size){
  cout << "sizeof array (empty []):"<< sizeof(ary) << endl;
  ostringstream oss;
  for (size_t  i=0; i<size; i++){
    oss << ary[i] <<", ";  
    // oss << *(ary + i) <<", "; // same thing!
  }
  string result = oss.str();
  return result.substr(0,result.size()-2);
}

// pass as pointer directly, SAME THING as above
int sum (int *ary, size_t size){
  int sum=0;
  cout << "sizeof array (ptr):"<< sizeof(ary) << endl;
  for(size_t i=0; i<size; i++){
    // sum += ary[i]; // same thing!
    sum += *(ary+i);  
  }
  return sum;
}


// pass the bounds as pointers (size implicit)
int max_val (int *first, int *one_past_last){
  int result = 0;
  cout << "sizeof bounds: "<< sizeof(first) << endl;
  for(int *i= first; i<one_past_last; ++i){
    if ( *i > result)
      result = *i;
  }
  return result;
}

void change_fn(int *a, int *i){
  *(a+1) = 32;
  *i = 2;
}


// extra ideas here, not reqally required
// pass as reference to an array, sizeof works here
long prod(const int (&ary)[5]){
  int result=1;
  cout << "sizeof array (ref, fixed):"<< sizeof(ary) << endl;  
  // compiler knows size, can do range-based for
  for(auto &element : ary)
    result = result * element;
  return result;
}

// also extra
// let template deduce size, we don't have to say!!
template<typename Type, size_t Size>
long squares(const Type (&ary)[Size]){
  Type result=0;
  cout << "sizeof array (template size):"<<sizeof(ary)<<endl;
  for(auto element : ary)
    result = result + (element * element);
  return result;
}

int main(){
  const size_t size=5;
  int ary1[size]{8,5,6,7,4};
  int ary2[]{1,2,3,4};  // implicitly size 4

  int i = 27;
  int *ptr = & i;

  cout << to_string(ary1, size)<<endl;
  cout << sum(ary1, size)<<endl;
  cout << max_val(ary1, ary1+size) << endl;
  change_fn(ary2, &i);
  cout << ary2[1] <<"," <<i << endl;

  // extra interesting ideas
  cout << prod(ary1)<<endl;
  cout << squares(ary1) << endl;
}
