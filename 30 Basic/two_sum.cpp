#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value → index

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        // check if the pair exists
        if (mp.find(need) != mp.end()) {
            return {mp[need], i};  // found
        }

        // store current value with index
        mp[nums[i]] = i;
    }

    return {}; // no solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty())
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    else
        cout << "No solution found" << endl;

    return 0;
}




void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No solution found" << endl;
}
