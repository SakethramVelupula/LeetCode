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
    public ListNode rotateRight(ListNode head, int k) {
       if(k < 1 || head == null || head.next == null){
            return head;
        }
        ListNode temp=head;
        int c=1;
        while(temp.next!=null){
            c++;
            temp=temp.next;
        }
        temp.next=head;
        int r=k%c;
        int n=c-r;
        ListNode newLast=head;
        for(int i=0;i<n-1;i++){
            newLast=newLast.next;
        }
        head=newLast.next;
        newLast.next=null;

        return head;
    }
}