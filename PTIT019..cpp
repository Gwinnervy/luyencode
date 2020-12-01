#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main ()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (b < c) swap(b,c);
	if (a < c) swap(a,c);
	if (a < b) swap(a,b);
	cout << a << " " << b << " " << c;
	return 0;
}
