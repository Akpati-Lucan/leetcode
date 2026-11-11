# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def print_list(head):
    current = head

    while current is not None:
        print(current.val, end=" -> ")
        current = current.next

    print("None")
class Solution:
    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:
        added_list = ListNode(0)
        current = added_list
        multiple = 0

        while (l1 is not None or l2 is not None or multiple != 0):
            l1_num = 0 if l1 is None else l1.val
            l2_num = 0 if l2 is None else l2.val

            init_sum = l1_num + l2_num + multiple
            remainder = init_sum % 10
            multiple = init_sum // 10

            current.next = ListNode(remainder)
            current = current.next

            if l1 is not None:
                l1 = l1.next

            if l2 is not None:
                l2 = l2.next
        return added_list.next

l1 = ListNode(3)
l2 = ListNode(4, l1)
l3 = ListNode(2, l2)
# [2,4,3]

l4 = ListNode(4)
l5 = ListNode(6, l4)
l6 = ListNode(5, l5)
# [5,6,4]
print_list(l3)
print_list(l6)
solution = Solution()
ans = solution.addTwoNumbers(l3, l6)
print_list(ans)