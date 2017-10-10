//Little Shino and Pairs Solution
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int num;
	int a;
	int ans=0;
	stack <int> s;
  cin>>num;
  for(int i=0;i<num;i++)
  {
        cin>>a;
        
        while(!s.empty() && a>s.top()){
            ans++;
            s.pop();
        }
        if(!s.empty())
            ans++;
      // if(s.empty)
       s.push(a);
    }
    cout<<ans;
	return 0;
}
