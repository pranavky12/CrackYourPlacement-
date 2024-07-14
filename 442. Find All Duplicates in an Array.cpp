class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
vector<int>ans;

        for(int i=0;i<nums.size();i++){
           int num=abs(nums[i])-1;
           if(nums[num]<0)
           ans.push_back(abs(nums[i]));
           nums[num]*=-1;

        }
        return ans;
        
    }
};