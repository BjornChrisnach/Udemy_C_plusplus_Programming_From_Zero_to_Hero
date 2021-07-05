// Programming challenge
// to count vowels consonant and words
#include <iostream>
using namespace std;

int main()
{
    int words = 1, vowels = 0, consonants = 0, i = 0;
    string input;

    input = "this is the given input string";

    for(int i = 0; i < input.length(); ++i)
    {
        if(input[i]=='A' || input[i]=='E' || input[i]=='I' ||input[i]=='O' ||input[i]=='U'
            ||input[i]=='e' ||input[i]=='e' ||input[i]=='i' ||input[i]=='o' ||input[i]=='u')
        {
            vowels++;
        }
        else if(input[i] == ' ')
        {
            words++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "There are " <<vowels << " vowels, "<<consonants<< " consonants and ";
    cout<<words<<" words in the given sentence."<<endl;

    return 0;
}