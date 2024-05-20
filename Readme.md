Задача:
1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Рещение:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0;; ++i) {
            int x = nums[i];
            int y = target - x;
            if (m.count(y)) {
                return {m[y], i};
            }
            m[x] = i;
        }
    }
};

Задача:
9.Given an integer x, return true if x is a palindrome, and false otherwise.
Решение:

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

Задача:
66.You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's. Increment the large integer by one and return the resulting array of digits.
Решение:

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};