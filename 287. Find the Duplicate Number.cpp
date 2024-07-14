class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=0;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1)return nums[i];
        }
        return -1;
        
    }
};