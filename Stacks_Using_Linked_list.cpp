#include <conio.h>
#include<iostream>
using namespace std;
struct node{
    int item;
    struct node *next;
};

class stack{
    node  *head,*tail;
public:
    stack(){
        head = NULL;
        tail = NULL;
    }
    void push(int data){
        node *temp = new node;
        temp -> item = data;
        temp -> next = NULL;
        if (head == NULL){
            head = temp;
            tail = temp;
            tail -> next = NULL;
            temp = NULL;
        }
        else{
            tail -> next = temp;
            tail = tail -> next;
            temp = NULL;
        }
    }
    void pop(){
        node *temp = new node;
        node *hold = new node;
        temp = head;
        if(head == NULL){
            cout<<"underflow";
        }
        else if(head -> next == NULL){
            head = NULL;
            tail = NULL;
        }
        else{
            while(temp -> next != NULL){
                hold = temp;
                temp = temp -> next;
            }
            tail = hold;
            tail -> next = NULL;
        }
    }
    void display(){
        node *temp = new node;
        temp = head;
        while(temp != NULL){
            cout<<temp->item<<" ";
            temp = temp -> next;
        }
    }
};
int main(){
    stack obj;
    obj.push(41);
    obj.push(13);
    obj.push(18);
    obj.push(16);
    obj.pop();
    obj.display();
}
