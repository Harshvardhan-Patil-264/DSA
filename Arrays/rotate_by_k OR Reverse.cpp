https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size(); // if K > n
        reverse(nums.begin(), nums.end()); // reverse 

        reverse(nums.begin(), nums.begin() + k); // first K

        reverse(nums.begin() + k , nums.end()); // remaining K
        

    }
};



void reverse(vector<int>& arr, int l, int r){
    if(l >= r) return;

    swap(arr[l], arr[r]);

    reverse(arr, l + 1, r - 1);
}