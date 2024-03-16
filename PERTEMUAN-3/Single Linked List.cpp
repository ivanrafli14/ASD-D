#include <bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node* next;
      
};

node* head;
node* tail;

void CreateLL(int data){
  head = new node();
  head->data = data;
  head->next = NULL;
  tail = head;
}

void AddLast(int data){
    node* newNode = new node();

    newNode->data = data;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void AddFirst(int data){
    node* newNode = new node();

    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void Insert(int item, int pos){
    node *newNode,*cur;
    newNode = new node();
    newNode->data = item;
    newNode->next = NULL;
    cur = head;
    if(pos == 0){
        newNode->next = head;
        head = newNode;
    }
    else{
        while(pos != 1){
            cur = cur->next;
            pos--;
        }
    node* nextNode = cur->next;    
    newNode->next = nextNode;
    cur->next = newNode;
    }
}



void Read(){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << endl;
}

int Access(int index){
    struct node*it = head;
    int position = 0;
    while(position != index){
        it = it->next;
        position++;
    }
    return it->data;
}

void Update(int data, int pos){
    if(pos == 0) head->data = data;
    else{
        node* it = head;
        while(pos != 0) {
            it = it->next;
            pos--;
        }

        it->data = data;
    }
}

void Delete(int pos){
    node* del, *before;

    if(pos == 0) {
        del = head;
        head = head->next;
        free(del);
    }
    else{
        node* cur = head;
        while(pos != 0){
            if(pos == 1) {
                before = cur;
            }

            cur = cur->next;
            pos--;
        }
        del = cur;
        before->next = cur->next;
        free(del);

    }
}


int main(){
    head = tail = NULL;
    CreateLL(66);
    AddFirst(1);
    AddLast(10);
    AddFirst(2);
    Insert(100,3);
    Update(500,3);
    Delete(3);
    Insert(900,1);


    Read();

    int first = Access(1);
    cout << first;

    
}