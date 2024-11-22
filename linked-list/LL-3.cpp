#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertarrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int LengthofLL(Node* head){
    Node* temp = head;
    int l = 0;
    while(temp!=nullptr){
        l++;
        temp = temp->next;
    }
    return l;
}

Node* insertStart(Node* head, int v){
    Node* node = new Node(v, nullptr);
    node->next = head;
    return node;
}

void insertEnd(Node* head, int v){
    Node* temp = head;
    Node* node = new Node(v, nullptr);
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
}


Node* insertk(Node* head, int k, int v){
    Node* temp = head;
    int cnt = 0;
    Node* node = new Node(v, nullptr);
    if(k==1) return insertStart(temp, v);
    while(temp!=nullptr){
        cnt++;
        temp = temp->next;
        if(cnt==k-2) break;
        return head;
    }
    node->next = temp->next;
    temp->next = node;
    return head;
}

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {2,3,4,5,6};
    Node* head = convertarrtoLL(arr);
    displayLL(head);
    cout<<endl;
    head = insertStart(head, 10);
    insertEnd(head, 11);
    insertk(head, 3, 12);
    displayLL(head);
    return 0;
}