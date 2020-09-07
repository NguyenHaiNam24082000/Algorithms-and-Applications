#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main()
{
	map<char,int> m;
	string s="aacccd";
	string str;
	for(int i=0;i<s.size();++i)
	{
		m.insert(pair<char,int>(s[i],0));
	}
	for(int i=0;i<s.size();++i)
	{
		m.find(s[i])->second++;
	}
	map<char,int>::iterator itr;
	for (itr=m.begin(); itr!=m.end(); ++itr)
    	cout << itr->first << " " << itr->second << "\n";
}
