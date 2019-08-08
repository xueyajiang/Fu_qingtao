#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s, s1, s2, a[1000], ssss;
char xx;
int n, i, len = 0;
double b[1000] = {0};
int abc(int k1, int k2)
{
	if (k1 - k2 < 0) 
		return 0;
	else
		return k1 - k2;
}
string kkk(string s1, string s2)
{
	int len1 = s1.length();
	int len2 = s2.length();
	string s0 = "";
	for (int j = abc(len1, len2)+ 1; j <= len1; j++)
	{
		int kk = 0;
		while ((s1[j + kk] == s2[kk]) && (j + kk < len1))
		{
			kk++;
		}
		if (kk + j >= len1 - 0.5)
		{
			string sss = s1;
			for (int ii = kk; ii < len2; ii++)
			{
				sss = sss + s2[ii];
			}
			if ((sss.length() > s0.length()) && (sss!= s1 + s2))
			{
				s0 = sss;
			}
		}
	}
	if (s0 == "")
		s0 == s1 + s2;
	return s0;
}
void xxx(int k, string ss)
{
	int flat = 0;
	{
		cout << "xxx" << k << " " << ss << endl;
		int j;
		for (int j = 1; j <= n; j++)
		{
			cout << ss << a[j] << endl;
			string sssss = kkk(ss, a[j]);
			cout << sssss << endl;
			if ((b[j] > 0) && (sssss != ss + a[j]))
			{
				b[j]--;
				flat = 1;
				xxx(k + 1, sssss);
				b[j++];
			}
		}
	}
	if (flat < 1)
	{
		{
			if (ss.length() > len)
			{
				len = ss.length();
				ssss= ss;
			}
			return;
		}
	}
}
int main()
{
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cin >> xx;
	for (i = 1; i <= n; i++)
		b[i] = 2;
	for (i = 1; i <= n; i++)
	{
		cout << "test: " << i <<" " << a[i] << endl;
		if (a[i][0] == xx)
		{
			b[i] = 1;
			xxx(1, a[i]);
			b[i]++;
		}
	}
	cout << len << endl;
//	cout << ssss;
	return 0;
}
