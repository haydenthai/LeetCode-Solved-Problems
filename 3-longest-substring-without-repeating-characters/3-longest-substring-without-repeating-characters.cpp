class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0;
        set<char> substr;
        for(int right = 0; right < s.length(); right++){
            while(substr.find(s[right]) != substr.end()   ){
                substr.erase(s[left]);
                left++;
            }
            substr.insert(s[right]); 
            res = max(res, right-left+1);
        }
        return res;
    }
};