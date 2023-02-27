#include <iostream>
#include <conio.h>
using namespace std;

struct node {
	int data ;
	node *next;
	};
	node *tmp, *top;
	void push(){
			tmp = new node;
			cout<<"enter data";
			cin>>tmp->data;
			tmp->next = top;
			top = tmp;
			
		}
	
	void pop(){
		if(top==NULL){
			cout<<"Underflow";
		}
		else{
			tmp = top;
			top = top->next;
			cout<<tmp->data<<"deleted";
			delete tmp;
		}
	}
	
	int main (){
		char ch ;
		do {
			cout<<"\n1.push\n2.pop\n3.display\nEnter your choice ";
			cin>>ch;
			switch(ch){
				case 1:{
					if(ch==1){
						cout<<"insert an element you like ";
				  push();}
					break;
				}
				case 2:{
					if(ch==2){
					
					pop();}
					break;
				}
			}
		}
		
		while(ch!='Q');
	}
