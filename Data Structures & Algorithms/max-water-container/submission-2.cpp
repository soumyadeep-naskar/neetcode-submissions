class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lt=0;
        int rt=heights.size()-1;
        int area=min(heights[lt],heights[rt])*(rt-lt);
        int res=area;
        while(lt<rt){
            if (heights[lt]<=heights[rt]){
                lt++;
            }
            else{
                rt--;
            }
            area=min(heights[lt],heights[rt])*(rt-lt);
            res=max(res,area);
        }
        return res;
    }
};
