int Solution::solve(vector<string> &A) {
    
    int n=A.size();
    double res;
    res > 1 && res < 2;
    int l,r;
    double sum;
    int i;
    sort(A.begin(),A.end());
    //for(i=0;i<n-2;i++){
        l=0;
        r=n-1;
        while(l<r-1){
            sum=stod(A[l])+stod(A[l+1])+stod(A[r]);
            if(sum>1 && sum < 2){
                return 1;
            }
            if(sum<1)
                l++;
             else 
            r--;
        }
   // }
    return 0;
}
