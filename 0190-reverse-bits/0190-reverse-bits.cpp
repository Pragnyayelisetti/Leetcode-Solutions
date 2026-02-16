class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bits[32]={0};
        int i=0;
        while(n>0 && i<32){
            bits[i]=n%2;
            n=n/2;
            i++;
        }
        uint32_t result = 0;
        uint32_t power = 1;
        for(int j=31; j>=0; j--){
            result+=bits[j]*power;
            power*=2;
        }
        return result;
    }
};