#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		char a[32];
		char c;
		int j=0;
	public:
		void get(){
			for(int i=0;i<32;i++){
				cin>>a[i];
				j++;
				this->a[i]=a[i];
			}
		}
		void show(){
			for(int i=31;i>=0;i--){
				cout<<a[i];
			}
		}
}; 
int main(){
	Inmeteor how;
	how.get();
	how.show();
	return 0;
}
