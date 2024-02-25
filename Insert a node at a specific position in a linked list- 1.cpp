

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
        SinglyLinkedListNode* ptr=new SinglyLinkedListNode(data);
        SinglyLinkedListNode* curr;
        curr=llist;
        int cnt=0;
        while(curr!=NULL)
        {
            cnt++;
            if(cnt==position)
            {   
                SinglyLinkedListNode* ptr1 = curr -> next;
                curr->next=ptr;
                ptr->next = ptr1;
            }
            curr=curr->next;
            
        }
        return llist;
}

