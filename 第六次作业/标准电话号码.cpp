#include<bits/stdc++.h>
using namespace std;
class Inmeteor{
	private:
		string code[8]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"}; 
		char word[7];
	public:
		void input(){
			for(int i=0;i<7;i++){
				cin>>word[i];
				this->word[i]=word[i];
			}
		}
		void cmp_change(){
			for(int i=0;i<7;i++){
				for(int j=0;j<8;j++){
					if(code[j].find(word[i])!=-1)
					cout<<j+2;
				}
			}
		}
	 
}; 
int main(){
	Inmeteor how;
	how.input();
	how.cmp_change();
	return 0;
}
