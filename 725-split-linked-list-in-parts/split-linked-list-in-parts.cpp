class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int n = 0;
        ListNode* temp = head;

        while(temp){
            n++;
            temp = temp->next;
        }

        int part = n / k;
        int extra = n % k;

        vector<ListNode*> ans;

        temp = head;

        for(int i = 0; i < k; i++){

            ListNode* partHead = temp;

            int currentSize = part + (extra > 0 ? 1 : 0);

            if(extra > 0)
                extra--;

            for(int j = 1; j < currentSize && temp; j++)
                temp = temp->next;

            if(temp){

                ListNode* nextPart = temp->next;
                temp->next = NULL;
                temp = nextPart;
            }

            ans.push_back(partHead);
        }

        return ans;
    }
};