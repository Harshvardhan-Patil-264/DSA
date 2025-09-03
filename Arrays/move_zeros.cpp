https://leetcode.com/problems/move-zeroes/submissions/1731449700/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int forward = 0; 
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[forward]);
                forward++;
            }
        }

        
    }
};