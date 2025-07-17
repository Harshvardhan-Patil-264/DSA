https://www.geeksforgeeks.org/problems/find-the-frequency/1



/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        map<int, int> freq;
        
        for(auto it: arr){
            freq[it]++;
        }
        
        
        return freq[x];
        
    }
};