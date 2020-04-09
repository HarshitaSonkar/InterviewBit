vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    int i = 0;
    int j = 0;
    vector<int>vect;
    
    while((i < A.size()) && (j < B.size())){
        if(A[i] > B[j]){
            j++;
        }
        else if(A[i] < B[j]){
            i++;
        }
        else{
            vect.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    return vect;
}

