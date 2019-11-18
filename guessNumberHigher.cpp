//Question: https://leetcode.com/problems/guess-number-higher-or-lower

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
  int Left=1, Right=n, mid;

    while (Left <= Right) {
        mid=Left+(Right-Left)/2;
        int X= guess(mid);
        if (X==0) return mid; 
        else if (X<0) Right = mid-1; 
        else Left = mid+1; 
    }
    return -1;
    }
};
