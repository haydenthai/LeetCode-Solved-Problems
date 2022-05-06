class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> hm;
        for(int i = 0; i < nums.size(); i++){
            hm[nums[i]]++;
        }
        vector <int> res;
        
        priority_queue < pair<int, int> > pq;
        for(auto x = hm.begin(); x != hm.end(); x++){
            pq.push(   make_pair(x->second, x->first)     );
            if(pq.size() > (int)hm.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};