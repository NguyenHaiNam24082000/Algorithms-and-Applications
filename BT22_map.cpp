#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int maximumDifference(vector<string> arr)
{
	map<string,int> m;
	int max=0;
	for(int i=0;i<arr.size();++i)
	{
		m.insert(pair<string,int>(arr[i],i));
	}
	for(int i=0;i<arr.size();++i)
	{
		if((i-m.find(arr[i])->second)>max)
		{
			max=abs(m.find(arr[i])->second-i);
		}
	}
	return max;
}
int main()
{
	vector<string> arr={"codelearn", "codelearn", "programmer", "io", "programmer"};
	cout<<maximumDifference(arr);
}
