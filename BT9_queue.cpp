#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
bool isPrimeNumber(int n)
{
	bool check=true;
	if(n<=1) return false;
	else if(n==2) return true;
	else
	{
		for(int i=2;i*i<=n;++i)
		{
			if(n%i==0) 
			{
				check=false;
				break;
			}
		}
	}
	return check;
}
void superPrimeNumber(int n)
{
	queue<string> q;
	queue<int> subQ;
	for(int i=0;i<=n;++i)
	{
		if(isPrimeNumber(i))
		{
			q.push(to_string(i));
		}
	}
	while(!q.empty())
	{
		string s=q.front();
		int len=s.length();
		int count=0;
		while(isPrimeNumber(atoi(s.substr(0,len-1).c_str())))
		{
			count++;
			len--;
		}
		if(count==s.length()-1)
			cout<< s <<" ";
		q.pop();
	}
}
int main()
{
	superPrimeNumber(2393);
}
