#include <iostream>

int main(){
  int ia[10];
  
  using namespace std;

  for(int i = 0; i < 10; ++i){
    ia[i] = i;
    cout << i << "\t" << ia[i] << endl;
  }
  
  for (auto e : ia)
    cout << e << endl;
  
  return 0;
}