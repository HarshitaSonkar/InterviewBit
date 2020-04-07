int Solution::isPalindrome(string A) {
    
    int i=0;
    int j=A.size()-1;
    
    while(i<j){
        if(isalnum(A[i]) && isalnum(A[j])){
            
            if(toupper(A[i])!=toupper(A[j]))
                return 0;
                     i++;
                     j--;
        }else{
            if(isalnum(A[i]))
                j--;
            else
            i++;
        }
    }
    return 1;
}
