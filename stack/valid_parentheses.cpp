class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            char ch=s[i];

            if(ch=='(' || ch=='{' || ch=='['){
                s1.push(ch);
            }
            else{
                if(!s1.empty()){
                    if((ch==')' && s1.top()=='(') || (ch=='}' && s1.top()=='{') || (ch==']' && s1.top()=='[')){
                        s1.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
