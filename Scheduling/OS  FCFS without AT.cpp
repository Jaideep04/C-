#include<iostream>
using namespace std;

void wait(int process[],int n, int bt[],int wt[]){
    wt[0]=0;
    for(int i = 1 ; i < n ; i ++){
        wt[i] = bt[i-1] + wt[i-1];
    }
}

void turnAround( int process[],int n,int bt[],int wt[],int tat[]){
    for(int i=0 ; i<n ; i++){
        tat[i] = bt[i] + wt[i];
    }
}

void avg(int process[],int bt[],int n){
    int wt[n] , tat[n], total_wt , total_tat = 0 ;
    wait(process,n,bt,wt);
    turnAround(process,n,bt,wt,tat);
    cout <<"process"<<"\t\t"
         <<"burst time"<<"\t\t"
         <<"waiting time"<<"\t\t"
         <<"turnAround time"<<"\n";
    for(int i=0;i<n;i++){
        total_wt += wt[i];
        total_tat += tat[i];
        cout << i+1 << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

cout << "avg WT = " << (float)total_wt/(float)n << endl;
cout << "avg TAT = " << (float)total_tat/(float)n << endl;

}

int main(){
    int process[]={1,2,3,4};
    int n = sizeof(process)/sizeof(process[0]);
    int bt[] = {21,3,6,2};

    avg(process,bt,n);
    return 0;
}