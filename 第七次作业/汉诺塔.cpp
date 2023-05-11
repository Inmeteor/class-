#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		int n;
		int j=1;
	public:
		void move_printf(int n,char a,char b){
			cout<<"Step"<<j<<": "<<"Move Disk"<<n<<" from "<<a<<" to "<<b<<endl;
			j++;
		}
		void show(int n,char a,char b,char c){
		if(n==1){
			move_printf(n,a,c);
		}else
		{
			show(n-1,a,c,b);
			move_printf(n,a,c);
			show(n-1,b,a,c); 
		}
		}
}; 
int main(){
	Inmeteor how;
	int n;
	cin>>n;
	how.show(n,'A','B','C');
	return 0;
	
} 
