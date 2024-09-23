#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    
    Node* head;
    
    public:
        LinkedList(){
            head = NULL;
        }
        
        void pushFront(int value){
            Node* newnode = new Node();
            newnode->data = value;
            newnode->next = head;
            head = newnode;
        }
        
        void pushBack(int value){
            Node* newnode = new Node();
            newnode->data = value;
            newnode->next = NULL;
            
            if(!head){
                head = newnode;
                return;
            }
            
            Node* temp = head;
            while(temp->next){
                temp = temp->next;
            }
            
            temp->next = newnode;
            
        }
        
        void popFront(){
            if(!head){
                cout<<"list is empty";
                return;
            }
            
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
        void popBack(){
            if(!head){
                cout<<"list is empty";
                return;
            }
            
            if(!head->next){
                delete head;
                head = NULL;
                return;
            }
            
            Node* temp = head;
            while(temp->next->next){
                temp = temp->next;
            }
            
            delete temp->next;
            temp->next = NULL;
        }
        
        void display(){
            if(!head){
                cout<<"list is empty";
            }
            
            Node* temp = head;
            while(temp){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<" null";
        }
};

int main(){
    
    LinkedList list;
    
    list.pushFront(2);
    list.pushBack(4);
    list.display();
    cout<<endl;
    list.popBack();
    list.popFront();
    list.display();
}