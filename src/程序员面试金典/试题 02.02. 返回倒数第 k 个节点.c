// 实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。

//  输入：1->2->3->4->5 和 k = 2
//  输出：4

int kthToLast(struct ListNode* head, int k){
    struct ListNode *fast = head; // 快指针
    struct ListNode *slow = head; // 慢指针

    while (k--) {
        fast = fast->next;
    }

    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->val;
}