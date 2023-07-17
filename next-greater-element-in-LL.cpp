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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ll ;
        while(head != NULL){
          ll.push_back(head->val);
          head = head->next;
        }
        //vector<int> ans (ll.size());
        stack<int> st;
        for(int i= 0;i<ll.size();i++){
          while(!st.empty()&& ll[i]> ll[st.top()]){
            int ele = st.top();st.pop();
            ll[ele] = ll[i];
          }
          st.push(i);
        }
        while(!st.empty()){
          ll[st.top()]=0;
          st.pop();
        }
        ll[ll.size()-1]==0;
        return ll;
    }
};
