#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int a[8] = {3,4,-2,5,8,20,-10,8};
  int n = 8 ;
  int total_sum = 0 ; 
  for(int i = 0 ; i<n ; i++){
    total_sum += a[i];
  }

  int prefix = 0 ;
  for(int j =  0 ; j<n ; j++){
    prefix += a[j];
    if(prefix == (total_sum - prefix)){
      cout<<"Sub Array Possible";
      break;
    }
  }
  return  0;
}