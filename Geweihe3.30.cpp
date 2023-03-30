#include<iostream>
using namespace std;
class geweihe{
       int x;
public:
      geweihe(int x) {
      	this->x=x;
      }
      int geiwodaan(int x){
      	int t=0;
      	while(x!=0){
      		t += x%10;
		    x /= 10; 
      	}
      	return t;
      }
};
int main(){
	int a;
	cin>>a;
	geweihe gwh(a);
	std::cout<<gwh.geiwodaan(a)<<std::endl;
	return 0; 
} 
