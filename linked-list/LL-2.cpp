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

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* deleteHead(Node* head){
    if (head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

void deleteLast(Node* head){
    if(head == nullptr) return;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
}

int main()
{
    vector<int> arr = {2,3,4,5,6,7};
    Node* head = convertarrtoLL(arr);
    displayLL(head);
    deleteLast(head);
    cout<<endl;
    displayLL(head);
    return 0;
}