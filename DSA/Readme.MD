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
while(nxt){ 
  curr->next = prev;
  prev = curr;
  curr = nxt;
  nxt = nxt->next;
} 
if(prev) {
  curr->next = prev;
  prev = curr;
}
```
#### Q) Check if a LinkedList is Pallendrome 
 - In O(n) space Complexity: First make a new reversed list and then compare both
```
ListNode* reverse(ListNode* head) {
     ListNode *curr = head, *prev = NULL, *temp = NULL;
      while(curr) {
          temp = new ListNode(curr->val);
          temp->next = prev;
          prev = temp;
          curr = curr->next;
      }
      return prev;
}
```
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
