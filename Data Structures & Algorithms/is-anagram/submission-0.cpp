class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        map<char,int> m = {};

        for(int i=0;i<s.size();i++) {
            m[s[i]]++;
            m[t[i]]--;
        }

        for(auto i: m) {
            if(i.second != 0) return false;   
        }
        return true;
    }
};
