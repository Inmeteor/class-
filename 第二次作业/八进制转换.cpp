#include<iostream>
using namespace std;

class Oct{
	public:    
	void exchange(int x){
		int a[1000]={0};
		int i,j;
		for(i=0;i<100;i++){
			int p=x % 8;
			x=x / 8;
			a[i] = p;
			if(x==0)
		{
			break;
		}
		}
		for(j=i;j>=0;j--){
	   cout<<a[j];
		}
	}
	
}; 
int main()
{
	int t;
	cin>>t;
	Oct Daan;
	Daan.exchange(t);
	return 0;
}
