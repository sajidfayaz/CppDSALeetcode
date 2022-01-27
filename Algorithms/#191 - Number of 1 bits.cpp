class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n) {
            if(n&1 == 1)
                count++;
            
                n>>=1;
        }
        
        return count;
    }
};

// Easier method using bitset

class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> b(n);
        
        return b.count();
    }
};