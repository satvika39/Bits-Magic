#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
    int count=0;
    while(1)
    {
    	if( num&1==1)
    	{
    		count++;
		}
		num=num>>1;
		if(num=1)
		{
			break;
		}
	}
	cout<<count;
	return 0;
}
