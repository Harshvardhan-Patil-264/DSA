// using Set
class Solution {
  public:
    int removeDuplicate(int arr[], int n) {
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(arr[i]);
        }

        int index = 0;
        for (auto it : s) {
            arr[index++] = it;  // Copy distinct elements back to array
        }

        return s.size();  // Return the count of unique elements
    }
};


// using hash
#include <unordered_map>

class Solution {
  public:
    int removeDuplicate(int arr[], int n) {
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        int index = 0;
        for (auto it : mp) {
            arr[index++] = it.first;  // Place unique elements at the start
        }

        return mp.size();  // Total distinct elements
    }
};

// using two poitner

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        if(n == 0 ) return 0;
        
        int j = 0; // unique 
        
        for (int i = 1; i < n; i++){
            if(arr[i] != arr[j]){
                j++;
                
                arr[j] = arr[i];
            }
        }
        
        return j+ 1;
        
    }
};