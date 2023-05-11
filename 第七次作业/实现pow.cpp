#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		int x,n,multi=1;
	public:
		void get(){
			cin>>x>>n;
			this ->x=x;
			this ->n=n;
		}
		void pow(){
			for(int i=0;i<n;i++){
				multi=multi*x;
			}
		}
		void show(){
			cout<<multi;
		}
}; 
int main(){
	Inmeteor how;
	how.get();
	how.pow();
	how.show();
	return 0;
}
