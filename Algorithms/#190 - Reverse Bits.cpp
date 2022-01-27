class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b;
        bitset<32> x(n);
        int j=0;
        for(int i=31; i>=0; i--) {
            
            b.set(j, x[i]);
            j++;
        }
        
        return b.to_ulong();
    }
};