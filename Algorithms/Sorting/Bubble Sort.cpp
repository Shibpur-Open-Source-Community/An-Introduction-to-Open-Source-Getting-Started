#include <iostream>
#include <conio.h>

using namespace std;

int main(){

int a[20],n;

cout<<"Enter No. of Elements (Should be less than 21)\n";
cin>>n;

cout<<"Enter Elements\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
	if(a[j]>a[j+1]){
	    int temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
	}
    }
}

cout<<"Sorted Array:\n";
for(int i=0;i<n;i++){
    cout<<a[i]<<",";
}

getch();
return 0;
}
