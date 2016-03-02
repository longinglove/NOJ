/*************************************************************************
    > File Name: reverseLN.c
    > Author: duqinglong
    > Mail: du_303412@163.com 
    > Created Time: Wed 02 Mar 2016 03:14:56 PM CST
 ************************************************************************/

struct ListNode* reverse(struct ListNode* head)
{
	struct ListNode* NewList, *temp, *Index;
	NewList = head, Index = head;
	while (Index != NULL)
	{
		temp = NewList;
		NewList = Index->next;
		Index = Index->next->next;
		NewList->next = temp;
	}
	return NewList;
}
