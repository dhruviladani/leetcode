class Solution {
public:
    string reverseWords(string s) {
        // string ans ;
        // string temp;
        // for(int i=s.size(); i>0; i--){
        //     if(s[i] != ' '){
        //         temp = temp + s[i];
        //     }
        //     else if(i == 1){
        //         for(int i=temp.size(); i>=0; i--){
        //             ans = ans + temp[i];
        //         }
        //     }
        //     else {
        //         for(int i=temp.size(); i>=0; i--){
        //             ans = ans + temp[i];
        //         }
        //         temp = "";
        //     }
            
        //     // continue;

            
        // }
        // return ans;


        string ans;
        string temp;
        for (int i = s.size() - 1; i >= 0; i--) { // Starting from the end of the string
            if (s[i] != ' ') {
                // Append characters to temp to form a word
                temp = s[i] + temp; // this one gives you "blue"
                // e + ''; u + e ; l + ue ; b + lue;
            } else {
                if (!temp.empty()) { // If temp is not empty, it means we have found a word
                    ans += temp + " "; // Append the reversed word to ans
                    temp = ""; // Reset temp for the next word
                }
            }
        }
        
        // Append the last word
        if (!temp.empty()) {
            ans += temp + " ";
        }
        
        // Remove the trailing space if it exists
        if (!ans.empty()) {
            ans.pop_back();
        }
        
        return ans;
    }
};
