//Author: Lokesh Kumaraguru

#include <iostream>
#include <string>

using namespace std;

int main()
{

string list[5];
int numItems = 0;
char input;
string itemone;

while (input != 'q' || input != 'Q')
{

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input == 'a' || input == 'A')
  {
  
  cout<<"What is the item?"<<endl;
  cin>>itemone;
  
  if(numItems >= 5)
  {
  
  cout<<"You'll need a bigger list!"<<endl;
  
  }
  if(numItems < 5)
  {
  
  list[numItems] = itemone;
  numItems = numItems + 1;
  
  }

  }
  if(input == 'q' || input == 'Q')
  {

  break;

  }

}

return 0;

}
