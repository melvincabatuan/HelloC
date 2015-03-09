#ifndef H_Queue
#define H_Queue


/******************************************/
/*  Linked-list Node 
/******************************************/
typedef struct {
   char data;
   node * link;
} qNode;


/******************************************/
/*  Queue: Linked-list Implementation
/******************************************/
typedef struct {
  qNode *front;
  qNode *back;
  int count;
} queue;


/******************************************/
/*  enqueue - add items to the queue
/******************************************/
void enqueue(queue *q, char item)
{
    // 1. Create new node 
    qNode * newNode;
    newNode = malloc(sizeof(struct qNode));

    // 2. Assign the new item to new node data and set link to null  
    if (newNode != NULL) { // There are still memory available

       newNode->data = item;
       newNode->link = NULL;

    // 3. Empty queue  
       if (isEmpty(*q)){
          q->front = newPtr;
          q->back = newPtr;
       }

     // 4. 
       else
          q->back->next = newPtr;
          q->back = newPtr;
    }
    else
       printf("ERROR: Out of memory.\n", value);
}


char deQueue(queue *q)
{
    char item;
    qNode * tempPtr;
    item = q->front->data;

    tempPtr = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
        q->back = NULL;

     free (tempPtr);
     return value;
}


int isEmpty(queue q)
{
    return q.front == NULL;
}

#endif
