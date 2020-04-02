int Solution::repeatedNumber(const vector<int> &A) {
   int i;
   int n=A.size();
   vector<bool>B(n,false);
       for(i=0;i<n;i++){
           if(B[A[i]-1]==1){
                return A[i];
            }else{
                   B[A[i]-1]=1;
              }
       }
}













  
       









