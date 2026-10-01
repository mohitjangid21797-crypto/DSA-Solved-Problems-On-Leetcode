/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        return NULL;
       Node *headcopy = new Node(0) , *tail = headcopy;
       Node *temp = head;
       while(temp)
       {
        tail->next = new Node(temp->val);
        tail = tail->next;
        temp = temp->next;
       }
       tail = headcopy;
       headcopy = headcopy->next;
       delete tail;
       temp = head;
       tail = headcopy;
       unordered_map<Node* , Node*>m;
       while(temp)
       {
          m[temp]  = tail;
          temp = temp->next;
          tail = tail->next;
       }
       temp = head , tail = headcopy;
       while(tail)
       {
        tail->random = m[temp->random];
        tail = tail->next;
        temp = temp->next;
       }
      return headcopy;

    }
};