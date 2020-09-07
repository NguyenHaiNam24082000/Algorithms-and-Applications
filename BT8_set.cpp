#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<iterator>
using namespace std;
set<string>  getDistinctProducts(vector<string> v)
{
	set<string> s;
	for(int i=0;i<v.size();++i)
	{
		s.insert(v[i]);
	}	
	return s;
} 
int main()
{
	vector<string> v={"watermelon", "grapes", "grapes", "apple", "grapes"};
	set<string>::iterator itr;
	set<string> s=getDistinctProducts(v);
	for(itr= s.begin();itr!= s.end();++itr)
	{
		cout<< *itr <<" ";
	}
}
