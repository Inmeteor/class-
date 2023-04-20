#include<iostream>
using namespace std;
class Inmeteor{
	private:
		int m=0;
	public:
		Counter( int x){
			while(x!=0){
				m=m+x%10;
				x=x/10; 
				
			}
		}
		void show(){
			cout<<m;
		}
};
int main(){
	int x;
	cin>>x;
	Inmeteor gwh;
	gwh.Counter(x);
	gwh.show();
}
