#include <iostream> 
#include <cstdlib>
#include <cstring>
#include "proj8.h"

using namespace std;

int main()
{
 List3* lst = new List3;
// lst->PutItem(0,5);
 //lst->Print();
 //lst->PutItem(0,1);
 //lst->PutItem(1,2);
 for(int i = 0; i < 6; i++)
  lst->PutItem(i,i);

 
 lst->Print();

cout << "\n \n Test 2" << endl;
//lst->PutItem(4,444);
lst->Print();
lst->DeleteItem(5);
//lst->PutItem(6, 555);
lst->Print();
cout << "Item in Position 2 is " << lst->GetItem(2) << endl;
 return 0;
}


