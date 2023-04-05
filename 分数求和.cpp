#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
	{
        return a;
    } 
	else 
	{
        return gcd(b, a % b);
    }
}

int main() 
{
    int n;
    cin >> n;
    int sum_a = 0, sum_b = 1; 
    for (int i = 0; i < n; i++) 
	{
        int a, b;
        char c;
        cin >> a >> c >> b; 
        int d = gcd(abs(a), b); 
        if (d != 0) 
		{
            a /= d;
            b /= d;
        } 
		else 
		{
            cout << "error" << endl;
            return 0;
        }
        sum_a = sum_a * b + sum_b * a;
        sum_b *= b;
     
        d = gcd(abs(sum_a), sum_b);
        sum_a /= d;
        sum_b /= d;
    }
    if (sum_b == 1) 
	{ 
        cout << sum_a << endl;
    } else 
	{
        cout << sum_a << "/" << sum_b << endl;
    }
    return 0;
}

