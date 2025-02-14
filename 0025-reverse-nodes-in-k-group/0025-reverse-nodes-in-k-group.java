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
    ListNode getknode(ListNode temp,int k){
        k=k-1;
        while(k>0&&temp!=null){
            k--;
            temp=temp.next;
        }
        return temp;
    }
    ListNode reverse(ListNode temp) {
        ListNode prev = null;
        while (temp != null) {
            ListNode next = temp.next;
            temp.next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode temp=head;
        ListNode prevNode=null;
        while(temp!=null){
            ListNode knode=getknode(temp,k);
            if(knode==null){
                if(prevNode!=null){
                    prevNode.next=temp;
                }
                break;
            }
            ListNode nextNode=knode.next;
            knode.next=null;
            reverse(temp);
            if(temp==head){
                head=knode;
            }
            else{
                prevNode.next=knode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
}