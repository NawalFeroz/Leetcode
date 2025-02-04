class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ele=0;
        int sum=nums[0];
        int ans=nums[0];
        while(ele!=nums.size()-1){
            if(nums[ele+1]>nums[ele]){
                sum+=nums[ele+1];
                ans=max(sum,ans);
            }
            else{
                sum=nums[ele+1];
            }
            ele++;
        }
        return ans;
    }
};