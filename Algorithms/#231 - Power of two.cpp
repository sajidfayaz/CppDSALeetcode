// Using bit manipulation

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        
        while(n>1 && (n&1)==0) n>>=1;
        
        return n==1 ? true : false; 
    }
};

// Using recursive method

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
        if(n%2 != 0 || n==0) 
            return false;
        
        return isPowerOfTwo(n/2);
    }
};
