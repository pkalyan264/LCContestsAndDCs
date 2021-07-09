#include<iostream>
using namespace std;
int LIS(vector<int>&nums)
{
  int ans=INT_MIN;
  vector<int>dp(nums.size(),1);
  for(int i=1;i<nums.size();i++)
  {
    for(int j=0;j<i;j++)
    {
      if(nums[j]<nums[i])
      {
        dp[i]=max(dp[i],dp[j]+1);
      }
    }
  }
  for(int i=0;i<dp.size();i++)
  {
    ans=max(dp[i],ans);
  }
  return ans;
}
