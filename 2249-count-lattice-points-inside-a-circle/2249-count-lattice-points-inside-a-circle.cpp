class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        map <pair<int, int>, int > hm;
        
        for(int i = 0; i < circles.size(); i++){
            int radius = circles[i][2];   
            int x = circles[i][0], y = circles[i][1];
            
            //traverse the circle 
            for(int j = x - radius; j <= x + radius; j++){
                for(int k = y - radius; k  <= y + radius; k++){
                    // cout << j << "," << k << "++" << endl;
                    
                    bool cond1 = (j-x)*(j-x) + (k-y)*(k-y) <= radius * radius;
                    
                    if(cond1){
                        // cout << j << "," << k << "++" << endl;
                        hm[{j,k}]++;
                    }
                    
                }
                // cout << endl << endl;
            }    
        }
        int res = 0;
        for(auto x: hm){
            // cout << x.first.first << "," << x.first.second  << " "<< x.second << endl;
            if(x.second >= 1){
                res++;
            }
        }
        
        return res;
    }
};