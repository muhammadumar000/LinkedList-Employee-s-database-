#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "employee.h"

int main()
{
    int choice;

    struct employee * head = NULL; /// Pointer to the first element (head) of the list


    printf("Hello! This program lets you manage your Employees' Database:\n");




    while(1)
    {
        printf("\nWhat do you want to do now?\n");


        printf("\n1. Insert a new node at the end of the list.");
        printf("\n2. Print the list.");
        printf("\n3. Delete the last item from the list.");
        printf("\n4. Insert a new node after index.");
        printf("\n5. Print the length of the list.");
        printf("\n6. Search the list for a record.");
        printf("\n7. Save the list to a file.");
        printf("\n8. Exit the menu.\n");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            insertNodeAtEnd(&head);
        }
        else if(choice == 2)
        {
            printList(head);
        }
        else if(choice == 3)
        {
            deleteLastNode(&head);
        }
        else if(choice == 4)
        {
            int index = 0;
            printf("\n Enter index where do you want to insert new Employee data: ");
            scanf("%d",&index);
            insertNodeAfter(&head,index);
        }
        else if(choice == 5)
        {
            printf("\n The length of the list is: %d\n",length(head));
        }
        else if(choice == 6)
        {
            int key = 0;
            printf("\n Enter the age for which you want to search: ");
            scanf("%d",&key);
            searchListbyAge(head,key);
        }
        else if(choice == 8)
        {
            break;
        }
        else{
            continue;
        }

    }
}


