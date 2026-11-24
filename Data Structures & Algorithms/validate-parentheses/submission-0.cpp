class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(auto c : s)
        {
            if(c == '{'|| c == '(' || c == '[')
            {   
                //cout<<c<<endl;
                st.push(c);

            }
            else
            {
                if(st.empty())
                    return  false;

                char ch = st.top();
                cout<<ch<<c;
                if((ch == '[' && c == ']' )|| ( ch == '(' && c == ')' )|| ( ch == '{' && c == '}'))
                {
                    st.pop();
                    continue;
                }
                return false;    
                
            }
            
        }
        if(!st.empty())
                return false;
        
        return true;
            
        
    }
};
