class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product =1;
        int count =0;
        vector <int > arr;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                product *=nums[i];
            }
            if (nums[i]==0)
            count++;
        }
        for (int i=0;i<nums.size();i++){
            if (count ==0)
            arr.push_back(product/nums[i]);
            else if (count==1 && nums[i]==0)
            arr.push_back(product);
            else if (count ==1 && nums[i]!=0 ||count >=2)
            arr.push_back(0);
        }
        return arr;
    }
};
