	#include<iostream>
	using namespace std;
	class Inmeteor{
		public:
			int even(int x){
				if(x%2==0)
				return 1;
				else
				return 0;
			}
		 void Count(){
		     cin>>x;
		     sum=0;
		     while(x>0){
		 	 if(even(x)==0)
		 	 sum=sum+x;
		  	 cin>>x;
		     }
		}
		void print(){
			cout<<sum;
		}
		private:
		int x,sum; 
	}; 
	int main(){
		Inmeteor T;
		T.Count();
		T.print();	
	}
