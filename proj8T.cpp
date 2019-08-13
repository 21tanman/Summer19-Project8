#include <iostream>
#include <cstdlib>
#include<cstring>
using namespace std;
#include "proj8.h"

List3::List3()
{
 head = nullptr;
 length = 0;
}

List3:: ~List3()
{
 node* cur = new node;
 while (length != 0)
 {
  cur = head;
  cur->item = '\0';
  delete cur;
 }
 cout << "completed deletion - " << length << endl;
}
 

 
void List3::PutItem(int pos, itemType item)
{
 if(pos >length)
 {
  cout << "Invalid Position" << endl;
  return;
 }
 node* cur = new node;
 node* tmp = new node;
 cur->item = item;
 tmp = head;
 if (pos == 0)
 {
  cur->next = head;
  head = cur;
  length++;
  return;
 }
 for(int i = 0; i < pos-1; i++)
  tmp = tmp->next;
 cur->next = tmp->next;
 tmp->next = cur;
 length++;
}



void List3::Print()
{
 cout << "PRINTING \n";
 node* cur = new node;
 cur = head;
 int tracker = 0;
 while (tracker < length)
 {
  cout << "Pos: " << tracker << "   Item: " << cur->item << endl;
  cur = cur->next;
  tracker++;
 }
}
  
bool List3::IsEmpty() const
{
 if (length == 0)
  return true;
 return false;
}

int List3::GetLength() const
{
 return length;
}

void List3::DeleteItem(int pos)
{

//	NOT USING PTRTO
 int tracker = 0;
 node* cur  = new node;
 node* tmp = new node;
 cur = head;
 if(pos == 0)
 {
  cout << "inside if" << endl;
  head = cur->next;
  cur->item = '\0';
  cur = nullptr;
  delete cur;
  length--;
  return;
 }
 while (tracker < pos-1)
 {
   cur = cur->next;
   tracker++;
 }
 tmp = cur;
 tmp = tmp->next;
 cur->next = tmp->next;
 tmp->item = '\0';
 tmp = nullptr;
 delete tmp;
 length--;
 return;
}

  
itemType List3::GetItem(int pos)
{
node* cur = this->ptrTo(pos);
return cur->item;

 /*	NOT USING PTRTO

 node* cur = new node;
 cur = head;
 for(int i = 0; i < pos; i++)
  cur = cur->next;
 return cur->item;
*/
}

node* List3:: ptrTo(int pos)
{
 node* cur = new node;
 cur = head;
 for(int i = 0; i<pos; i++)
  cur = cur->next;
 return cur;
}







