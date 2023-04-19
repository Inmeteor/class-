#include<iostream>
using namespace std;
class Solution{
public:
int UTC(int B){
 int U;
 
    U = B - 800;
    if (U >= 0);
    else
        U += 2400;
 
    cout << U<< endl;
 return U;
}
};
int main()
{
   int b;
cin >> b;
Solution time;
time.UTC(b);
 
}

