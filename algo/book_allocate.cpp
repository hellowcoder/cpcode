class Solution {
private:
  int cal(vector<int>&v,int mid){
    int total=1;
    int page=0;
    for(int i=0;i<v.size();i++){
        if(page+v[i]<=mid){
            page+=v[i];
        }else{
            total++;
            page=v[i];
        }
    }
    return total;
  }    
public:
    int splitArray(vector<int>& v, int k) {
     int n=v.size();
     int low=*max_element(v.begin(),v.end());
     int high=accumulate(v.begin(),v.end(),0);
     int ans=0;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(cal(v,mid)>k){
            low=mid+1;
        
        }else{
           high=mid-1;
        }
     }
     return low;
    }
};