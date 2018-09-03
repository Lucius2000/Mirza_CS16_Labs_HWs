#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
    Node * max;
    max = list->head;
    Node * iter;
    for (iter = list->head->next; iter != NULL; iter = iter->next)
        if ((iter->data) > (max->data)){
            max = iter;
        }
    
  return max; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to min element 
  //   (first one such value that occurs if there are ties.)
    Node * min;
    min = list->head;
    Node * iter;
    for (iter = list->head->next; iter != NULL; iter = iter->next)
        if ((iter->data) < (min->data)){
            min = iter;
        }
  return min; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).
    Node * max;
    max = list->head;
    Node * iter;
    for (iter = list->head->next; iter != NULL; iter = iter->next)
        if ((iter->data) > (max->data)){
            max = iter;
        }
  return max->data;

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).
    Node * min;
    min = list->head;
    Node * iter;
    for (iter = list->head->next; iter != NULL; iter = iter->next)
        if ((iter->data) < (min->data)){
            min = iter;
        }
  return min->data; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).
    Node * iter;
    int sum = 0;
    for (iter=list->head; iter!= NULL; iter = iter->next){
        sum += iter->data;}
  return sum; // STUB!  Replace this line with correct code

}
// list: ptr to a linked list of Node (each with int data, and Node * next)
// value: int value of the node to delete
// Delete all instances of Nodes with the given value in a recursive way.
// Use a helper function that performs the recursion

void deleteNodeRecursively(LinkedList * list, int value){
    Node* recur = list->head;
    helper(recur);
}

void helper (struct Node* ptr){
    if (ptr->next == NULL){
        Node * temp = ptr;
        return;}
   
    helper(ptr->next);
    
    if (ptr->next->data == value){
        //check if the last node is the one we want to delete.
        if (ptr->next->next == NULL){
            tail = ptr;
            ptr->next = null;
        }
        else
            
    }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// value: int value of the node to delete
// Delete the instances of all Node with the given value using loops.

void deleteNodeIteratively(LinkedList * list, int value);

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Nodes in the linked list are expected to be in sorted ascending order
// value: int value of the node to insert
// Insert a new node in the linked list with the given value at the right spot
// The final linked list should have all its nodes in sorted ascending order
// Your implmentation should allow duplicate values in the list

void insertNodeToSortedList(LinkedList * list, int value);
