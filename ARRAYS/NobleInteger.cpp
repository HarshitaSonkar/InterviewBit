int Solution::solve(vector<int> &A) {
    
   sort(A.begin(),A.end());
    if(A[A.size()-1]==0)
     return 1;
    for(int i=0;i<A.size()-1;i++){
           if(A[i]==((A.size()-1)-i)&&A[i]!=A[i+1])
        return 1;
        
    }
    return -1;
   
}   
   
   
   /* int i;
    int j;
    for(i=0;i<A.size();i++){
        int count=0;
        for(j=0;j<A.size();j++)
            if(A[i]<A[j])
                count++;
            
        if(count==A[i])
        return 1;
    }
    return -1;  
}
*/
