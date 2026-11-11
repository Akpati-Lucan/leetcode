#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

/**
 * Definition for singly-linked list.
 */

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void print_list(ListNode* head){
    ListNode* current = head;
    while (current != nullptr){
        cout << current->val << " -> " ;
        current = current->next;
    }
    cout << "None\n";
}

 class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* added_list = new ListNode(0);
            ListNode* current = added_list;
            int multiple = 0;

            while (l1 != nullptr || l2 != nullptr || multiple != 0){

                int l1_num = (l1 == nullptr) ? 0 : l1->val;
                int l2_num = (l2 == nullptr) ? 0 : l2->val;

                int init_sum = l1_num + l2_num + multiple;
                int remainder = init_sum % 10;
                multiple = init_sum / 10;


                current->next = new ListNode(remainder);
                current = current->next;

                if (l1 != nullptr) l1 = l1->next;
                if (l2 != nullptr) l2 = l2->next;
            }

            return added_list->next;
        }
    };
    
    int main() {

        ListNode* l1 = new ListNode(9);
        ListNode* l2 = new ListNode(9, l1);
        ListNode* l3 = new ListNode(9, l2);
        ListNode* l4 = new ListNode(9, l3);
        ListNode* l5 = new ListNode(9, l4);
        ListNode* l6 = new ListNode(9, l5);
        ListNode* l7 = new ListNode(9, l6);
        ListNode* l8 = new ListNode(9, l7);
        ListNode* l9 = new ListNode(9, l8);
        ListNode* l10 = new ListNode(1, l9);
        // [1,9,9,9,9,9,9,9,9,9]
    
        ListNode* l11 = new ListNode(9);
        // [9]
    
        print_list(l10);
        print_list(l11);
    
        Solution solution;
        ListNode* ans = solution.addTwoNumbers(l10, l11);
    
        print_list(ans);
    
        return 0;
    }