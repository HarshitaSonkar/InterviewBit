vector<int> Solution::maxset(vector<int> &A) {
    vector<int> arr1;
    vector<int> arr2;
    long sum = -1;
    long sum1 = 0;
    for (int i = 0; i < A.size(); i++){
        if (A[i] >= 0){
            arr2.push_back(A[i]);
            sum1 += A[i];
            
            if (sum1 > sum){
                arr1 = arr2;
                sum = sum1;
            }else if (sum1 == sum){
                if (arr2.size() > arr1.size()){
                    arr1 = arr2;
                }
            }            
        }else{
            arr2.clear();
            sum1 = 0;
        }

    }
    return  arr1;
}
