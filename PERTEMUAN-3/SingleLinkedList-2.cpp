#include <bits/stdc++.h>

using namespace std;


struct node {
    int data;
    node* next;
};

node* head;
node* tail;

void initLL(int data){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    head = newNode;
    tail = newNode;
}

void addLast(int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = NULL;

    tail->next = newNode;
    tail = newNode;
}

void addFirst(int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head;

    head = newNode;

}

void addMiddle(int data, int pos){
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = data;

    node* temp = head;
    while(pos != 1){
        temp = temp->next;
        pos--;
    }


    node* nextNode = temp->next;
    newNode->next = nextNode;
    temp->next = newNode;
}

void ReadLL(){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void AccessIndex(int pos){
    int val = pos;
    node* temp = head;
    while(pos != 0){
        temp = temp->next;
        pos--;
    }

    cout << "Ini data index ke " << val << " " << temp->data << endl;


}

void RemoveIndex(int pos){
    if(pos == 0){
        node* temp = head;
        head = head->next;
        free(temp);
        //delete temp;
    }
    else{
        node* temp = head;
        node* prev;
        while(pos != 0){

            if(pos == 1){
                prev = temp;
            }

            temp = temp->next;
            pos--;
        }

        // node* nextNode = temp->next;
        prev->next = temp->next;
        delete temp;
    }
}


int main(){

    initLL(10);
    addLast(50);
    addLast(100);
    //ReadLL();    


    addFirst(99);
    addFirst(77);

    addMiddle(22, 2);
    ReadLL();    

    addMiddle(44, 4);
    ReadLL();    

    addMiddle(1999, 5);
    ReadLL();

    AccessIndex(3); 

    RemoveIndex(0);
    RemoveIndex(2);
    ReadLL();   


}