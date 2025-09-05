// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0 , end = n-1 ;
        
        while(start < end){
            if(arr[start] == 1 && arr[end] == 0){
                swap(arr[start] , arr[end]);
                start++;
                end--;
            } else if(arr[start] == 0 && arr[end] == 0){
                start++;
            } else{
                end--;
            }
        }
    }
};