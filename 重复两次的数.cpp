#include<iostream>
using namespace std;
class twice{
	public: 
	void Found(int n, int a[]){
	 cin>>n;
	 for(int j=0;j<n;j++){
	 	cin>>a[j]; }
	 	int find=0;
		for(int i=0;i<n;i++)
	{
		for(int p=i+1;p<n;p++){
			find = a[i]^a[p];
			if(find==0){
			cout<<a[i]<<" ";
		    }
			}
		}
	}
};
int main()
{
	int n;
	int a[100];
	twice can;
	can.Found(n,a);
	return 0;
} 
