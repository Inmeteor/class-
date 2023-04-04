#include<iostream>
#include<regex>
using namespace std;

class email{
public: void check(string str){
cin>>str;
string mod = "^[a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+(\.[a-zA-Z0-9_-]+)+$" ;
regex r(mod);
if(regex_match(str,r))
{cout << "yes" << endl;}
else{cout << "no" << endl; }
}
};
int main()
{
    string str;
    email p;
    p.check(str);
    return 0;
}

