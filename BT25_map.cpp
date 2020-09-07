#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> contacts={"Codelearn","Codewar"};
	vector<string> names={"Code", "Codel", "io"};
	unordered_map<string,int> m;
	unordered_map<string,int> reverseM;
	for(int i=0;i<names.size();++i)
	{
		m.insert(pair<string,int>(names[i],0));
	}
	for(int i=0;i<names.size();++i)
	{
		for(int j=0;j<contacts.size();++j)
		{
			if(contacts[j].find(names[i])>=0 && contacts[j].find(names[i])<=(names[i].size()-1))
			{
				m.find(names[i])->second++;
			}
		}
	}
	unordered_map<string,int>::iterator itr;
	for (itr=m.begin(); itr!=m.end(); ++itr)
    	reverseM.insert(pair<string,int>(itr->first,itr->second));
    for (itr=reverseM.begin(); itr!=reverseM.end(); ++itr)
    	cout<<itr->second<<" ";
}
