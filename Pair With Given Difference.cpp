int Solution::solve(vector<int> &a, int k) {
    sort(a.begin() , a.end());
    if(k<0){
       k = k*(-1); 
    }
    
    int n = a.size();
    int start = 0, end = 1;
    while (end < n) {
        if (a[end] - a[start] == k) {
            return 1;
        } else if (a[end] - a[start] < k) {
            end++;
        } else {
            start++;
        }
        if(start == end){
            end++;
        }
    }
    return 0 ; 
}
