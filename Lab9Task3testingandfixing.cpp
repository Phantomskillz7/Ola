#include <iostream>
#include <string>

using namespace std;
int stringCounter(string sentence,string my_word)
{   
    int position=0,wordlength,numrepeat;
    wordlength=my_word.length();

    while(position != (sentence.length()-wordlength+1))
    {
      if (sentence.substr(position,wordlength)== my_word)
      {
        numrepeat=numrepeat+1;
      }
      position=position+1;
    }

return numrepeat;
}

int main()
{

string str, strword;
int numberrepeat;

cout<<"Enter string: ";
getline(cin,str);
cout<<"Enter word: ";
getline(cin,strword);

numberrepeat=stringCounter(str,strword);

cout<<strword<< " occurs "<<numberrepeat<< " time(s) in the given string"<<endl;
cout<<"no";}
