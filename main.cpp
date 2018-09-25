//Author: Rayen Strasser-King
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
        std::string first;
        std::string last;
        int lucky;
        int index = first.length()-1;
  //get user input
        std::cout<<"What is your first name?\n";
        std::cin>>first;
        std::cout<<"What is your last name?\n";
        std::cin>>last;

        cout<<"Welcome, " <<first[0]<<"." <<last[0]<<"., " << "here is your fortune...\n";

  //tell fortune
cout<<"your lucky number is "<<first.length()<<endl;
 
if (first[0] =='a'||first[0] =='e'||first[0] =='i'||first[0] =='o'||first[0] =='u'||first[0] =='A'||first[0] =='E'||first[0] =='I'||first[0] =='O'||first[0] =='U')

cout<<"you are destined to be famous!\n";

else
{cout<<"you should keep a low profile.\n";}


if (last[last.length()-1] == 'a'||last[last.length()-1] == 'e'||last[last.length()-1] == 'i'||last[last.length()-1] == 'o'||last[last.length()-1] == 'u'||last[last.length()-1] == 'A'||last[last.length()-1] == 'E'||last[last.length()-1] == 'I'||last[last.length()-1] == 'O'||last[last.length()-1] == 'U')

cout<<"you have already met your true love.\n";
cout<<"have a good day!\n";



    return 0;
}


