#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<string>
using namespace std;
int cyclicShift(string word)
{
	set<string> s;
	for(int i=0;i<word.size();++i)
	{
		char x=word.back();
		word.pop_back();
		word.insert(word.begin()+0,x);
		s.insert(word);
	}
	return s.size();
}
int main()
{
	string word="abcd";
	cout<<"So ky tu la: "<<cyclicShift(word);
}
