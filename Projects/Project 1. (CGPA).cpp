#include<bits/stdc++.h>
using namespace std;
double CGPA(double marks[],int n){
	double grade[n];
	double cgpa ,sum=0;
	for(int i=0 ; i<n ; i++){
		grade[i]=(marks[i]/10);
		sum +=grade[i];
	}
	cgpa=sum/n;
	return cgpa;
}
int main(){
	int n=5;
	double marks[]={90,80,70,90,95};
	double cgpa=CGPA(marks,n);
	cout<<"cgpa is"<<cgpa<<endl;
	cout<<"cgpa % is"<<cgpa*9.5<<endl;
	return 0;
}
