#include<iostream>
using namespace std;
//****************************
struct Q
{int info; 
Q* next;};
Q *newn, *temp, *front=NULL, *rear=NULL; 
int count=0, ch1,ch2;
//****************************
void Enqueue();
void Dequeue();
void getnode();
void traverse();


int main()
{
	cout<<"Operations on Queue\n";
	do
	{
		cout<<"1.Insert\t2.Delete\t3.Traverse\nenter your choice\t"; 
		cin>>ch1;
		if(ch1==1) Enqueue();
		else if(ch1==2) Dequeue();
		else if(ch1==3) traverse();
		else cout<<"\n--------------------\nInvalid Choice\n--------------------\n";
		cout<<"\nPress 1 to continue"; cin>>ch2;
	}while(ch2==1);
	return 0;
}
//****************************	
//****************************
//****************************
void getnode()
{newn=new Q;
cout<<"ENter Data"; cin>>newn->info; 
newn->next=NULL;
}
//****************************
void traverse()
{cout<<"\n***********\nthe Queue is\t";
if(front==NULL) cout<<"\nempty Queue";
else
{temp=front; while(temp!=NULL) {cout<<temp->info<<" "; temp=temp->next;}}
cout<<"\n***********\n";
}
//****************************
void Enqueue()
{   getnode(); 
	if(newn==NULL) cout<<"\n--------------------\nOverflow\n--------------------\n";
	else if(front==NULL) { ++count; front=newn; rear=newn; traverse(); }
	else  {++count; rear->next=newn; rear=newn;  traverse();}
}
//****************************	
void Dequeue()
{
if(front==NULL) cout<<"\n--------------------\nunderflow\n--------------------\n";
else
{ --count; 
cout<<"\nthe Element deleted is"<<front->info; 
front=front->next; traverse();}
}
