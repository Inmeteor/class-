#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		char first[10000];
		char second[10000];
		char a[10000],b[10000];
		int length1,length2;
		int count=0;
	public:
		void find()
		{ 
		gets(first);
		gets(second); 
		length1=strlen(first);
		length2=strlen(second);
		for(int i=0;i<length2-length1;i++){
			for(int j=0;j<length1;j++){
				a[j]=first[j];
				b[j]=second[i+j];
			}
				if(strcmp(a,b)==0){
					cout<<i<<" ";
					count++;
				}
		}
		if(count==0)
		cout<<"-1";
		}
		
}; 
int main()
{
	Inmeteor how;
	how.find();
	return 0;
}
