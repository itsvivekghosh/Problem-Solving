#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int data;
        Node *left, *right;

        Node(int data) {
            this->data=data;
            this->left=NULL, this->right=NULL;
        }
};

void printInorderUsingRecursion(Node *root) {
    if (root == NULL) return;

    printInorderUsingRecursion(root->left);
    cout<<root->data<<" ";
    printInorderUsingRecursion(root->right);
    return;
}

void printInorderUsingIteration(Node *root) {

    unordered_map<Node*, int> cnt;
    stack<Node *> S;
    S.push(root);

    while(!S.empty()) {
        Node *curr = S.top();
        if(curr == NULL) {S.pop(); continue;}
        if(cnt[curr] == 0) S.push(curr->left);
        else if(cnt[curr] == 1) cout<<curr->data<<" ";
        else if(cnt[curr] == 2) S.push(curr->right);
        else S.pop();
        cnt[curr]++;
    }
}

int main(void) {

    Node *root = new Node(6); 
    root->left = new Node(3); 
    root->right = new Node(17); 
    root->left->left = new Node(0); 
    root->left->right = new Node(4);
    root->right->left = new Node(11);
    root->right->right = new Node(19);

    cout<<"Printing using Recursion: "<<endl;
    printInorderUsingRecursion(root);cout<<endl;
    cout<<"Printing using Iteration: "<<endl;
    printInorderUsingIteration(root); cout<<endl;
}