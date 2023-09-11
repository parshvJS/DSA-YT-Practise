#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the Size : ";
    cin>>size;
    int a[size];

    for(int i=0 ;i<size ;i++){
        cout <<"Enter the element " <<i << " : " ;
        cin>>a[i];
        cout<<endl;
    }

    for(int i = 0 ; i<size ;i+=2){
        if(i+1 <size)
            swap(a[i],a[i+1]); 
        else
            break;       
    }

    for(int i=0;i<size ;i++){
        cout<<"Element " <<i << " : " <<a[i];
    }



}