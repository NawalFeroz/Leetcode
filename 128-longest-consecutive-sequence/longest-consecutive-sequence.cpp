class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> se;
        for(int i=0;i<nums.size();i++){
            se.insert(nums[i]);
        }
        int ans=0;
        for(auto& s:se){
            if(!se.contains(s-1)){
                int c=0;
                int temp=s;
                while(se.contains(temp)){
                    c++;
                    temp++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }

};