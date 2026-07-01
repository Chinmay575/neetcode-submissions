struct PairComparator {

    bool operator() (pair<int, int > a, pair<int,int> b ) {
        return a.second < b.second;
    }
};


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int, int>>, PairComparator> q = {};

        map<int,int> m = {};


        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        

        for(auto i: m) {
            pair<int, int> p = {i.first, i.second};
            q.push(p);
        }

        vector<int> ans = {};

        for(int i=0;i<k;i++) {
            pair<int, int> x =  q.top();
            q.pop();

            ans.push_back(x.first);
        }

        return ans;
    }
};
