// Last updated: 08/05/2026, 10:47:59
bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    int original = x;  // Store the original number
    int reversed = 0;

    // Reverse the number
    for (; x > 0; x /= 10) {
        int digit = x % 10; // Extract the last digit

        // Check for overflow before updating reversed
        if (reversed > (2147483647 - digit) / 10) {
            return false; // Overflow detected
        }

        reversed = reversed * 10 + digit; // Add the last digit to reversed
    }

    // Compare the reversed number with the original
    return original == reversed;
}