class Solution {
public:
    int countVowelStrings(int n) {
        int a = 1, e = 1, i = 1, o = 1, u = 1;
        while(--n){
            e+=a;
            i+=e;
            o+=i;
            u+=o;
        }
        return a + e + i + o + u;
    }
};