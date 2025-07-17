https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1



class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;  // Total numbers should be n
        long long sum = 0;
        
        for (auto it : arr)
            sum += it;
        
        long long expSum = (n * (n + 1)) / 2;
        
        return expSum - sum;
    }
};
