#include<iostream>
using namespace std;

class Inmetoer{
	private:
	string stage[6]={"Children","Teenagers","Youth","middle-aged","Elderly","Old man"}; 
	int m; 
	public:
		stage_age(int x){
			if(x>=1&&x<=10)
			m=0;
			if(x>=11&&x<=20)
			m=1;
			if(x>=21&&x<=40)
			m=2;
			if(x>=41&&x<=50)
			m=3;
			if(x>=51&&x<=80)
			m=4;
			if(x>=81&&x<=100)
			m=5; 
		}
		void print(){
			cout<<stage[m];
		}
		
}; 
int main(){
	int x;
	cin>>x;
	Inmetoer age;
	age.stage_age(x);
	age.print();
}
