#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		int n;
		int t;
		int a[100];
	public:
		void input(int n){
			this->n=n;
			for(int j=0;j<n;j++){
				cin>>a[j];
				this->a[j]=a[j];
			}
		}
		int sort(){
			for(int i=0;i<n;i++){
				for(int p=1+i;p<n;p++)
				{
					if(a[i]>a[p])
					{
						t=a[i];
						a[i]=a[p];
						a[p]=t;
					}
				}
			}
		}
		void show(){
			for(int i=0;i<n-1;i++){
				cout<<a[i]<<" ";
			}
			cout<<a[n-1];
		}
}; 
int main(){
	Inmeteor how;
	int n;
	cin>>n;
	how.input(n);
	how.sort();
	how.show();
}
