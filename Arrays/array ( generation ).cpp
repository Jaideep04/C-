#include<iostream>
using namespace std;

int main(){
    //init of an array
    int a[10]={1,2,3};
    //input all the elements from user
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    //print all the elemnts
    for(int i=0;i<10;i++){
        cout<<a[i]<<",";
    }
    return 0;
}