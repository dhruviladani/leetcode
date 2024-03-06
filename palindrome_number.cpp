//1st method (converting int to string)

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string t = s;

        reverse(s.begin(), s.end());
        
        return t==s;
    }
};


// 2nd method (without converting into string)

class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        long long y = x;
        if(x < 0){
            return false;
        }
        while(x != 0){
            int d = x % 10;
            reverse = reverse * 10 + d;
            x = x/10;
        }

        return y == reverse;
    }
};
