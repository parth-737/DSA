class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            // Extract the last digit and append it to reversedHalf
            reversedHalf = (reversedHalf * 10) + (x % 10);
            // Remove the last digit from x
            x /= 10;
        }

        // For even-length numbers (e.g., 1221), x will equal reversedHalf (12 == 12).
        // For odd-length numbers (e.g., 12321), x will be 12 and reversedHalf will be 123.
        // We can discard the middle digit by doing reversedHalf / 10.
        return x == reversedHalf || x == reversedHalf / 10;
    }
};