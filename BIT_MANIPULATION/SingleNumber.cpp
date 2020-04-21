int Solution::singleNumber(const vector<int> &A) {
    
   
    int product;
    for(auto i : A){
        product = product^i;
    }
    return product;
}
  
  
  
  
  
  
  
  
  
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
    
   
