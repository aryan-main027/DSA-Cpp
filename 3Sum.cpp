class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int find = 0 ;
        for(int i = 0 ; i<n ; i++){
            find = target - arr[i];
            int j = n-1 , o = i+1;
            while(o<j){
                if(find == (arr[o] + arr[j])){
                    return true;
                } else if(find > (arr[o] + arr[j])){
                    o++;
                } else {
                    j--;
                }
            }
        }
        return false;
    }
};