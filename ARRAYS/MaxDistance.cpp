int Solution::maximumGap(const vector<int> &A) {
   int i,j;
   vector<int>lmin(A.size());
   vector<int>rmax(A.size());
   int  n=A.size();
   lmin[0] = A[0];  
      for(i=1; i<n; ++i)  
        lmin[i] = min(A[i], lmin[i-1]);
      
        
    rmax[n - 1] = A[n-1];  
        for (j = n - 2; j >= 0; j--)
        rmax[j] = max(A[j], rmax[j+1]);
        
        
     i = 0, j = 0;
     int dis = 0;  

   while (i<n && j<n)  
    {  
        if (lmin[i] <= rmax[j])  
        {  
            dis = max(dis, j-i);  
            j++;  
        }  
        else{
            i++;  
        }
      //  return dis;  
    }  
    
    
  return dis;  
    
}  

