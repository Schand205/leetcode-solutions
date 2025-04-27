class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return nullptr;
        vector<int> int_vec;
        for(auto list : lists) {
            ListNode *run = list;
            while(run != nullptr) {
                int_vec.push_back(run->val);
                run = run->next;
            }
        }
        if(int_vec.size() == 0) return nullptr;
        sort(int_vec.begin(), int_vec.end());
        ListNode *ret = nullptr;
        ListNode *run = ret;
        for(auto va : int_vec) {
            if(ret == nullptr) {
                ListNode* newNode = new ListNode(va);
                ret = newNode;
                run = ret;
            }
            else {
                ListNode* newNode = new ListNode(va);
                run->next = newNode;
                run = run->next;
            }
        }
        return ret;
    }
};
