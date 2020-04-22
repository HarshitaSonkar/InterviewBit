int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i = 0;
    while(A/2 != 0){
        if(A%2 != 0){
            i++;
        }
        A = A/2;
    }
    if(A%2 != 0){
        i++;
    }

    return i;
}
