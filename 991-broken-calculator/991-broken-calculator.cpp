class Solution {
public:
    int brokenCalc(int startValue, int target) {
        long long res = 0;
        long long tar = target;
        //reduce target as much as possible b/c this can be done w/ greedy
        while(startValue != tar){
            //if divisible by 2 then divide by 2 
            if(tar%2==0 && startValue < tar){
                tar /= 2;
            }else if(tar > startValue){
                //increase by 1 if tar is greater than startValue
                tar += 1;
            }else{
                res += abs(tar-startValue) -1;
                tar = startValue;
            }
            res++;
        }
    
    return res;
    }
};