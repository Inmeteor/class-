#include<iostream>
using namespace std;
class Inmeteor{
	private:
		string stage[5]={"E","D","C","B","A"};
		int m;
	public:
		score_change(int x){
			m=x;
			if(m>=60)
			m=m/10-5;
			else
			m=0;
		}
		void show(){
			cout<<stage[m];
		}
}; 
int main(){
	int x;
	cin>>x;
	Inmeteor score;
	score.score_change(x);
	score.show();
}
