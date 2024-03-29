class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t leftPointer = pow(2, 31);
        uint32_t reversed = 0;
        while (n > 0) {
            reversed += leftPointer * (n & 1);
            leftPointer >>= 1;
            n >>= 1;
        }
        
        return reversed;
    }
};