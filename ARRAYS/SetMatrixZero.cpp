void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   long long int r=A.size(),c=A[0].size(),i,j;
   vector row(r,false); 
   vector col(c,false); 
   for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
          {
            if(A[i][j]==0)
              {
                row[i]=true; 
                col[j]=true; 
               }
           }
     }
    for(i=0;i<row.size();i++) // setting all the elements in respective rows with zero…
       {
        if(row[i])
        for(j=0;j<c;j++)
        A[i][j]=0;
    }
    for(i=0;i<col.size();i++) // setting all the elements in respective columns with zero…
     {
         if(col[i])
         for(j=0;j<r;j++)
         A[j][i]=0;
      }
}
