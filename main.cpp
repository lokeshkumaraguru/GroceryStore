//Author: Lokesh Kumaraguru

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string itemone;

do {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input == 'a' || input == 'A')
  {
    cout<<"What is the item?";
    cin>>itemone;
  }
  if(numItems >= 5)
  {
    cout<<"You'll need a bigger list!";
  }
  else
  {
    list[numItems] = itemone;
    numItems + 1;
  }

} while (input != 'q' || input == 'Q');

  return 0;
}
