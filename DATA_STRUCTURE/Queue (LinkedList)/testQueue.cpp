//Program to test the various operations of a queue

#include <iostream>
#include "myQueue.h"

using namespace std;

int main(){
  
    queueType<string> q(5);

    q.initializeQueue();

    cout<< "q.isEmptyQueue() = " << q.isEmptyQueue() <<endl;

    q.addQueue("Milk");
    q.addQueue("Butter"); 
    q.addQueue("Eggs");
    q.addQueue("Cupcake");
    q.addQueue("Froyo");
    q.displayQueue();

    cout<< "q.isEmptyQueue() = " << q.isEmptyQueue() <<endl;
    cout<< "q.isFullQueue() = " << q.isFullQueue() <<endl;

    q.addQueue("Gingerbread");
    q.displayQueue();

    cout<< "q.front() = "<< q.front() <<endl; 
    cout<< "q.back() = "<< q.back() <<endl;

    q.deleteQueue();
    q.displayQueue(); 
   
    return 0;
}
