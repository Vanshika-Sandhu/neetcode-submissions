class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto s : tokens)
        {
            if(s == "+")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int x = a+b;
                st.push(x);
            }
            else if(s == "-")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int x = a-b;
                st.push(x);
            }
            else if(s == "*")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int x = a*b;
                st.push(x);

            }
            else if(s == "/")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int x = a/b;
                st.push(x);

            }
            else
            {
                st.push(stoi(s));
            }
        }

        return st.top();
        
    }
};
