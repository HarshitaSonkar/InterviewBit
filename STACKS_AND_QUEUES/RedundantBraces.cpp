int Solution::braces(string A) {
    
    stack<char> st;
    
    for(int i = 0; i < A.size(); i++){
        if( (A[i] == '{') || (A[i] == '[') || (A[i] == '(') ){
            st.push(A[i]);
        }
        else if( (A[i] == '}') || (A[i] == ']') || (A[i] == ')') ){
            int topEl = st.top();
            st.pop();
            char sign = st.top();
            st.pop();
            if(sign == '+'){
                int botEl = st.top();
                st.pop();
                st.pop();
                st.push(botEl + topEl);
            }
            else if(sign == '-'){
                int botEl = st.top();
                st.pop();
                st.pop();
                st.push(botEl - topEl);
                
            }
            else if(sign == '*'){
                int botEl = st.top();
                st.pop();
                st.pop();
                st.push(botEl * topEl);
            }
            else if(sign == '/'){
                int botEl = st.top();
                st.pop();
                st.pop();
                st.push(botEl / topEl);
            }
            else{
                return 1;
            }
            
        }
        else{
            st.push(A[i]);
        }
    }
    
    return 0;
}
