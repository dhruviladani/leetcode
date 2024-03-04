class Solution {
public:
    bool isPalindrome(string s) {
        string r = "" ;
        for(int i=0; i<s.length(); i++){
            if(isalnum(s[i])){
                r += toupper(s[i]);
            }
        }
        string t = r;
        reverse(r.begin(), r.end());

        return t == r;
    }
};
