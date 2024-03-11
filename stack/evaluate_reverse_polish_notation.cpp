class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int f1;
        int f2;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                s.push(stoi(tokens[i]));
            }
            else{
                f1 = s.top();
                s.pop();
                f2 = s.top();
                s.pop();
                if(tokens[i] == "+"){
                    s.push(f2 + f1);
                }
                else if(tokens[i] == "-"){
                    s.push(f2 - f1);
                }
                else if(tokens[i] == "*"){
                    s.push(f2 * f1);
                }
                else if(tokens[i] == "/"){
                    s.push(f2 / f1);
                }
            }
        }
        return s.top();
    }
};
