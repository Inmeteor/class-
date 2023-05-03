#include<iostream>
class Inmeteor{
	private:
		int x,y,max,min;
	public:
		void find(){
			std::cin>>x>>y;
			x=x;
			y=y;
		}
		int find_max(){
			for(max=x;;max--){
				if(x%max==0&&y%max==0)
				break;
			}
			return max;
		}
		int find_min(){
			min=x*y/max;
			return min;
		}
		void show(){
			std::cout<<max<<std::endl;
			std::cout<<min; 
		}
}; 
int main(){
	Inmeteor What;
	What.find();
	What.find_max();
	What.find_min();
	What.show();
}
