#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

struct node{                     // Node Structure
    int item;
    struct node *next;
};

class LinkedList{
    node *head, *tail;

    public:
        LinkedList(){                 // Constructor to initialize both head and tail pointers to NULL
            head = NULL;
            tail = NULL;
            }

    void AddItemToList(int data){      // this will add item at the end(tail) of the LinkedList
        node *temp = new node;
        temp -> item = data;
        temp -> next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            tail -> next = temp;
            tail = tail -> next;
            temp = NULL;
        }
    }
    void AddItemAtBeginning(int data){
        node *temp = new node;
        temp -> item = data;
        temp -> next = head;
        head = temp;
        temp = NULL;
    }
    void DeleteNodeAtBeginning(){
        if(head == NULL){
           cout<<" NO ITEM TO DELETE IN THE LIST!!! ";
           }
        else{
            head = head -> next;
        }
    }
    void DeleteNodeAtLast(){
        node *temp = new node;
        node *hold = NULL;
        temp = head;
        if(head == NULL){
            cout<<" NO ITEM TO DELETE IN THE LIST!!! ";
        }
        else if(temp -> next == NULL){
                head = NULL;
                tail = NULL;
        }
        else{
            while(temp -> next!= NULL){
                hold = temp;
                temp = temp -> next;
            }
            tail = hold;
            tail -> next = NULL;
            temp = NULL;
        }
    }
    void CountingNodes(){
        node *temp = new node;
        temp=head;
        int i = 0;
        while(temp != NULL){
            i++;
            temp = temp -> next;
        }
        cout<<"There are "<<i<<" nodes in the linked list!!!";
    }
    void SumOfNodes(){
        node *temp = new node;
        temp = head;
        int sum = 0;
        while(temp != NULL){
            sum = sum + temp -> item;
            temp = temp -> next;
        }
        cout<<"The sum of all nodes is "<<sum<<" .";
    }



    void display(){
        node *temp = new node;
        temp = head;
        while(temp!= NULL){
            cout<<temp->item<<" ";
            temp = temp -> next;
        }
    }

};
int main(){
    LinkedList obj;
    obj.AddItemToList(10);
    obj.AddItemToList(23);
    obj.AddItemToList(51);
    obj.AddItemToList(6);
    obj.AddItemAtBeginning(78);
    obj.DeleteNodeAtLast();
    obj.CountingNodes();

    obj.SumOfNodes();
    obj.display();


}
