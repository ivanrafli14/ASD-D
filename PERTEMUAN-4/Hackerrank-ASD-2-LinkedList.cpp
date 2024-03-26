#include <bits/stdc++.h>

using namespace std;


struct node {
    string data;
    node* next;
};

node* head;
node* tail;

void initLL(string data){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    head = newNode;
    tail = newNode;
}

void addLast(string data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = NULL;

    tail->next = newNode;
    tail = newNode;
}

void addFirst(string data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head;

    head = newNode;

}


void ReadLL(){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



void Remove(string name){
    node* temp = head;
    node* prev = NULL;
    while (temp != NULL) {
        if (temp->data == name) {
            if (prev == NULL) {
                head = temp->next;
                if (head == NULL) tail = NULL;
            } else {
                prev->next = temp->next;
                if (temp->next == NULL) tail = prev;
            }
            free(temp);
        }
        prev = temp;
        temp = temp->next;
    }
}

void Update(string name, string newName){
    node* temp = head;

    while (temp != NULL){
        if (temp -> data == name){
            temp -> data = newName;
        }
        temp = temp -> next;
    }
}


int main(){

    initLL("Budi");
    
    int n; cin >> n;
    while(n--){
        string opt; cin >> opt;
        string ipt1; cin >> ipt1;

        if(opt == "TambahAwal") addFirst(ipt1);
        if(opt == "TambahAkhir") addLast(ipt1);
        if(opt == "Ubah"){
            string ipt2; cin >> ipt2;
            Update(ipt1, ipt2);
        }
        if(opt == "Hapus"){
            Remove(ipt1);
        }
    }

    ReadLL();
}