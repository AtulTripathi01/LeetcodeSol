class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;//Since 3 is a prime number, the only divisors of 3193^{19}319 are 303^030, 313^131 ... 3193^{19}319, therefore all we need to do is divide 3193^{19}319 by n. A remainder of 0 means n is a divisor of 3193^{19}319 and therefore a power of three. Therefore 3^19 = 1162261467
    }
};