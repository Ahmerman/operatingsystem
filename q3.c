#include<iostream>
using namespace std;

// utility function to check for vowel
bool isVowel(char c)
{
	if (c=='a' || c=='A' || c=='e' ||
			c=='E' || c=='i' || c=='I' ||
			c=='o' || c=='O' || c=='u' ||
			c=='U')
			{
			    return 0;
			}
	else
	{
	    return 1;
	}
}

string reverseVowel(string str)
{
	int x=0;
	string vowel;
	for (int i = 0; str[i] != '\0'; i++)
		if (isVowel(str[i]))
			vowel[x++] = str[i];

	for (int j = 0; str[j]!='\0'; j++)
		if (isVowel(str[j]))
			str[j] = vowel[--x] ;

	return str;
}


int main()
{
	string str;
	cout<<"Enter a string:  ";
	cin>>str;
	cout << reverseVowel(str);
	return 0;
}
