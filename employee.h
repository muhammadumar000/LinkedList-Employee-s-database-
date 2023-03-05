
struct employee
{
    char name[50];
    int age;
    float bs;

    struct employee * next;
};

void insertNodeAtEnd(struct employee ** head);
void printList(struct employee* head);
void deleteLastNode(struct employee **head);
int  insertNodeAfter(struct employee ** head, int idx);
void getNewNodeData(struct employee * New_node);
int length(struct employee *head);
void searchListbyAge(struct employee *head,int key);
