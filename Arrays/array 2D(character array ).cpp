#include<iostream>
using namespace std;

int main(){
    char c[10][10];
    c[0][0]='A';
    char b[][10]={{'q','p','\0'},{'d','e','f','\0'}};
    char a[][10]={"qp","sss","ghi","hello"};
    cout<<a[2]<<endl;
    cout<<b[1]<<endl;

    return 0;
}