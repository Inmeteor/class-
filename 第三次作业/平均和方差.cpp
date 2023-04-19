#include<iostream>
#include<iomanip>
using namespace std;

class Solution {
public:
    void count(int n) {
        float a[6],sum=0,ave,ss=0,s;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<6; j++) {
                cin >> a[j];
                sum=sum+a[j];
                ave=sum/6;
            }
            for(int j=0; j<6; j++) {
                ss=ss+(a[j]-ave)*(a[j]-ave);
            }
            s=ss/6;
            cout<<setiosflags(ios::fixed)<<setprecision(2)<<ave<<" ";
            cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
            sum=0;
            ss=0;
        }
    }
};
int main()
{
int n;
cin >> n;
Solution average;
average.count(n);
}

