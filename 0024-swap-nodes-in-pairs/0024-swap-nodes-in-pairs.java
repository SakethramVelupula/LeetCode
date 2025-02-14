/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head==null||head.next==null){
            return head;
        }
        ListNode newNode=new ListNode();
        ListNode temp=head;
        ListNode prev=newNode;
        while(temp!=null&&temp.next!=null){
            prev.next=temp.next;
            temp.next=prev.next.next;
            prev.next.next=temp;
            prev=temp;
            temp=temp.next;
        }
        return newNode.next;
    }
}