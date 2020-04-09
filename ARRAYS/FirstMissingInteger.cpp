int Solution::firstMissingPositive(vector<int> &A) {
    
    int n = A.size();
    vector<bool> B(n+1, 0); 
    
    for(int i=0; i<n; i++){
        if(A[i]>=1 && A[i]<= n)
        B[A[i]]=1;
    }
    for(int i=1; i<=n; i++){
        if(B[i]==0) 
        return i;
    }
    
    return n+1;
}
