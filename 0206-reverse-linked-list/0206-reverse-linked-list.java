class Solution {
    public ListNode reverseList(ListNode head) {
        // ListNode prev = null;
        // while (head != null) {
        //     ListNode temp = head.next;
        //     head.next = prev;
        //     prev = head;
        //     head = temp;
        // }
        // return prev;   
        if(head==null||head.next==null){
            return head;
        }     
        ListNode last=reverseList(head.next);
        head.next.next=head;
        head.next=null;
        return last;
    }
}