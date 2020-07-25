#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
        int data;
        Node *next;

    Node() {
        this->data=0, this->next=NULL;
    }
    Node(int data) {
        this->data=data, this->next=next;
    }
    Node(int data, Node *next) {
        this->data=data;
        this->next=next;
    }
};

void addNode(Node **root, int data) {

    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (*root == NULL) {
        *root = temp;
        return;
    }

    Node *last = *root;
    while(last->next!=NULL) 
        last=last->next;

    last->next = temp;
    return;
}

void printList(Node *root) {

    Node *temp = root;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* ans = new Node(0);
    Node* temp=ans;
    int carry=0;
    while(l1 or l2) {
                        
        int val1=(l1) ? l1->data : 0;
        int val2=(l2) ? l2->data : 0;
        int val=val1+val2+carry;
        if(val>=10){
            val-=10;
            carry=1;
        }
        else{
            carry=0;
        }
        
        Node* demoNode=new Node(val);
        temp->next=demoNode;
        temp=temp->next;
        l1=(l1) ? l1->next : l1; 
        l2=(l2) ? l2->next : l2;
    }
    if(carry){
        Node* demoNode=new Node(carry);
        temp->next=demoNode;
    }
    return ans->next;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        Node *root1 = new Node();
        while(n--) {
            int element; cin>>element;
            addNode(&root1, element);
        }

        printList(root1);

        cin>>n;

        Node *root2 = new Node();
        while(n--) {
            int element; cin>>element;
            addNode(&root2, element);
        }

        printList(root2);

        Node *result = new Node();
        result = addTwoNumbers(root1, root2);

        printList(result);
    }
} 

/*
1
3
2 3 4
3
5 6 7
*/