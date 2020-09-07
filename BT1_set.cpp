#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5,5,6};
	set<int> s;
	for(int i=0;i<v.size();++i)
	{
		s.insert(v[i]);
	}
	cout<<"So phan tu khac nhau la: "<<s.size();
}
