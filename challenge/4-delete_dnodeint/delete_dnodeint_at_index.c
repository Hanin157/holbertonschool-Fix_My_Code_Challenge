else
{
        tmp = (*head)->next;
        (*head)->prev->next = tmp;
        if (tmp != NULL)
                tmp->prev = (*head)->prev;
        free(*head);
        *head = saved_head;
}
