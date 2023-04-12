#include<iostream>
using namespace std;

class Copy{
public:
void yang(int x){
	int j,i;
	int a[x][x];
for(i=0;i<x;i++)
{
	for(j=1;j<x;j++){
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	a[i][0]=a[i][i]=1;
}
for(i=0;i<x;i++){
	cout<<"\n";
	for(j=0;j<=i;j++){
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
} 
}
}; 

int main(){
	int n;
	cin>>n;
	Copy y;
	y.yang(n);
	return 0;
	
}
