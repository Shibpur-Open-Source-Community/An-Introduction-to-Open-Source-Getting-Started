#include <iostream>

using namespace std;

int search(int a[],int n,int x)
{
    int i=0;

    for (i=0; i<n; i++){
        if (a[i]==x)
        return i;
    }
    
    return -1;
}


int main() 
{
    int a[] = {-1,23,87,1,35},item =35;
    int pos=search(a,5,item);

    if(pos!=-1){
        cout<<"Item found at index:"<<pos<<"\n";
    }

    else{
        cout<<"Item not found\n";
    }
    return 0;
}
