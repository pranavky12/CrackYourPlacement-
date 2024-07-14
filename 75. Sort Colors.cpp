

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int mid=0;


       while(mid<=high){
            if(nums[mid]==2)
            swap(nums[mid],nums[high--]);
            else if(nums[mid]==0)
            swap(nums[mid++],nums[low++]);
            else mid++;
        }

        
    }
};