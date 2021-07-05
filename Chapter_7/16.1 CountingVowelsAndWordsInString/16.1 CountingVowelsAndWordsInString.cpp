/// programming Challenge Solution:
/// to count vowels consonant and words
# include<iostream>
using namespace std;

int main()
{
	string str = "Find";
	int vowel=0,con=0,words=0;

	for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' ||str[i]=='U'
            ||str[i]=='e' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
                vowel++;
        else if(str[i] == ' ')
            words++;
        else con++;
    }
    cout<<"Vowels are..."<<vowel<<endl;
    cout<<"Consonant are..."<<con<<endl;
    cout<<"Words are..."<<++words<<endl;
	return 0;
}
