class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        
        // Methond 1
        int max = arr[0];
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
        
        // Methond 2
        
        return *max_element(arr.begin(), arr.end());
    }
};
