/*************************************************************************
    > File Name: redvir.cpp
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Mon 28 Dec 2015 09:57:07 AM EST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	long long b[21], s1 = 1, s2 = 1;
	int c = 2, d = 6;
	for (int i = 3; i <= 24; i++)
	{
		s1 = s2 = 1;
		for (int j = 1; j <= i; j++)
		{
			s1 *= 4;
			s2 *= 2;
		}
		b[i-3]=(s1+2*s2)/4%100;
	}
	int t, n=0;
	while (cin>>t)
	{
		if (t == 0)
			break;
		while (t--)
		{
			long long z;
			cin>>z;
			if (z <= 2)
			{
				if (z == 1)
					cout<<"Case "<<++n<<":"<<c<<endl;
				else if (z == 2)
					cout<<"Case "<<++n<<":"<<d<<endl;
			}
			else
				cout<<"Case "<<++n<<":"<<b[(z-3)%20]<<endl;
			if (t == 0)
			{
				cout<<endl;
				n = 0;
			}
		}
	}
	return 0;
}
