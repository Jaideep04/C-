#include<iostream>
#include<algorithm>
using namespace std;

struct process{
    int id;
    int priority;
    int at;
    int bt;
    
};

bool comp( process p1 , process p2){
    if (p1.at == p2.at){
        return p1.priority < p2.priority ;
    }
    else {
        return p1.at < p2.at ;
    } 
}

void wait(process pro[] , int n, int wt[]){
    wt[0]=0;
    for(int i = 1 ; i < n ; i ++){
        wt[i] = (pro[i-1].at + pro[i-1].bt + wt[i-1]) - pro[i].at;
    }
}


void avg(process pro[] ,int n){
    int wt[n] , total_wt  = 0 ;
    wait(pro, n , wt);
    
    cout <<"process"<<"\t\t"
         <<"priority"<<"\t\t"
         <<"arrival time"<<"\t\t"
         <<"burst time"<<"\t\t"
         <<"waiting time"<<"\n";

    for(int i=0;i<n;i++){
        total_wt += wt[i];
        
        cout << pro[i].id << "\t\t"
             << pro[i].priority << "\t\t\t"
             << pro[i].at << "\t\t\t"
             << pro[i].bt << "\t\t\t"
             << wt[i] << endl;
             
    }

cout << "avg WT = " << (float)total_wt/(float)n << endl;
}

int main(){
    process pro[] ={{1,2,0,4},
                    {2,3,1,3},
                    {3,4,2,1},
                    {4,5,3,5},
                    {5,5,4,2}};
    int n = sizeof(pro)/sizeof(pro[0]);

    sort (pro,pro+n,comp);
    avg (pro,n);
    return 0;
}