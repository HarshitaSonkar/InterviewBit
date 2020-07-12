// Total paths = (m - 1) + (n - 1) C (m - 1)
int Solution::uniquePaths(int A, int B) {
    
   if (A <= 0 && B <= 0){
      return 0;
    } else if (A <= 0 || B <= 0){
        return 1;
    }
    float total = 1;
    for (int i = 0; i < A - 1; i ++){
        total*= (float)(B + i)/(float)(i + 1);
    }
    return total;
}
