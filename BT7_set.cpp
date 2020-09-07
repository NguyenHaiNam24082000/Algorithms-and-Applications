#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
int aramic(vector<string> v)
{
	set<set<string>> setS;
	set<string> s;
	for(int i=0;i<v.size();++i)
	{
		s.clear();
		for(int j=0;j<v[i].size();++j)
		{
			s.insert(to_string(v[i].at(j)));
		}
		setS.insert(s);
	}
	return setS.size();
}
int main()
{
	vector<string> words={"aa","aaa","aa","aab","acab"};
	cout<< aramic(words);
}
