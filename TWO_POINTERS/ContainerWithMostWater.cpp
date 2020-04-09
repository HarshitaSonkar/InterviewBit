int Solution::maxArea(vector<int> &A) {
        
        int i=0;
        int j=A.size()-1;
        int cap1=0;
        int cap2=0;
        int m=0;
        int max1=0;
        int max2=0;
        
        while(i<j){
            if(A[i]<A[j]){
                cap1=A[i]*(j-i);
                    if(cap1>max1){
                        max1=cap1;
                    }
                i++;
              }else{
                  cap2=A[j]*(j-i);
                if(cap2>max2){
                    max2=cap2;
                }
                  j--;
             }
            m=max(max1,max2);
        }
        return m;
}

        
        
        
        
        
        
      
