#include <stdio.h>
#include <stdlib.h>

typedef int element_type;

//linked list düğüm yapısı
typedef struct LinkedListNode{
    element_type element;
    struct LinkedListNode *next; //node_ptr next;
} LinkedListNode;

typedef LinkedListNode* NodePtr; //düğüm pointer tipi
typedef NodePtr List; //linked list yapısı

//yeni düğüm oluşturma
NodePtr createNode(element_type data){
    NodePtr newNode = (NodePtr)malloc(sizeof(LinkedListNode));
    if (newNode == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->element = data;
    newNode->next = NULL;
    return newNode;
}

//başa düğüm ekleme
void addFirst(List *head, element_type data){
    NodePtr newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

//sona düğüm ekleme
void addLast(List *head, element_type data){
    NodePtr newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    } else {
        NodePtr current = *head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = newNode;
    }
}

//belirli bir değere sahip düğümü silme
void deleteNode(List *head, element_type data){
    if(*head == NULL) return;

    //silinecek düğüm baştaysa
    if((*head)->element == data){
        NodePtr temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    NodePtr current = *head;
    while (current->next != NULL && current->next->element != data){
        current = current->next;
    }

    //eğer düğüm bulunduysa sil
    if(current->next != NULL){
        NodePtr temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

//listeyi yazdırma
void printList(List head){
    NodePtr current = head;
    while(current != NULL){
        printf("%d -> ",current->element);
        current = current->next;
    }
    printf("NULL\n");
}

//tüm düğümleri serbest bırakma (bellek temizliği)
void freeList(List *head){
    NodePtr current = *head;
    NodePtr nextNode;

    while(current != NULL){
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    *head = NULL;
}

//main func = linked list işlemlerini test etme
int main(){
    List myList = NULL; //başlangıçta boş bir liste

    //listeye bazı elemanlar ekleyelim
    addFirst(&myList, 10);
    addFirst(&myList, 20);
    addLast(&myList, 30);
    addLast(&myList, 40);

    printf("Linked List: ");
    printList(myList);

    //belirli bir elemanı silellim
    deleteNode(&myList, 20);
    printf("Linked List after deleting 20: ");
    printList(myList);

    //tüm listeyi serbest bırakalım
    freeList(&myList);
    printf("List is cleaned!");

    return 0;
}

