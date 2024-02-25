// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *n=new SinglyLinkedListNode(data);
    if(head==NULL) return head=n;
    else{
        SinglyLinkedListNode *nhead=head;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=n;
        return nhead;
    }
}