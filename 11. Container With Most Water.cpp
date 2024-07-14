class Solution {
public:
    int maxArea(vector<int>& height) {
        //two poiner approach

        int p1=0,p2=height.size()-1;
         
        int curr=0,ans=0;

        while(p1<p2){
            if(height[p1]<=height[p2])
            {
                curr=(p2-p1)*min(height[p1],height[p2]);
                p1++;
            }
            else if(height[p1]>height[p2]){
                 curr=(p2-p1)*min(height[p1],height[p2]);
                p2--;
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};