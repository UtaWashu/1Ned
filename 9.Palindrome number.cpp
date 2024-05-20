class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        
        int num = x;
        long long reverse = 0;
        
        while(num > 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        
        return x == reverse;
    }
};