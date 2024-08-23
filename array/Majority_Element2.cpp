class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> ans;
        int max = nums.size()/3;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int t;
        for(auto i : m){
            if(i.second > max){
                // max = i.second;
                t = i.first;
                ans.push_back(t);
            }
            // else if(i.second == max){
            //     // max = i.second;
            //     ans.push_back(i.first);
            // }
            
        }
        
        return ans;
    }
};
