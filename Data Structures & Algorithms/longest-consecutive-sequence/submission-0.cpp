class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s = unordered_set<int>(nums.begin(), nums.end());
        int m = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!s.contains(nums[i] - 1)) {
                int start = nums[i];
                int c = 1;
                while(true) {
                    if(s.contains(start+1)) {
                        c++;
                        start++;
                    }
                    else {
                        break;
                    }
                }
                m = max(m,c);
            }
        }
        return m;
    }
};
