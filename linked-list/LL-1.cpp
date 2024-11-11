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

int lengthofLL(Node* head){
    int l = 0;
    Node* temp = head;
    while(temp != nullptr){
        l+=1;
        temp = temp->next;
    }
    return l;
}

bool checkifPresent(Node* head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if (temp->data == val) return true;
        temp = temp->next;
    }
    return false;
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
    vector<int> arr = {2,3,4,5,6,7};
    Node* head = convertarrtoLL(arr);
    displayLL(head);
    cout<<endl<<lengthofLL(head);
    if(checkifPresent(head, 99)){
        cout<<endl<<"value present";
    }
    else{
        cout<<endl<<"value absent";
    }
    return 0;
}