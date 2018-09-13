//siddharth jain
#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);


        return binarySearch(arr, mid+1, r, x);
   }


   return -1;
}
int main()
{
  int n;
  cout<<"enter the number of elements you want to enter in the array"<<endl;
  cin>>n;
  int arr[1000];
  cout<<"enter the elements";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+(n-1));
  int x;
  cout<<"enter the element you want to search"<<endl;
  cin>>x;
  int result=binarySearch(arr,0,(n-1),x);
  if(result!= -1)
  {
    cout<<result;
  }


}
