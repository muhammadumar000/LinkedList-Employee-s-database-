#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "employee.h"

void searchListbyAge(struct employee *head,int key){

    struct employee *temp = head;

    if(head == NULL){
        printf("\nOops! List is Empty.\n");
    }
    else if(head->age == key){
        printf("\n Searched Entry: \n");
        printf("\n Name: %s\n Age: %d\n Basic Salary: %f\n",head->name,head->age,head->bs);
    }
    else{
        while(temp->age!= key && temp->next !=NULL){
            temp = temp->next;
        }

        if(temp->age != key && temp->next == NULL){
            printf("\n Record not Found \n");
        }
        else{
            printf("\n Searched Entry: \n");
            printf("\n Name: %s\n Age: %d\n Basic Salary: %f\n",temp->name,temp->age,temp->bs);
        }

    }

}

void getNewNodeData(struct employee * New_node)
{

    printf("\n Enter Name: ");
    scanf("%s",&New_node->name);

    printf("\n Enter Age: ");
    scanf("%d",&New_node->age);

    printf("\n Enter basic Salary: ");
    scanf("%f",&New_node->bs);
}

void insertNodeAtEnd(struct employee **head)
{
    struct employee *New_node,*temp;
    temp = *head;

    New_node = (struct employee*) malloc(sizeof (struct employee));
    getNewNodeData(New_node);
    New_node->next = NULL;

    if(*head == NULL)    /// if currently the list is empty
    {
        *head = New_node;
    }
    else
    {
        while((temp->next)!=NULL)
        {
            temp = temp->next;

        }
        temp->next = New_node;

    }
}



void printList(struct employee* head)
{
    struct employee *temp;
    temp = head;

    if(head == NULL)
    {
        printf("\n Oops! There is no employee in Database...\n");
    }

    else
    {
        printf("\n \t\tEmployee's Detail...\n\n");
        while(temp!=NULL)
        {
            printf("\n Name: %s\n Age: %d\n Basic Salary: %f\n",temp->name,temp->age,temp->bs);
            temp = temp->next;
        }
    }


}

void deleteLastNode(struct employee **head)
{

    struct employee *temp = *head;

    if(*head == NULL)
    {
        /// list is empty...
        printf("Oops! There is no employee to delete.");
    }
    else if ((*head)->next == NULL)
    {
        /// list has only one employee
        free(*head);
        *head = NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

}



int  insertNodeAfter(struct employee ** head, int idx)
{

    struct employee *newNode,*temp;
    temp = *head;
    newNode = (struct employee*)malloc(sizeof(struct employee));
    getNewNodeData(newNode);

    int i = 0;

    if(*head == NULL)
    {
        /// list is empty...
        printf("Oops! There is no employee to delete.");
    }
    else
    {
        while(i!=idx && temp->next != NULL)
        {
            i++;
            temp = temp->next;
        }

        if(i!=idx&&temp->next == NULL)
        {
            printf("/nInvalid entry.../n");
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

}

int length(struct employee *head){

    struct employee *temp = head;
    int len = 0;

    if(head == NULL){
        printf("\n List is empty\n");
    }
    else{
        while(temp!= NULL){
            len++;
            temp = temp->next;
        }
    }

    return len;
}
