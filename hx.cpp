/*************************************************************************
    > File Name: hx.cpp
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Thu 24 Dec 2015 10:18:19 AM EST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int num[50];
	int n, m, i;
	num[0] = 0;
	num[1] = 1;
	for (i = 2; i <= 40; i++)
		num[i] = num[i-1]+num[i-2];
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<num[m]<<endl;
	}
	return 0;
}
