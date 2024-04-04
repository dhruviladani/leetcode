class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // for(int i=0; i<nums.size(); i++){
        //     if(target > nums[i] && target <= nums[i+1]){
        //         return i+1;
        //     }
        //     else if(target > nums[nums.size()-1]){
        //         return nums.size();
        //     }
        //     else if(target == nums[i]){
        //         return i;
        //     }
        // }

        int mid;
        int l=0;
        int h=nums.size()-1;
        if(target > nums[h]){
            return h+1;
        }

        while(l <= h){
            mid = (l + h)/2;
            if(nums[mid] == target){
                return mid;
            }

            else if(target < nums[mid]){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};
