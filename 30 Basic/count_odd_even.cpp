class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int even = 0, odd = 0;
        for (int it: arr){
            (it % 2 == 0) ? even++ : odd++;
        }
        return {odd, even};
    }


        for (auto it : arr){
            (it & 1) ? odd++ : even ++;
        }
        return {odd, even};

};

