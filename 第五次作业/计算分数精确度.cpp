#include<iostream>
#include<string>
using namespace std;
class Inmeteor{
	private:
		int p,j,a;
		int nume,deno;
	public:
		void count(){
		scanf("%d/%d",&nume,&deno);
			cout<<"0.";
		for(p=0;p<200;p++)
		{
			a=nume*10/deno;
			j=nume*10%deno;
			nume=j;
			cout<<a;
			if(nume==0)
			break;
		}
		} 
}; 
int main(){
	Inmeteor How;
	How.count();
}
