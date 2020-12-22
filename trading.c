/*  Name : A.Ghananand
    rollno. : 201046014
    course : BDA
*/

#include<stdint.h>
#include<assert.h>
#include<stdlib.h>
#include "header.h"
#include<string.h>


Tqueue tqueue_new(){
    Tqueue t1 ={NULL,0,NULL};
    return t1;
}

uint8_t queue_empty(Tqueue *tq){
    assert(tq!=NULL);
    return(tq->count == 0);
}

static Node *get_new_node(char *name,char *date,uint32_t price,uint32_t quantity){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->name = name;
    newnode->date = date;
    newnode->price = price;
    newnode->quantity = quantity;
    newnode->next = NULL;
    return newnode;
}

Tqueue *enqueue(Tqueue *tq,char *name,char *date,uint32_t price,uint32_t quantity){
    assert(tq != NULL);
    Node *get_new_node(char *name,char *date,uint32_t price,uint32_t quantity);
    if(tq->rear!=NULL)
    {
        tq->rear->next = newnode;
        tq->rear = newnode;
    }
    else
    {
        tq->rear = tq->front = newnode;
    }
    ++tq->count;

    return tq;
}

Tqueue *sell_old_shares(char *name,char *date,uint32_t price,uint32_t quantity)
{
    assert(tq!= NULL);

}

Tqueue *lookup(const Tqueue *tq,int data){

    }
