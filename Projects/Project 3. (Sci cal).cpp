#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	int z;
	cout<<"WHAT YOU WANT TO FIND: "<<endl;
    cout<<"Press '1' for Power: "<<endl;
    cout<<"Press '2' for Sin: "<<endl;
    cout<<"Press '3' for Square: "<<endl;
    cout<<"Press '4' for Cos: "<<endl;
    cout<<"Press '5' for Tan: "<<endl;
    cout<<"Press '6' for Log: "<<endl;
    cout<<"Press '7' for Base Log: "<<endl;
    cin>>z;
    switch(z){
    	case 1:
    		cout<<"find power"<<endl;
    		cin>>a>>b;
    		float p;
    		p=pow(a,b);
    		cout<<p<<endl;
    		break;
    	case 2:
    		cout<<"find sin"<<endl;
    		cin>>a;
    		float s;
    		s=sin(a);
    		cout<<s<<endl;
    		break;
    	case 3:
    		cout<<"find square"<<endl;
    		cin>>a;
    		float q;
    		q=sqrt(a);
    		cout<<q<<endl;
    		break;
    	case 4:
    		cout<<"find cos"<<endl;
    		cin>>a;
    		float c;
    		c=cos(a);
    		cout<<c<<endl;
    		break;
    	case 5:
    		cout<<"find tan"<<endl;
    		cin>>a;
    		float T;
    		T=tan(a);
    		cout<<T<<endl;
    		break;
    	case 6:
    		cout<<"find log"<<endl;
    		cin>>a;
    		float l;
    		l=log(a);
    		cout<<l<<endl;
    		break;
    	case 7:
    		cout<<"find baselog"<<endl;
    		cin>>a;
    		float bl;
    		bl=log10(a);
    		cout<<bl<<endl;
    		break;
    	default:
    		cout<<"invalid no"<<endl;
    }
    return 0;
}