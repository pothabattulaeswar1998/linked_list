/********* Linked list program for characters A B C D E ************/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
        char data;
        struct Node *next;
};

int main()

{
        struct Node *ch = (struct Node*)malloc(sizeof(struct Node));
        struct Node *ch1 = (struct Node*)malloc(sizeof(struct Node));
        struct Node *ch2 = (struct Node*)malloc(sizeof(struct Node));
        struct Node *ch3 = (struct Node*)malloc(sizeof(struct Node));
        struct Node *ch4 = (struct Node*)malloc(sizeof(struct Node));


        ch->data = 'A';
        ch1->data = 'B';
        ch2->data = 'C';
        ch3->data = 'D';
        ch4->data = 'E';

        ch->next = ch1;
        ch1->next = ch2;
        ch2->next = ch3;
        ch3->next = ch4;
        ch4->next = NULL;

        struct Node *temp = ch;


        printf("ch->data : %c\n",ch->data);
        temp = temp->next;
        printf("ch1->data : %c\n",temp->data);
        temp = temp->next;
        printf("ch2->data : %c\n",temp->data);
        temp = temp->next;
        printf("ch3->data : %c\n",temp->data);
        temp = temp->next;
        printf("ch4->data : %c\n",temp->data);


        return 0;
}

