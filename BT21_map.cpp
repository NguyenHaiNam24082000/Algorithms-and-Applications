#include<iostream>
#include<map>
#include<vector>
using namespace std;
int sumOfCommon(vector<int> arr1, vector<int> arr2)
{
	map<int,int> m;
	map<int,int>::iterator itr;
	int sum=0;
	for(int i=0;i<arr1.size();++i)
	{
		m.insert(pair<int,int>(arr1[i],0));
	}
	for(int i=0;i<arr2.size();++i)
	{
		m.find(arr2[i])->second=1;
	}
	for(itr=m.begin();itr!=m.end();++itr)
	{
		if(itr->second==1)
		{
			sum+=itr->first;
		}
	}
	return sum;
}
int main()
{
	vector<int> arr1={5,6,7};
	vector<int> arr2={2,3,4};
	cout<<sumOfCommon(arr1,arr2);
}
