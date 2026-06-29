class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.size();
        int window = len;

        map<char, int> m = {};

        int max_freq = 0;
        int left = 0;
        int result = 0;

        for(int i =0;i<len;i++) {
            m[s[i]]++;
            max_freq = max(max_freq, m[s[i]]);
        
            while(((i-left+1) -max_freq) > k ) {
                m[s[left]]--;
                left+=1;
            }
            result = max(result, i-left+1);
        }

        return result;
        
    }
};
