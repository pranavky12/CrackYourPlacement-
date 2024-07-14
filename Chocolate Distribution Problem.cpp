 
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    int p1=0;
    int p2=m-1;
    int ans=INT_MAX;
    
   while(p2<a.size()){
       int diff=a[p2]-a[p1];
       ans=min(diff,ans);
       
       p1++;
       p2++;
       
   }
   return ans;
    

    
    }   
};
 