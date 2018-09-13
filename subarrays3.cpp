//print the maximum sum in subarray
//siddharth jain
#include<iostream>
using namespace std;
int main()
{
  int n;
  int maxSum=0;
  int curSum=0;
  int left=-1;
  int right=-1;
  cin>>n;
  int arr[1000];
  int cumSum[1000]={0};
  cin>>arr[0];
  cumSum[0]=arr[0];
  for(int i=1;i<n;i++)
  {
    cin>>arr[i];
    cumSum[i]=cumSum[i-1]+arr[i];
  }

  //generating subarrays
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      curSum=0;
      curSum=cumSum[j]-cumSum[i-1];

      if(curSum>maxSum)
      {
        maxSum=curSum;
        left=i;
        right=j;

      }
    }
  }
  cout<<"maximum sum in subarrays is"<<maxSum<<endl;
  for(int k=left;k<=right;k++)
  {
    cout<<arr[k]<<",";
  }
  return 0;
}
