class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int max = 1;
        int ans = 1;
        for(auto x: mp){
            if(x.second > max){
                max = x.second;
                ans = x.first;
            }
            else if(x.second == max){
                // ans = min(ans, x.first);
                ans = x.first;
            }
        }
        return ans;
    }
};
