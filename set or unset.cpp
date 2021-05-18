#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int position;
	if(num&((position-1)<<1))
	{
		cout<<" set ";
	}
	else
	{
		cout<<" not set ";
	}
}
