#include<iostream>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
void setFunction(vector<int> a,int k)
{
	set<int> s;
	set<int>::iterator itr;
	int m=-1,n=-1,isHaveM=false,isHaveN=false;
	for(int i=0;i<a.size();++i)
	{
		s.insert(a[i]);
	}
	for(itr=s.begin();itr!=s.end();++itr)
	{
		if(*itr>=k && isHaveN==false)
		{
			n=*itr;
			isHaveN=true;
		}
		if(*itr>k && isHaveM==false)
		{
			m=*itr;
			isHaveM=true;
		}
	}
	cout<<"["<<m<<","<<n<<"]";
}
int main()
{
	vector<int> arr={1,2,3,5,4,4,5};
	int k=4;
	setFunction(arr,k);
}
