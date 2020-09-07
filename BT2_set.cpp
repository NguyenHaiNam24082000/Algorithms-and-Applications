#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	vector<int> arr={1,2,3,1,1};
	set<int> s;
	set<int>::iterator itr;
	for(int i=0;i<arr.size();++i)
	{
		s.insert(arr[i]);	
	}
	if(s.size()==1)
	{
		cout<<"NO";
	}
	else
	{
		int i=0;
		for(itr=s.begin();itr!=s.end();++itr)
		{
			if(i==1)
			{
				cout<<"so nho thu 2 la: "<< *itr;
				break;
			}
			i++;
		}
	}
}
