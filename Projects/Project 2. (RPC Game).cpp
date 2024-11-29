#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char computerChoice() {
    srand(time(0));
    char alpha[3] = {'r', 'p', 's'};
    return alpha[rand() % 3];
}
int main(){
	int playerChoice='\0';
	cout<<"enter 0 for rock , 1 for paper ,2 for scissors"<<endl;
	cin>>playerChoice;
	
	char compNum =computerChoice();
	
	switch(compNum) {
		case 'r':
			cout<<"computer choose 0 for rock"<<endl;
			if( playerChoice==0){
				cout<<" u choose 0 for rock"<<endl;
				cout<<"game is tie"<<endl;
				
			}
			if(playerChoice==1){
				cout<<" u choose 1 for paper"<<endl;
				cout<<" u win"<<endl;
				
			}
			if(playerChoice==2){
				cout<<" u choose 2 for scissors"<<endl;
				cout<<" u lose"<<endl;
				
			}
			break;
		case 'p':
			cout<<"computer choose 1 for paper"<<endl;
			if( playerChoice==1){
				cout<<" u choose 1 for paper"<<endl;
				cout<<"game is tie"<<endl;
					
			}
			if(playerChoice==2){
				cout<<" u choose 2 for scissors"<<endl;
				cout<<" u win"<<endl;
				
			}
			if(playerChoice==0){
				cout<<" u choose 0 for rock"<<endl;
				cout<<" u lose"<<endl;
				
			}
			break;
		case 's':
			cout<<"computer choose 2 for scissors"<<endl;
		    if( playerChoice==2){
		    	cout<<" u choose 2 for scissors"<<endl;
				cout<<"game is tie"<<endl;
					
			}
			if(playerChoice==0){
				cout<<" u choose 0 for rock"<<endl;
				cout<<" u win"<<endl;
				
			}
			if(playerChoice==1){
				cout<<" u choose 1 for paper"<<endl;
				cout<<" u lose"<<endl;
				
			}
			break;
		default:
		   cout<<"invalid no "<<endl;		    	
	}
	return 0;
}