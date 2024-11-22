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

Node* deleteLast(Node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;
}

Node* deleteK(Node* head, int k){
    if(head == NULL) return head;
    else if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2,3,4,5,6};
    Node* head = convertarrtoLL(arr);
    deleteK(head, 1);
    displayLL(head);
    return 0;
}