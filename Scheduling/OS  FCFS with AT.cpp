#include<iostream>
using namespace std;

void wait(int process[],int at[] , int n, int bt[],int wt[]){
    wt[0]=0;
    for(int i = 1 ; i < n ; i ++){
        wt[i] = (at[i-1]+bt[i-1] + wt[i-1]) - at[i];
    }
}

void avg(int process[],int at[],int bt[],int n){
    int wt[n] , total_wt  = 0 ;
    wait(process,at,n,bt,wt);
    
    cout <<"process"<<"\t\t"
         <<"arrival time"<<"\t\t"
         <<"burst time"<<"\t\t"
         <<"waiting time"<<"\n";

    for(int i=0;i<n;i++){
        total_wt += wt[i];
        
        cout << i+1 << "\t\t"
             << at[i] << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << endl;
             
    }

cout << "avg WT = " << (float)total_wt/(float)n << endl;

}

int main(){
    int process[]={1,2,3,4,5};
    int n = sizeof(process)/sizeof(process[0]);
    int bt[] = {4,3,1,2,5};
    int at[] ={0,1,2,3,4};

    avg(process,at,bt,n);
    return 0;
}