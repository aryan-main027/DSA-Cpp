class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        sort(a.begin() , a.end());
        int n = a.size();

        int start = 1 , end = a[n-1] , ans ;
        while(start <= end){
            int mid = start + (end - start)/2; 
            long long total = 0 ;
            for(int i = 0 ; i<n ; i++){
                total+= a[i]/mid;
                if(a[i]%mid){
                    total++;
                }
            }

            if(total <= h){
                ans = mid;
                end = mid - 1 ;
            } else{
                start = mid + 1 ;
            }
        }
        return ans;
    }
};