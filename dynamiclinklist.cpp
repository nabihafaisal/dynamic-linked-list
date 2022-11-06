#include <iostream>
using namespace std;

struct Node
{
    int d;
    struct Node *next;
};
 struct Node *head=NULL;
void insert(int data){
    
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->d=data;
    temp->next=NULL;
    
    temp->next=head;
    head=temp;
}
// struct Node *head=NULL;
   
void display() {
    
	struct Node *list = head;
	while(list) {
		cout << list->d <<" ";
		list = list->next;
	}
	cout << endl;
}
int main()
{
    insert(3);
    insert(1);
    insert(6);
    insert(4);
    display();

    return 0;
}
