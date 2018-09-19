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
  //get user input
        std::cout<<"Please Enter Your First Name:\n";
        std::cin>>first;
        std::cout<<"Please Enter Your Last Name:\n";
        std::cin>>last;

        cout<<"Weclome,\n" <<first[0]<<"." <<last[0]<<". " << "here is your fortune...\n";

  //tell fortune
cout<<"Your Lucky Number Is "<<first.length()<<endl;
  return 0;
}
