//Author: Lokesh Kumaraguru

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

vector <string> list;
int numItems = 0;
char input;
string itemone;

while(input != 'q' &&  input != 'Q')

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

    list.push_back(itemone);
    numItems = numItems + 1;

  }

}

if(input == 'q' || input == 'Q')

{
if(numItems > 0)
  {
  cout<<"==ITEMS TO BUY=="<<endl;
  for (int index = 0;  index < numItems; index++)
   
  {

  cout<<index+1<<" "<<list[index]<<endl;

  }
  }

else
  {
  
  cout<<"No items to buy!"<<endl;
  
  }

}

return 0;

}

