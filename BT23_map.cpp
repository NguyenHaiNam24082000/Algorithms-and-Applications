#include<iostream>
#include<map>
#include<vector>
using namespace std;
bool checkSum(vector<int> arr,int sum)
{
	map<int,int> m;
	int count=0;
	for(int i=0;i<arr.size();++i)
	{
		m.insert(pair<int,int>(sum-arr[i],arr[i]));
	}
	for(int i=0;i<arr.size();++i)
	{
		if(m.find(arr[i])->second)
		{
			count++;
		}
		if(count==2)
		{
			return true;
			break;
		}
	}
	return false;
}
int main()
{
	vector<int> arr={2,2,2,1,8,9};
	int sum=6;
	if(checkSum(arr,sum)) cout<<"true";
	else cout<<"false";
}
