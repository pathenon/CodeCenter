#include <iostream>
#include <string>
using namespace std;

string reverse(string text)
{
   if(text == "")
	return text;
   int s = 0, e =0;
   for(int i  = 0; i < text.length(); ++i)
   { 
	while( i < text.length() && (text[i] < 'a' || text[i] > 'z'))
	{
		++i;
	}	
	s = i;
	while(i < text.length() && text[i] >= 'a' && text[i] <= 'z')
	{
		++i;
	}
	e = i - 1;
	while(s <= e)
	{
		char ch = text[s];
		text[s] = text[e];
		text[e] = ch;
		++s;
		--e;
	}	
   }
   return text;
}

int main(int argc, char* argv[])
{
	cout << argv[1] << endl;
	cout << reverse(string(argv[1])) << endl;
	return 0;
}
