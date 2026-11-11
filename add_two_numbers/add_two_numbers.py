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
    def get_number(self, l1: ListNode | None) -> int:
        curr = l1
        num = 0
        i = 0
        while curr != None:
            digit = (curr.val) * (10 ** i)
            num += digit
            i += 1
            curr = curr.next
        return num

    def get_list(self, num : str) -> ListNode | None:
        len_str = len(num)

        arr = [ListNode()] * len_str
        i = len_str - 1
        while i >= 0:
            node = ListNode(int(num[i]))
            arr[i] = node
            i -= 1

        i = len_str - 1
        while i > 0:
            arr[i].next = arr[i - 1]
            i -= 1

        return arr[-1]

    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:
        
        num1 = self.get_number(l1)
        num2 = self.get_number(l2)

        num3 = num1 + num2

        return self.get_list(str(num3))

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