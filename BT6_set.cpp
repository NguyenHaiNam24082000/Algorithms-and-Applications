#include<iostream>
#include<string>
#include<set>
using namespace std;
void  diversity(string str,int k)
{
	set<string> s;
	if(str.size()<k)
	{
		cout<<"impossible";
	}	
	else
	{
		for(int i=0;i<str.size();++i)
		{
			s.insert(to_string(str[i]));
		}
		cout<<to_string(str.size()-s.size());
	}
} 
int main()
{
	string str="google";
	int k=7;
	diversity(str, k);
}
