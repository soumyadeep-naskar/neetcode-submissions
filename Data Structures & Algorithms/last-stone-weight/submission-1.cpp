class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int temp1,temp2,result;
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            temp1=stones[stones.size()-1];
            stones.pop_back();
            temp2=stones[stones.size()-1];
            stones.pop_back();
            stones.push_back(temp1-temp2);
        }
        result=stones[0];
        return result;
    }
};
