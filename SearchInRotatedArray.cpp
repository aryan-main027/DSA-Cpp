#include<iostream> 
#include<vector> 
using namespace std;

int SearchInRotated(int a[] , int n , int key){
  int start = 0, end = n-1 , ans = -1 ;
  while(start <= end){
    int mid = start + (end - start)/2;
    if(a[mid] == key){
      return mid;
    }
    // left side sorted
    else if(a[mid] >= a[0] ){
      if(a[start] <= key && a[mid] > key){
        end = mid - 1;
      }
      else{
        start = mid + 1 ;
      }
    }
    // Right side sorted
    else{
      if(a[mid] < key  && a[end] >= key){
        start = mid + 1 ;
      }
      else{
        end = mid - 1 ;
      }
    }
  }
  return -1 ;
}

int main(){
 int a[7] = {4,5,6,7,0,1,2};
 int n = 7 ;
 int key = 0;
 cout<<"Index of Key element = "<<" "<<SearchInRotated(a,n,key);
 return 0 ;
}