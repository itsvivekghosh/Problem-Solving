#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

class Node {

    public: 
        int data;
        Node *left, *right;
        vector<int> arr1, arr2;

        Node() {}
        Node(int data) {
            this->data=data;
            this->left=this->right=NULL;
        }

        void processInorder(Node *root, vector<int> &v) {

            if(root == NULL) return;
            processInorder(root->left, v);
            // cout<<root->data<<endl;
            v.push_back(root->data);
            processInorder(root->right, v);

            return;
        }

        void findSolution(Node *root1, Node *root2) {
            int s=30;
            
            processInorder(root1, arr1);
            processInorder(root2, arr2);

            int i=0, j=arr2.size()-1;
            while(i<arr1.size() and j>=0) {
                if(arr1[i] + arr2[j] == s) {
                    cout<<arr1[i]<<" "<<arr2[j];
                    break;
                }
                else if(arr1[i]+arr2[j] < s) {
                    i++;
                }
                else {
                    j--;
                }
            }
        }
};

int main(void) {

    Node *root = new Node(6); 
    root->left = new Node(3); 
    root->right = new Node(17); 
    root->left->left = new Node(0); 
    root->left->right = new Node(4);
    root->right->left = new Node(11);
    root->right->right = new Node(19);

    Node *root2 = new Node(8); 
    root2->left = new Node(5); 
    root2->right = new Node(13); 
    root2->left->left = new Node(1); 
    root2->left->right = new Node(7);

    Node *obj = new Node();
    obj->findSolution(root, root2);
    cout<<endl;
}