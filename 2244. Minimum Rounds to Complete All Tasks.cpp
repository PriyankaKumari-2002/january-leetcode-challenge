class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mpp;
        int round = 0;
        for(auto task:tasks)
        {
            mpp[task]++;
        }
        for(auto x : mpp)
        {
           if(x.second<=1) 
               return -1;
            if(x.second == 2)
                round++;
            if(x.second>=3)
                round+=ceil((double)x.second/3.0);
        }
        return round;
    }
};
