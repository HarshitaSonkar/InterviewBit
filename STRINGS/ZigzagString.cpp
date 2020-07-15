string Solution::convert(string A, int B) {
    
    
	if(B<=1)
    return A;
	
	string ans;
	int i = 0,j = 0;
	int n = A.length();
	int l = B - 1;
	
	// Iterate for every row e.g. A = "INTERVIEWBIT", B=4
	// i iterates over I,N,T,E; j iterates over the elements in the row for every i
	// The addition in j is found by ((B-1) - j%(B-1))*2
	// i=0		I . . . . . I . . . .            Addition in j: 6 = (3 - 0)*2 
	// i=1   	  N . . . V . E . . . T 		 Addition in j: 4,2 = (3-1)*2, (3-2)*2
	// i=2     		T . R . . . W . I            Addition in j: 2,4 = (3-2)*2, (3-1)*2
	// i=3		 	  E . . . . . B              Addition in j: 6 = (3 - 0)*2
	// (j%B-1)  0 1 2 0 1 2 0 1 2 0 1 2   
	
	
	while(i < B){

		j = i;
		while(j < n && ans.length() < n){
			ans.append(1, A[j]);
			j+= (l -(j % l))*2;
		}
		i++;
	}
	return ans;
}
