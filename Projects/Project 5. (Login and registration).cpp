#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class user{
    public:
       string username;
       string password;
};

void Register(){
    user newuser;
    cout<<"enter username: ";
    cin>>newuser.username;
    cout<<endl;

    cout<<"enter password: ";
    cin>>newuser.password;
    cout<<endl;

    ofstream file("Project 5. (Login and registration).txt", ios::app);
        if(file.is_open()){
            file<<newuser.username<<" "<<newuser.password<<endl;
            file.close();
            cout<<"registration succesfull"<<endl;
        }
        else{
            cout<< "error in registration"<<endl;
        }
    
}

bool login(){
    user loginUser;
    cout<<"enter username: ";
    cin>>loginUser.username;
    cout<<endl;

    cout<<"enter password: ";
    cin>>loginUser.password;
    cout<<endl;

    ifstream file("Project 5. (Login and registration).txt");
    string username ,password ;
    if(file.is_open()){
        while(file>>username>>password){
            if(username==loginUser.username && password==loginUser.password){
                cout<<" login succesfull"<<endl;
                file.close();
                return true;
            }
        }
        file.close();
    }
    else{
        cout<<" error in opening file"<<endl;
    }
    cout<<"invalid credentials"<<endl;
    return false;
}

int main (){
    int choice;
    cout<<"enter 1 for NewUser , 2 for LoginUser , 3 for exit : ";
    cin>>choice;

    switch(choice){
        case 1:
            Register();
            break;
        case 2:
            login();
            break;
        case 3:
            cout<<" Good Bye";
            break;
        default:
            cout<<"invalid choice";
    }

    return 0;
}


