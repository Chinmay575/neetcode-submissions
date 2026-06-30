class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int m = n;

        while(i < n ) {
            if(i < m) {
                m-=i;
            }
            else {
                return i-1;
            }
            i++;
        
        }

    }
};