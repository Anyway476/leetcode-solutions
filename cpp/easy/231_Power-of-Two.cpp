/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 2^0 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 2^4 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1
 

Follow up: Could you solve it without loops/recursion?*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    // Function to determine if an integer is a power of two
    // Parameters:
    //   n: integer to evaluate
    // Returns:
    //   true if n is a power of two, false otherwise
    //
    // Note: This method leverages a key property of powers of two in binary:
    //       a power of two has exactly one bit set to 1.
    //       By doing n & (n-1), we remove that single set bit.
    //       If the result is zero and n is positive, then n is a power of two.
    //
    // Complexity: O(1) time and O(1) space, without using loops or recursion.
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    Solution sol;
    cout << boolalpha; 
    cout << sol.isPowerOfTwo(1) << endl;    // true: 2^0
    cout << sol.isPowerOfTwo(16) << endl;   // true: 2^4
    cout << sol.isPowerOfTwo(3) << endl;    // false: not a power of two
    return 0;
}
