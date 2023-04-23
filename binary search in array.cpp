//---------------------------binary search in array-----------------------------
/* in binary search we have use the formula h+l/2  and here for low (mid=mid+1) 
and high(mid=mid-1)*/
#include<iostream>
using namespace std;

int main(){
    int A[10] = {6,8,13,17,20,22,25,28,30,35};
    int l= 0 , h=9 , key , mid;

    cout<<"Enter the key"<<endl;
    cin>>key;
    mid=(l+h)/2;
    
    while(l<=h){
    if(key=A[mid]){
        cout<<"fOUND AT "<<mid<<endl;
        return 0;
    }
    else if(key>A[mid])
    l=mid+1;
    else h=mid-1;
    }
    cout<<"not found";

    
    return 0;
}
