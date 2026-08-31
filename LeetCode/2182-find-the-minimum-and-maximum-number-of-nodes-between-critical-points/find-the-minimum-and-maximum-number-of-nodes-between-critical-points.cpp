/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector <int> nodes;
        int idx = 1;
        ListNode *prev = head;
        ListNode *curr = head->next;
        while (curr->next) {
            if (prev->val < curr->val && curr->val > curr->next->val) nodes.push_back(idx);
            if (prev->val > curr->val && curr->val < curr->next->val) nodes.push_back(idx);
            prev = curr;
            curr = curr->next;
            idx++;
        }
        int no = nodes.size();
        if (no<=1) return {-1, -1};
        int mini = INT_MAX;
        for (int i=1; i<no; i++) mini = min(mini, nodes[i]-nodes[i-1]);
        return {mini, nodes[no-1]-nodes[0]}; 
    }
};