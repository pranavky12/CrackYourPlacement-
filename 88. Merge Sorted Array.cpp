class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=0;
        int p2=0;
vector<int>ans;
        while(p2<n && p1<m){
            if(nums1[p1]<=nums2[p2])
            ans.push_back(nums1[p1++]);

            else if(nums1[p1]>nums2[p2])
            ans.push_back(nums2[p2++]);
        }
        while(p1<m)
       ans.push_back(nums1[p1++]);
       while(p2<n)
        ans.push_back(nums2[p2++]);

        nums1=ans;
    }
};