import java.util.*;

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
    public List<Integer> allNodesAtKDistance(Node root, Node target, int K) {
        List<Integer> res=new ArrayList<>();
        if (root == null) 
            return res;

        HashMap<Node, Node> parentMap = new HashMap<>();
        fillParent(parentMap, root);

        Queue<Node> queue=new LinkedList<>();
        HashSet<Node> visited=new HashSet<>();
        queue.add(target);

        while (!queue.isEmpty()) {
            int size=queue.size();
            for (int i=0;i<size;++i) {
                Node curr=queue.poll();
                visited.add(curr);

                if (K == 0) {
                    res.add(curr.key);
                }
                if (parentMap.containsKey(curr) && !visited.contains(parentMap.get(curr))) {
                    queue.add(parentMap.get(curr));
                }
                if (curr.left != null && !visited.contains(curr.left)) {
                    queue.add(curr.left);
                }
                if (curr.right != null && !visited.contains(curr.right)) {
                    queue.add(curr.right);
                }
            } 
            --K;    
            if (K < 0) break;       
        }

        return res;
    }
    private static void fillParent(HashMap<Node, Node> map, Node root) {
        if (root == null) return;
        if (root.left != null)
            map.put(root.left, root);

        if (root.right != null) 
            map.put(root.right, root);

        fillParent(map, root.left);
        fillParent(map, root.right);
        return;
    }
}

public class printKDistanceNodesFromTarget {
    private static Node root;
    printKDistanceNodesFromTarget(int key) {
        root=new Node(key);
    }
    printKDistanceNodesFromTarget() {
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

        List<Integer> ans = solution.allNodesAtKDistance(root, root.left, 2);
        
        System.out.print(ans);
        return ;
    }
}