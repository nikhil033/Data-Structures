#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node{
    int item;
    struct node *next;
};
class queue{
    node *head, *tail;
public:
    queue(){
        head = NULL;
        tail = NULL;
    }
    void enQueue(int data){
        node *temp = new node;
        temp -> item = data;
        temp -> next = head;
        head = temp;
        temp = NULL;
    }
    void deQueue(){
        node *temp = new node;
        node *hold = new node;
        temp = head;
        hold = NULL;
        if(head == NULL){
            cout<<"The Queue is Empty!!!";
        }
        else if(head->next==NULL){
            head = NULL;
            tail = NULL;
        }
        else{
            while(temp->next!=NULL){
                hold = temp;
                temp = temp->next;
        }
        tail = hold;
        tail->next=NULL;
        temp = NULL;
        }
    }
    void display(){
        node *temp = new node;
        temp = head;
        while(temp!=NULL){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    queue obj;
    obj.enQueue(1);
    obj.enQueue(2);
    obj.enQueue(3);
    obj.enQueue(4);
    obj.enQueue(5);
    obj.deQueue();
    obj.deQueue();
    obj.display();
}
