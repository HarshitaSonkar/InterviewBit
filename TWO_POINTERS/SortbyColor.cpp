void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int count1=0;
    int count2=0;
    int count3=0;
    
    for(auto i:A){
        if(i==0)
            count1++;
        else if(i==1)
            count2++;
            else
            count3++;
    }
    A.clear();
    for(int i=0;i<count1;i++){
        A.push_back(0);
    }
    for(int j=0;j<count2;j++){
        A.push_back(1);
    }
    for(int k=0;k<count3;k++){
        A.push_back(2);
        
    }
   // return A;
    
}
