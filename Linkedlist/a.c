// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// void insert(struct Node** href, int value) {
//     struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//     new->data=value;
//     new->next=NULL;

//     if (*href == NULL) {
//         *href = new;
//         return;
//     }

//     struct Node* temp = *href;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next=new;

// }

// void print(struct Node* head) {
//    struct Node* temp = head;
//    while (temp != NULL) {
//     printf("%d -> ", temp->data);
//     temp=temp->next;
//    }  
//    printf("NULL\n");
// }



// int main() {

//     struct Node* head = NULL;

//     insert(&head, 10);
//     insert(&head, 20);
//     insert(&head, 30);
//     insert(&head, 40);

//     print(head);
//     return 0;
// }