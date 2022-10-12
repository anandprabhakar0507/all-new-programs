class ListNode:
   def __init__(self, data, next = None):
      self.val = data
      self.next = next
def make_list(elements):
   head = "ListNode(elements[0])
   for element in elements[1:]:
      ptr = head
      while ptr.next:
         ptr = ptr.next
      ptr.next = ListNode(element)
return head
def print_list(head):
   ptr = head
   print('[', end = "")
   while ptr:
      print(ptr.val, end = ", ")
      ptr = ptr.next
   print(']')
class Solution(object):
   def reverseList(self, head):
      """
      :type head: ListNode
      :rtype: ListNode
      """
      return self.solve(head,None)
   def solve(self, head, back):
      if not head:
         return head
      temp= head.next
      #print(head.val)
      head.next = back
      back = head
      if not temp:
         return head
      head = temp
      return self.solve(head,back)
list1 = make_list([1,3,5,7])
ob1 = Solution()
list2 = ob1.reverseList(list1)
print_list(list2)