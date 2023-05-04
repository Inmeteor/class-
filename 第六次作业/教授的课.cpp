#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		int count=0;
		int n,k;
		int a[1000];
	public:
		void input(int n,int k){
			this->n=n;
			this->k=k;
			for(int j=0;j<n;j++){
				cin>>a[j];
				this->a[j]=a[j];
			}
		}
		int Isconcel(){
			for(int i=0;i<n;i++){
				if(a[i]>0)
				count++;
			}
			if(count<k)
			return 1;
			else
			return 0;
		}
		void show(){
			if(Isconcel())
			cout<<"Yes";
			else
			cout<<"No";
		}
}; 
int main(){
	Inmeteor how;
	int n,k;
	int a[1000];
	cin>>n>>k;
	how.input(n,k);
	how.Isconcel();
	how.show();
} 
