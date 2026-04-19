#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[10];
    int age;
    struct node *link;
} node;

int main(){
    node *head = NULL, *np, *tp; // np 새로운 노드, tp 연결리스트 출력 노드

    np = (node *)malloc(sizeof(node));
    strcpy(np->name,"gildong");
    np->age = 22;
    np->link = NULL;
    head = np; // head는 연결 리스트의 맨 앞을 가르킴

    np = (node *)malloc(sizeof(node));
    strcpy(np->name, "hyungwook");
    np->age = 28;
    np->link = NULL;
    head->link = np; // 새로운 노드를 연결 리스트 맨 뒤에 연결

    tp = head;
    while(tp != NULL){
        printf("[%s:%d] -> ",tp->name, tp->age);
        tp = tp->link; //tp를 연결 리스트 다음 노드로 이동
    }
    printf("NULL\n");
    return 0;
}