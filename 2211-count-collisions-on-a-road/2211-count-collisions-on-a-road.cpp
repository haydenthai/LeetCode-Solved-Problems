class Solution {
public:
    int countCollisions(string directions) {
        int res = 0, n = directions.length(), i = 0, carsFromRight = 0;
        
        //no collisions when we start w/ L
        while(i < n and directions[i] == 'L') i++;
        
        for(; i <n; i++){
            if(directions[i] =='R'){
                carsFromRight++;
            }else{
                if(directions[i] == 'S'){
                    res += carsFromRight;
                }else if(directions[i] == 'L'){
                    res += carsFromRight+1;
                }
                carsFromRight = 0;
            }
        }
        
        
        return res;
    }
};