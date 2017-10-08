//Binary Search
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
  int n;
  cin>>n;
  
  int arr[n];
  
  for(int i=0;i<n;i++)
      cin>>arr[i];
  
  int t;
  cin>>t;
  
  while(t--)
  {
  int key;
  cin>>key;
  
  int mid;
  int low=0;
  int high=n-1;
  
  while(low<=high)
  {
    mid=low+(high-low)/2;
    
    if(arr[mid]==key)
      {cout<<mid+1<<endl;
      break;
      }
      
    else if(arr[mid]>key)
      high=mid-1;
    
    else
      low=mid+1;
  }
  }
}
