#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void data_entry(struct Node **head, int value);
void data_print(struct Node* head);
void data_netry_at_beginning(struct Node **head, int value);
void data_entry_at_ending(struct Node **head, int value);
void data_entry_at_pos(struct Node **head, int pos, int value);
void data_delete_at_beginning(struct Node **head);
void data_delete_at_ending(struct Node **head);

int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head = NULL;

    char Y;
    int value;

    do {

        printf("Enter 1 for data entry in linked list: \n");
        printf("Enter 2 for data Printing in linked list: \n");
        printf("ENter 3 for data entry at the beginning in linked list: \n");
        printf("Enter 4 for data entry at the ending of the linked list: \n");
        printf("Enter 5 for data entry at specific position: \n");
        printf("Enter 6 for data delete at the beginning in linked list: \n");
        printf("Enter 7 for data delete at the ending fo the linked list: \n");
        printf("Enter 8 for data delete at the specific position: ");

        int choose,pos;
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Enter no. of data: \n");
            int n;
            scanf("%d", &n);
            while (n--) {
                int value;
                scanf("%d", &value);
                data_entry(&head, value);
            }
            printf("Data entry successful. \n");
            break;
        
        case 2:
            data_print(head);
            break;

        case 3:
            //int value;
            scanf("%d", &value);
            data_netry_at_beginning(&head, value);
            break;

        case 4:
            scanf("%d", &value);
            data_entry_at_ending(&head, value);
            break;

        case 5:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);
            data_entry_at_pos(&head, pos, value);
            break;

        case 6:
            data_delete_at_beginning(&head);
            break;

        case 7:
            data_delete_at_ending(&head);
            break;

        default:
            break;
        }
        printf("Do you want to continue.");
        scanf(" %c", &Y);
    } while (Y == 'y');

    return 0;
}

void data_entry(struct Node **head, int value) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = value;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=new;
}

void data_print(struct Node* head) {
    if (head == NULL) {
        printf("No data found. \n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void data_netry_at_beginning(struct Node **head, int value) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;

    if (*head == NULL) {
        *head = new;
        return;
    }

    new->next=*head;
    *head = new;
}

void data_entry_at_ending(struct Node **head, int value) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;
    if (*head==NULL) {
        *head=new;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=new;
}

void data_entry_at_pos(struct Node **head, int pos, int value) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    
    if (pos==0) {
        new->next=*head;
        *head = new;
    }

    struct Node* temp = *head;
    for (int i = 0; i < pos; i++) {
        if (temp->next == NULL) {
            printf("Invalid Position.");
            return;
        }
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
}

void data_delete_at_beginning(struct Node **head) {
    struct Node* temp = *head;
    *head=temp->next;
    free(temp);
}

void data_delete_at_ending(struct Node **head) {
    if (head==NULL) {
        printf("Data is empty.\n");
        return;
    }
    struct NOde
    if (*head->next==NULL) {

    }
}