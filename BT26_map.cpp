#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main()
{
	vector<string> A={"Banana", "Banana", "Apple"};
	vector<string> B={"Orange", "Apple", "Banana", "Watermelon"};
	unordered_map<string,bool> m;
	set<string> s;
	for(int i=0;i<B.size();++i)
	{
		m.insert(pair<string,bool>(B[i],true));
	}
	for(int i=0;i<A.size();++i)
	{
		s.insert(A[i]);
	}
	set<string>::iterator itrS;
	unordered_map<string,bool>::iterator itrM;
	for(itrM=m.begin();itrM!=m.end();++itrM)
	{
		for(itrS=s.begin();itrS!=s.end();++itrS)
		{
			if(*itrS==itrM->first)
			{
				itrM->second=false;
			}
		}
	}
	for(itrM=m.begin();itrM!=m.end();++itrM)
	{
		if(itrM->second==true)
		{
			cout<<itrM->first<<" true"<<" ";
		}
		else cout<<itrM->first<<" false"<<" ";
	}
}
