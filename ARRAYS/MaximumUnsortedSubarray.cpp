vector<int> Solution::subUnsort(vector<int> &A) {
    int x=0,n=A.size();
    for(int i=0;i<n-1;i++){
           if(A[i]<=A[i+1])
           x++;
    }
    vector<int>z;
    if(x==n-1){
         z.push_back(-1);
         return z;
     }

      int q=-1,f=0,w=-1,mx=A[0];
      for(int i=0;i<n;i++){
             mx=max(mx,A[i]);
               if(mx!=A[i]){
                  if(q==-1)
                  q=i;
                  w=i;
                }
        }
      int mn=A[w];
      for(int j=w-1;j>=q;j--){
              mn=min(mn,A[j]);
      }
      int j=q-1;
      while(j>=0 and A[j]>mn){
                  j--;
       }
        j++;
       z.push_back(j);
       z.push_back(w);
return z;
}

