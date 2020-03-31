vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long n;
    n=A.size();
    int m;
    int k;
    vector<bool>vect(n+1,false);
    for(int i=0;i<A.size();i++){           
          if(vect[A[i]]==false){
               vect[A[i]]=1;
           }else {      //if(temp[arr[i]] == 1) output “arr[i]”
               m=A[i];
               
           }
    }
    for(int i=1;i< n+1;i++){
          if(vect[i]==false){
               k=i;
           }
    }
    return vector<int>{m,k};

}

