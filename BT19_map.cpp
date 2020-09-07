#include<iostream>
#include<map>
#include<string>
#include <algorithm>
using namespace std;
bool cmp(pair<char,int>& valA,pair<char,int>& valB)
{
	return valA.second>valB.second;
}
void sort(map<char,int>& m)
{
	vector<pair<char,int>> v;
	for(auto& it: m)
	{
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto& it: v)
	{
		cout<<it.first;
	}
}
int main()
{
	string s="helloworld";
	map<char,int> m;
	for(int i=0;i<s.size();++i)
	{
		m.insert(pair<char,int>(s[i],0));
	}
	for(int i=0;i<s.size();++i)
	{
		m.find(s[i])->second++;
	}
	sort(m);
}
