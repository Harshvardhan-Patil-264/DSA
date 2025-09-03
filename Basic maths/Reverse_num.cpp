class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int reversed = 0;
        while (n > 0) {
            int rem = n % 10;      // get last digit
            reversed = reversed * 10 + rem; // shift and add digit
            n = n / 10;            // remove last digit
        }
        return reversed;
        }
    
};