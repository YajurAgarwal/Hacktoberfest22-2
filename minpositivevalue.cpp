class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
       int n=nums.size();
       vector<int>prefix(n,0);
       prefix[0]=nums[0];
       for(int i=1;i<n;i++)
       {
           prefix[i]=prefix[i-1]+nums[i];
       }
       int minm=0;
       for(int i=0;i<n;i++)
       {
         minm=min(minm,prefix[i]);
       }
      //if(minm<0)
      return abs(minm)+1;
      //return minm;
    }
};
