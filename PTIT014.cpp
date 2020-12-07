#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int k = 1;
	for (int i = 0; i < n; ++i)
	{
		k = 2*k;
		k = (k%10)%10; 
	}
	cout << k;
	return 0;
}
