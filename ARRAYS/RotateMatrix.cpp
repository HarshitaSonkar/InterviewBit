void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size() < 0){
        return;
    }
    for(int i=0; i<A.size(); i++){
        for(int j = i; j<A.size(); j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0; i<A.size(); i++){
        reverse(A[i].begin(), A[i].end());
    }
}
