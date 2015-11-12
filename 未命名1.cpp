//#include<stdio.h>
//main(){
//	
////	int *a=new int[100];
////	printf("sizeof(a)=%d   sizeof(&a)=%d   sizeof(&a[0])=%d  sizeof(a[120])=%d  a[120]=%d",sizeof(a),sizeof(&a),sizeof(&a[0]),sizeof(a[120]),a[120]);
////    int i=-20;
////    int j=10;
////    printf("%u",i+j);
////	char a1 = getchar();
////switch(1){
////	case 0.1:
////		
////		break;
////	case 0.2:
////		
////		break;
////}
//const int max = 100;
//int array[max];
//} 
#include <iostream>
#include<stdlib.h>
using namespace std; 
 
typedef struct Student{ 
    int data; 
    struct Student *next; 
}Node; 
 
/* 
* 遍历一遍就得到单链表的中间结点的方法 
* 思想：两个指针，一个每次走一步，另一个每次走两步，两步走完的时候，一步的就是结果 
*/ 
int getCenterNode(Node *head){ 
    Node *p2 = head; 
    Node *p1 = head; 
    while(p2->next!=NULL && p2->next->next!=NULL){    
        p2 = p2->next->next; 
        p1 = p1->next; 
    } 
    return p1->next->data; 
} 
 
void displayList(Node *head){ 
    cout<<"List:"<<endl; 
    Node *p = head->next; 
    while(p!=NULL){ 
        cout<<p->data<<" "; 
        p=p->next; 
    } 
    cout<<endl; 
} 
 
main(){ 
    Node *head,*tmp,*last; 
    int i=0; 
    head = (Node*)malloc(sizeof(Student)); 
    head->next = NULL; 
    for(i=0;i<10;++i){ 
        tmp = (Node*)malloc(sizeof(Student)); 
        tmp->data = i; 
        tmp->next = head->next; 
        head->next = tmp; 
    } 
    displayList(head); 
    cout<<getCenterNode(head)<<endl; 
    printf("%d   %d\n",sizeof(Node),sizeof(char *));
    system("pause"); 
} 
