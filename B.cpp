#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, x;
	string s;
	cin >> x >> n >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'o')
			n++;
		else if (s[i] == 'x' && n != 0)
		{
			n--;
		}
	}
	cout << n;
	return 0;
}
