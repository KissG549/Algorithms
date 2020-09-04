/*
  Reverse bits of a given 32 bits unsigned integer.
  
  source: https://leetcode.com/problems/reverse-bits/
  
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t new_num = 0;

        for (int i = 0, j = 31; i< 32; ++i, --j)
        {
            new_num |= bool(n & (1 << i)) << j;
        }

        return new_num;
    }
};
