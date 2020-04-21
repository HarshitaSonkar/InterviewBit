int Solution::singleNumber(const vector<int> &A) {
    
    
    if(A.size() == 0){
        return 0;
    }
    int number = A[0];
    for(int i = 1; i < A.size(); i++){
        number = number ^ A[i];
    }
    
    return number;
}
    
   
  /*  int product;
    for(auto i : A){
        product = product^i;
    }
    return product;  
*/
  
  
  
  
  
  
  
  
  
  /*  unordered_map<int,int>res;
    for(int i=0;i<A.size();i++){
        res[A[i]]++;
    }
    for(auto x:res){
        if(x.second==1){
             return x.first;
        }
    }
    return -1;   */
    
   
