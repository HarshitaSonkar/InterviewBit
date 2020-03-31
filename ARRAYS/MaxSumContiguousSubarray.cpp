int Solution::maxSubArray(const vector<int> &A) {
    if(A.size()==0){
        return 0;
    }
    if(A.size()==1){
        return A[0];
    }
    int psum=INT_MIN;
    int csum=0;
    for(int i=0;i<A.size();i++){
        csum=csum+A[i];
        if(A[i]>csum){
                psum=max(psum,A[i]);
                csum=A[i];
        }else{
                psum=max(psum,csum);
            }
    }
        
      return max(csum,psum); 
}

