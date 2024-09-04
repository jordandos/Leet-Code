class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) //if x is less than 0, return false 
        {
            return false;
        }

        long long reversed = 0; //create reversed variable holder
        long long temp = x;//create temp variable

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};