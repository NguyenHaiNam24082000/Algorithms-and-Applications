#include<bits/stdc++.h>
#include<string>
#include<map>
#include<vector>
using namespace std;
map<string,string> greaterString(vector<string> arr1,vector<string> arr2)
{
	map<string,string> m;
	for(int i=0;arr2.size();++i)
	{
		m.insert(pair<string,string>(arr2[i],""));
	}
	for(int i=0;arr2.size();++i)
	{
		for(int j=0;j<arr1.size();++j)
		{
			if(arr2[i]>arr1[j])
			{
				m.find(arr2[i])->second+=arr1[j];
			}
		}
	}
	map<string,string>::iterator it;
	for(it=m.begin();it!=m.end();++it)
	{
		cout<<it->first<<" "<<it->second<<" ";
	}
	return m;
}
int main()
{
	vector<string> arr1={"codelearn","learncode", "io"};
	vector<string> arr2={"code","war","io"};
	map<string,string>::iterator it;
	map<string,string> m=greaterString(arr1,arr2);
//	for(it=m.begin();it!=m.end();++it)
//	{
//		cout<<it->first<<" "<<it->second<<" ";
//	}
}
