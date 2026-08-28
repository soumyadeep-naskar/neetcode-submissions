class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long result=0;
        int temp=0;
        vector <int> ans ;
        for (int digit :digits){
            result=result*10+digit;
        }
        result +=1;
        while (result){
            temp=result%10;
            ans.push_back(temp);
            result/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
