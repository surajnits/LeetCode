class Solution {
public:
    int reverse(int x) {
         int key = 0;
        while (x != 0) {
            int digit = x % 10;
            if ((key > INT_MAX / 10) || (key < INT_MIN / 10)) {
                return 0;
            }
            
            key = key * 10 + digit;
            x = x / 10;
        }
        return key;
    }
};