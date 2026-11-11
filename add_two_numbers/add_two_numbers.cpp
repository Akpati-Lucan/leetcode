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
        int get_number(ListNode* l1){
            ListNode* curr = l1;
            int num = 0;
            int multiplier = 1;
            while (curr != nullptr) {
                int digit = (curr->val) * multiplier;
                num += digit;
                multiplier *= 10;
                curr = curr->next;
            }
            return num;
        }

    public:
        ListNode* get_list(string num) {

            int len_str = num.size();

            vector<ListNode*> arr(len_str);

            int i = len_str - 1;
            while (i >= 0) {
                int digit = num[i] - '0';
                ListNode* node = new ListNode(digit);
                arr[i] = node;
                i -= 1;
            }

            i = len_str - 1;
            while (i > 0) {
                arr[i]->next = arr[i - 1];
                i -= 1;
            }
    
            return arr[len_str - 1];
        }
            
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int num1 = get_number(l1);
            int num2 = get_number(l2);
            cout << num1 << "\n";
            cout << num2 << "\n";

            int num3 = num1 + num2;

            cout << num3 << "\n";
            string num_str = to_string(num3);
            return get_list(num_str);
        }
    };
    int main() {

        ListNode* l1 = new ListNode(3);
        ListNode* l2 = new ListNode(4, l1);
        ListNode* l3 = new ListNode(2, l2);
        // [2, 4, 3]
    
        ListNode* l4 = new ListNode(4);
        ListNode* l5 = new ListNode(6, l4);
        ListNode* l6 = new ListNode(5, l5);
        // [5, 6, 4]
    
        print_list(l3);
        print_list(l6);
    
        Solution solution;
        ListNode* ans = solution.addTwoNumbers(l3, l6);
    
        print_list(ans);
    
        return 0;
    }