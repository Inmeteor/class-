#include<iostream>
using namespace std;

class Count{
	public:
	void C(int x){
		double c;
	c=2*3.14*x;
	cout<<"周长="<<c<<endl; 
	}
	void S(int x){
		double s;
		s=3.14*x*x;
		cout<<"面积="<<s<<endl; 
	}
}; 
int main(){
	int r;
	cin>>r;
	Count O;
	cout<<"周长="<<2*r<<endl;
	O.C(r);
	O.S(r);
	return 0;	
}
