//maximum subarray with O(n) solution............................
//siddharth jain
//C++ CODE 
#include<iostream>
using namespace std;

int main()
{
  int arr[1000];
  int n;
  int cs=0;
  int ms=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //kaden's algorithm for maxium sub array...........................
  for(int i=0;i<n;i++)
  {
    cs=cs+arr[i];
    if(cs<0){
      cs=0;
    }
    ms=max(cs,ms);
  }
  cout<<"maximum subarray sum is "<<ms;

}
// CODE TERMINATED
