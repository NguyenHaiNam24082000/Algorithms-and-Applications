#include<iostream>
#include<set>
#include<vector>
using namespace std;
int vectorBeautifull(vector<int> v,set<int> s)
{
	for(int i=0;i<v.size();++i)
	{
		s.insert(v[i]);
	}
	return v.size()-s.size();
}
int main()
{
	vector<int> v={2,3,6,3};
	set<int> s;
	cout<<"Can xoa: "<<vectorBeautifull(v,s);
}
