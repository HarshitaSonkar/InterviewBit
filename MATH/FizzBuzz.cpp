vector<string> Solution::fizzBuzz(int A) {
  
        vector<string>res;
        
        for(int i=1;i<=A;i++){
         
            if(i%3==0 && i%5==0){
                string c="FizzBuzz";
                res.push_back(c);
            }
            
            else if(i%3==0 && i%5!=0){
                    string c="Fizz";
                    res.push_back(c);
            }else if(i%5==0 && i%3!=0){
                    string c="Buzz";
                    res.push_back(c);
            }
             else
                    res.push_back(to_string(i));
            
        }
        return res;
        
    }


