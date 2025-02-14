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
    public ListNode mergetwolists(ListNode l1,ListNode l2){
        ListNode dummynode=new ListNode(-1);
        ListNode temp=dummynode;
        while(l1!=null&&l2!=null){
            if(l1.val>l2.val){
                temp.next=l2;
                l2=l2.next;
                temp=temp.next;
            }
            else{
                temp.next=l1;
                l1=l1.next;
                temp=temp.next;
            }
        }
        if(l1!=null){
            temp.next=l1;
        }
        else{
            temp.next=l2;
        }
        return dummynode.next;
    }
    public ListNode middleofll(ListNode head){
        ListNode slow=head;
        ListNode fast=head.next;
        while(fast!=null&&fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    public ListNode sortList(ListNode head) {
        if(head==null||head.next==null){
            return head;
        }
        ListNode middle=middleofll(head);
        ListNode right=middle.next;
        middle.next=null;
        ListNode left=head;
        left=sortList(left);
        right=sortList(right);
        ListNode newhead=mergetwolists(left,right);
        return newhead;
    }
}