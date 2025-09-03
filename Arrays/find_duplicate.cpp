https://leetcode.com/problems/find-the-duplicate-number/submissions/1731505117/



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> freq;

        for (auto it : nums) {
            freq[it]++;
            if (freq[it] > 1)
                return it;
        }
        return -1; // This line ensures the function always returns something
    }
};