int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 

int Solution::romanToInt(string A) {
    
    int iter=0;
        
        for(int i=0;i<A.length();i++){
            
            int A1 = value(A[i]); 
              if(i+1<A.length()){
                 int A2=value(A[i+1]);
                   if(A2<=A1){
                       iter=iter+A1;
                   }else{
                       iter=iter+A2-A1;
                       i++;
                   }
              }else{
                  iter=iter+A1;
              }
        }
     return iter;  
    
}
