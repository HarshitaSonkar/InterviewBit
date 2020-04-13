int checkMax(int a, int b, int c){
    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    
    return max;
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
 /*   vector<int>D;
    vector<int>E;
    
    int i=*max_element(A.begin(),A.end());
      D.push_back(i);
    int j=*max_element(B.begin(),B.end());
      D.push_back(j);
     int k=*max_element(C.begin(),C.end());
     D.push_back(k);
     
     int a=*min_element(A.begin(),A.end());
     E.push_back(a);
     int b=*min_element(B.begin(),B.end());
     E.push_back(b);
     int c=*min_element(C.begin(),C.end());
     E.push_back(c);
     
     int max=*max_element(D.begin(),D.end());
     int min=*min_element(E.begin(),E.end());
     
     return abs (max-min);       */
     int i = 0, j = 0, k = 0;
    int sol = INT_MAX;
    int temp, temp1, temp2, temp3;
    
    while(i < A.size() || j < B.size() || k < C.size()){
        sol = min(sol, checkMax(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])));
        
        if(i+1 < A.size()){
            temp1 = checkMax(abs(A[i+1] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i+1]));
        }
        else{
            temp1 = INT_MAX;
        }
        if(j+1 < B.size()){
            temp2 = checkMax(abs(A[i] - B[j+1]), abs(B[j+1] - C[k]), abs(C[k] - A[i]));
        }
        else{
            temp2 = INT_MAX;
        }
        if(k+1 < C.size()){
            temp3 = checkMax(abs(A[i] - B[j]), abs(B[j] - C[k+1]), abs(C[k+1] - A[i]));
        }
        else{
            temp3 = INT_MAX;
        }

        temp = min(temp1, temp2);
        temp = min(temp, temp3);
        
        if(temp == INT_MAX){
            return sol;
        }
        else if(temp == temp1){
            i++;
        }
        else if(temp == temp2){
            j++;
        }
        else{
            k++;
        }
        
    }
    
    
    return sol;

}
