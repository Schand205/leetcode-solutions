class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = nullptr;
        ListNode *run1 = l1, *run2 = l2;
        int buffer = 0;
        //appends new vals to returned list till both lists and buffer are empty
        while(run1 || run2 || buffer) {
            int newval = 0;
            //calcing new val
            if(run1 && run2)    newval = run1->val + run2->val + buffer;
            else if(run1)   newval = run1->val + buffer;
            else if(run2)   newval = run2->val + buffer;
            else newval = buffer;
            
            if(newval > 9) {
                buffer = 1;
                newval -= 10;
            } else buffer = 0;
            //creating newnode and prepend it to the returned list
            ListNode *newnode = new ListNode(newval);
            if(!res)    res = newnode;
            else {
                ListNode *resrun = nullptr;
                for(resrun = res; resrun->next; resrun = resrun->next);
                resrun->next = newnode;
            }
            if(run1 && run2) {   
                run1 = run1->next; 
                run2 = run2->next;
            }
            else if(run1)   run1 = run1->next; 
            else if(run2)   run2 = run2->next;
        }
        return res;
    }
};
