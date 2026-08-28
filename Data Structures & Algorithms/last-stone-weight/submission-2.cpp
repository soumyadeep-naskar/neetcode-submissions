class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int temp1,temp2,result;
        // A while loop
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            //at first took last or largest item in temp1 variable 
            //The pop it back
            temp1=stones[stones.size()-1];
            stones.pop_back();
            //Then the second item become the largest 
            //Then also pop it back
            temp2=stones[stones.size()-1];
            stones.pop_back();
            stones.push_back(temp1-temp2);
        }
        // The vector has only one elment or item 
        result=stones[0];
        return result;
    }
};
