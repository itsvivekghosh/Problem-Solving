class Node {
    int key;
    Node left, right;

    public Node(int key) {
        this.key=key;
        left=null;
        right=null;
    }
}

class Solution {
    public void inOrder(Node root) {
        if (root == null)   
            return ;

        inOrder(root.left);
        System.out.print(root.key+" ");
        inOrder(root.right);
    }
    public int findMaxDepth(Node root) {
        if (root == null) {
            return 0;
        }
        int leftDepth = findMaxDepth(root.left);
        int rightDepth = findMaxDepth(root.right);

        if (leftDepth > rightDepth)
            return leftDepth+1;

        return rightDepth+1;
    }
}

public class maximumDepth {
    private static Node root;
    maximumDepth(int key) {
        root=new Node(key);
    }
    maximumDepth() {
        root=null;
    }
    public static void main(String[] args) {
        root=new Node(3);

        root.left=new Node(5);
        root.right=new Node(1);

        
        root.left.left=new Node(6);
        root.left.right=new Node(2);
        root.left.right.left=new Node(7);
        root.left.right.right=new Node(4);

        root.right.left=new Node(0);
        root.right.right=new Node(8);

        Solution solution=new Solution();
        // solution.inOrder(root);

        Integer ans = solution.findMaxDepth(root);
        
        System.out.print(ans);
        return ;
    }
}