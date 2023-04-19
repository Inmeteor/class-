#include<iostream>
using namespace std;

class HuiWen{
	public:
		int is(int n){
			int n1,n2;
			for(n1=n,n2=0;n1!=0;n1/=10){
				n2=10*n2+n1%10;
			}
			if(n2==n)
			return 1;
			else return 0;
		}
		void fun(int m,int k){
			int count =0;
			int j;
			for(j=m+1;count<k;j++){
				if(is(j)==1)
				{
					count++; 
					cout<<j<<" "; 
				}else{
					count=count;
				}
				if(count==k)
				cout<<endl;
			}
		}
};

int main(){
	HuiWen HW;
	int n,m,k;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>m>>k;
        	HW.fun(m,k);
	}
}
