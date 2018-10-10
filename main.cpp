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

while(input != 'Q' && input != 'q')
{

  if(numItems == 0)
  {
  
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  }

  else
  {
  
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (D)elete last item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  }

  if(input == 'A' || input == 'a')
  {
  
  cout<<"What is the item?"<<endl;
  cin>>itemone;

  list.push_back(itemone);
  numItems = numItems + 1;
  
  }

  if(input == 'Q' || input =='q')
  {
  
  if(numItems > 0)
  {
  
    cout<<"==ITEMS TO BUY=="<<endl;
    for(int index = 0; index < numItems; index++)
    {
    
      cout<<index+1<<" "<<list[index]<<endl;
    
    }

  }

  else
  {
  
  cout<<"No items to buy!"<<endl;
  
  }

  }

  if(input == 'D' || input == 'd')
  {
  
  if(numItems > 0)
  {
  
    cout<<list.back();
    cout<<" was deleted from the list.\n"<<endl;
    list.pop_back();
    numItems = numItems - 1;
  
  }
  
  }

}

return 0;
}
