int Solution::titleToNumber(string A) {
    
    int ans=0;
        for(auto i:A){
            ans=ans*26 +(i -'A'+1);
        }
        return ans;
}
