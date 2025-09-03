class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());    Method 1

int count0 = 0, count1 = 0, count2 = 0;



        for(auto it : nums){
            if(it == 0) count0++;
            else if(it ==1) count1++;
            else count2++;
        }
        int index = 0;
        while(count0--) nums[index++] = 0;
        while(count1--) nums[index++] = 1;
        while(count2--) nums[index++] = 2;

    }
};