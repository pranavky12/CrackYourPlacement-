 
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    sort(arr,arr+n);
    int low=0,high=n-1;
    int f=-1,c=-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid]<=x) {
            f=arr[mid];
          low=mid+1;
        }
          
        else high=mid-1;
        
        
    }
    low=0;high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid]>=x) {
            c=arr[mid];
            high=mid-1;
          
        }
         else low=mid+1;
         
        
        
    }
    return {f,c};
    
    
    
}