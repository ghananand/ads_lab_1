/*  Name : A.Ghananand
    rollno. : 201046014
    course : BDA
*/

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdint.h>
#inculde<string.h>

#define BUY 1
#define SELL 2

typedef struct enum Enum;
struct enum{
    QUEUE_OK 1
    QUEUE_EMPTY 2
};

typedef struct _tqueue_ Tqueue;
struct _tqueue_{
    Tqueue *front;
    int32_t count;
    Tqueue *rear;
};

typedef struct node Node;
struct node{
    char *name;
    char *date;
    uint32_t price;
    uint32_t quantity;

    Node *next

};

typedef struct _rqueue_ Rqueue;
struct _rqueue_{
    int32_t data;
    Rqueue status;
};

Tqueue tqueue_new();
uint8_t queue_empty();
static Node *get_new_node(char *name,char *date,uint32_t price,uint32_t quantity);
Tqueue *enqueue(Tqueue *tq,char *name,char *date,uint32_t price,uint32_t quantity);
Tqueue *sell_old_shares(char *name,char *date,uint32_t price,uint32_t quantity);
Tqueue *new_shares(char *name,char *date,uint32_t price,uint32_t quantity);
Tqueue *lookup(const Tqueue *tq,int data);
Tqueue *topup(char *name,char *date,uint32_t price,uint32_t quantity);


#endif // HEADER_H_INCLUDED
