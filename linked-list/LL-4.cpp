#include<iostream>
#include<vector>
#include<stack>
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

void reverseLL(Node* head){
    stack<int>stack;
    Node* temp = head;
    while(temp!=nullptr){
        stack.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(!stack.empty()){
        temp->data = stack.top();
        stack.pop();
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convertarrtoLL(arr);
    displayLL(head);
    cout<<endl;
    reverseLL(head);
    displayLL(head);
    return 0;
}