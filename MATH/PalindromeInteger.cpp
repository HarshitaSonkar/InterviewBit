int Solution::isPalindrome(int A) {
    
    long sum=0;
    long rem=0;
    int num=A;
    
    if(A<0){
        return false;
    }else
         while(num>0){
             rem=num%10;
             sum=sum*10+rem;
             num=num/10;
         }
    return A==sum;     
}
