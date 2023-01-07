This File contains a list of tips and tricks for competetive data structures and algorithm questions

### XOR Tricks
	a ^ a = 0
	0 ^ a = a
  
#### Q) every element appears twice except for one. Find that single one.
- Use XOR
#### Q) Climbing n Stairs with 1 or 2 at a time 
- Use dp, dp[1]=1, dp[2]=2 for each i from 3 to n dp[i] = dp[i-1]+dp[i-2] return dp[i]
#### Q) Best Time to buy and sell stocks I 
- max_so_far
#### Q) LinkedList Cycle Detection 
- Use slow and fast pointer, where fast is running twice as slow. If they are able to meet then cycle is there
#### Q) Middle node of a linkedList
- slow and fast pointer, return the slow node (fast => twice of slow)
#### Q) Reverse LinkedList 
```
  ListNode* reverse(ListNode* head) {
     ListNode *curr = head, *prev = NULL, *temp = NULL;
     while(curr) {
          temp = curr->next;
          curr->next = prev;
          prev = curr;
          curr = temp;
      }
      return prev;
  }
```
#### Q) Check if a LinkedList is Pallendrome 
- In O(n) space Complexity: First make a new reversed list and then compare both
- In O(1) space complexity: reverse the half of the list by checking with fast pointer approach, and then compare
#### Q) Remove elements with given value from the linkedList
- Iterative way: 
``` 
while(temp) {
            if(temp->val == val) {
                if(prev) prev->next = NULL;
            }
            else if(prev == NULL) {
                res = prev = new ListNode(temp->val);
            } else {
                prev->next = temp;
                prev = temp;
            }
            temp = temp->next;
        }
        return res;
}
```
- Recursive way: 
```
	ListNode* removeElements(ListNode* head, int value) {
        
        
        while(head != NULL && head->val == value){
            head = head->next;
        }
        if(head == NULL)
            return head;
        
        head->next = removeElements(head->next,value);
        return head;
    }
```
#### Q) Binary Search
```
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left <= right) {
            mid = (left + right) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) {
                left = mid+1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
```
#### Q) Level order Traversal of a Binary Tree [BFS]
```
  unordered_map<int,vector<int>> LevelOrderTraversal(TreeNode* root) { //BFS
        queue<pair<TreeNode*,int>> q;
        unordered_map<int, vector<int>> um;
        vector<double> res;
        int depth = 0;
        q.push({root, depth});
        
        while(!q.empty()) {
            TreeNode* topNode = q.front().first;
            depth = q.front().second;
            um[depth].push_back(topNode->val);
            q.pop();
            if(topNode->left) {
                q.push({topNode->left, depth+1});
            }
            
            if(topNode->right) {
                q.push({topNode->right, depth+1});
            }
        }
        return um;
    }
```

#### Q) [Minimum depth of a Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)
- Using queue BFS
```
  int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        return bfs(root,0); 
   }
   
  int bfs(TreeNode* root, int depth) {
        queue<TreeNode*> q;
        int n = 0, res = INT_MAX;
        q.push(root);
        
        while(!q.empty()) {
            depth++;
            n = q.size();
            for(int i = 0; i < n ;i++) {
                TreeNode* top = q.front();
                q.pop();
                if(top->left == NULL && top->right == NULL) {
                    res = min(res, depth);
                }
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
        }
        return res;
    }
```

- Using recursion
```
  int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left && root->right)
            return min(1 + minDepth(root->left), 1 + minDepth(root->right));
        else if(root->left) 
            return 1 + minDepth(root->left);
        return 1 + minDepth(root->right);

    }
```
- BFS Using recursion
```
int bfs(TreeNode* root, int depth) {
        if(root == NULL)
            return INT_MAX;
        
        if(root->left == NULL && root->right == NULL)
            return depth+1;
        
        return min(bfs(root->left, depth+1), bfs(root->right, depth+1));
        
    }
```

#### [Minimum Depth of a Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/description/)
- Given a binary tree, find its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
- Note: A leaf is a node with no children.
- Using Recursion: 
```
   int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        if(root->left == NULL) return 1 + minDepth(root->right);
        if(root->right == NULL) return 1 + minDepth(root->left); 
        return 1 + min(minDepth(root->left) , minDepth(root->right));
    }
```
#### [Same Binary Tree](https://leetcode.com/problems/same-tree/)
- Given the roots of two binary trees p and q, write a function to check if they are the same or not.
- Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
```
   bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
```

#### [Path Sum](https://leetcode.com/problems/path-sum/)
- Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
- Using recursion
```
   bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) return targetSum == root->val;

        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
```
- It can be solved using dfs or bfs also i.e using stack or queue
#### [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- Given the root of a binary tree, return its maximum depth.
- A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
- - Using Recursion
```
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL) return 1 + maxDepth(root->right);
        if(root->right == NULL) return 1 + maxDepth(root->left);
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
```
- - Using DFS (Stack)
```
   int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        stack<pair<TreeNode*, int>> st;
        st.push({root, 0});
        int res = 0;
        while(!st.empty()) {
            TreeNode* node = st.top().first;
            int depth = st.top().second;
            st.pop();

            //check leaf node
            if(node->left == NULL && node->right == NULL) res = max(res, 1 + depth);

            
            if(node->left) st.push({node->left, depth+1});
            if(node->right) st.push({node->right, depth+1});

        }
        return res;
    }
```
#### [543. Diameter of Binary Tree**](https://leetcode.com/problems/diameter-of-binary-tree/description/)
- Given the root of a binary tree, return the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root. The length of a path between two nodes is represented by the number of edges between them.
	- Using Recursion
```
   int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh+rh, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }
    
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
```
	- Using Stack [DFS Preorder]
```
   int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 0;
        stack<TreeNode*> st;
        st.push(root);
        int res = 1;
        while(!st.empty()) {
            TreeNode* curr = st.top();
            int lh = height(curr->left);
            int rh = height(curr->right);
            res = max(res, lh + rh);
            st.pop();
            if(curr->left) st.push(curr->left);
            if(curr->right) st.push(curr->right);
        }

        return res;
    }
```
#### Check if Two Binary Tree are identical
```
   bool isIdentical(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(subRoot == NULL || root == NULL) return false;
        bool left = isIdentical(root->left, subRoot->left);
        bool right = isIdentical(root->right, subRoot->right);
        
        return  (root->val == subRoot->val) && left && right;
    }
```

### [572. Is Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)
- Note: check if the two tree is identical at current or left or from right node
```
   bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root == NULL) return subRoot == NULL;
       return isIdentical(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
```
