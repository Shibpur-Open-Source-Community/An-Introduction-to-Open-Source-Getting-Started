//Binary Search

#include<bits/stdc++.h>
using namespace std;

int main()
{ int index;
  int n;
  cin>>n;
  int arr[n];
  int key;
  cin>>key;
  
  for(int i=0;i<n;i++)
      cin>>arr[i];
  
  for(int i=0;i<n;i++ )
      if(arr[i]==key)
        index=i;
        
  cout<<index+1;
  
 
}
