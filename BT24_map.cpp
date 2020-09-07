#include<iostream>
#include<map>
#include<vector>
using namespace std;
int largestElement(vector<int> arr)
{
	map<int,int> m;
	map<int,int>::iterator itr;
	int min;
	int max;
	for(int i=0;i<arr.size();++i)
	{
		m.insert(pair<int,int>(arr[i],0));
	}
	for(int i=0;i<arr.size();++i)
	{
		m.find(arr[i])->second++;
	}
	min=m.find(arr[0])->second;
	for(int i=1;i<arr.size();++i)
	{
		if(min>m.find(arr[i])->second)
		{
			min=m.find(arr[i])->second;
		}
	}
	max=arr[0];
	for(itr=m.begin();itr!=m.end();++itr)
	{
		if(max<itr->first && itr->second==min)
		{
			max=itr->first;
		}
	}
	return max;
}
int main()
{
	vector<int> arr={2,4,4,7,7,7};;
	cout<<largestElement(arr);
}
