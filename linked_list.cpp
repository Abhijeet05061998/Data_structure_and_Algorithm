#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node*next;
	Node(int x)
	{
       data=x;
       next=NULL;
	}
};
class Stack{
public:

	Node*head;
	int sz;
	Stack()
	{
        head=NULL;
        sz=0;
	}

	void push(int x)
	{
		Node*temp=new Node(x);
		temp->next=head;
		head=temp;
		sz++;
	}

	int pop()
	{
		if(head==NULL){cout<<"Stack is Empty"<<endl; return INT_MAX;}
		int ans=head->data;
		Node*temp=head;
		head=head->next;
		delete(temp);
		sz--;
		return ans;
	}

	int topElement()
	{
			if(head==NULL){cout<<"Stack is Empty"<<endl; return INT_MAX;}
			return head->data;
	}
	int sizeOfStack()
	{
		return sz;
	}
	bool Empty()
	{
		return head==NULL;
	}

};

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Stack s;
	s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.topElement()<<endl;
    cout<<s.sizeOfStack()<<endl;
     cout<<s.Empty()<<endl;

   
	return 0;
}