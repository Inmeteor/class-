#include<iostream>
using namespace std;
class Inmetoer{
	private: 
	string a[4]={"Spring","Summer","Fall","Winter"};
	int m;
	public:
		season(int x){
			m=x;
		}
		void change(){
			cout<<a[m-1];
			}
}; 
int main(){
	int x;
	cin>>x;
	Inmetoer season;
	season.season(x);
	season.change();
}
