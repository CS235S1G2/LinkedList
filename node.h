/***********************************************************************
 * Header:
 *    NODE
 * Summary:
 *    This will contain the definition and implementation of the Node class
 * Author
 *    Nathan Bench, Jed Billman, Jeremy Chandler, Justin Chandler
 ************************************************************************/
 
/***********************************************
 * TODO
 * WRITE function definitions
 * REPLACE comment descriptions
 **********************************************/
 
#ifndef NODE_H
#define NODE_H

#include "node.h"

/***********************************************
 * Node
 * A node to be used in a linked list
 **********************************************/
template <class T>
class Node
{
   public:
      // constructors
      Node(): pNext(NULL) {}
      Node(const T & t): data(t) {}
      
      // members
      Node <T> * pNext;
      T data;
};

/***********************************************
* COPY
* Copy a linked­list. Takes a pointer to a Node as a parameter and returns a newly
* created linked­list containing a copy of all the nodes below the list represented by the
* parameter. This should be a non­member function.
***********************************************/
template <class T>
Node <T> * copy(Node <T> * pNode)
{
   
}   

/***********************************************
* INSERT
* Insert a new Node into the current linked­list. The first parameter is the value to
* be placed in the new Node. The second parameter is the Node preceding the new Node in the
* list. An optional third parameter is set to true if the new item is to be at the head of the
* list. Please return a pointer to the newly created Node. This should be a non­member function.
***********************************************/
template <class T>
Node <T> * insert(const T & t, Node <T> * pNode, bool isHead = false)
{
   
}

/***********************************************
* FIND
* Find the Node corresponding to a given passed value from a given linked­list. The
* first parameter is a pointer to the front of the list, the second is the value to be found. The
* return value is a pointer to the found node if one exists. This should be a non­member
* function.
***********************************************/
template <class T>
Node <T> * find(Node <T> * pHead, const T & t)
{
   
}

/***********************************************
* EXTRACTION OPERATOR <<
* Display the contents of a given linked­list.
***********************************************/
template <class T>
std::ostream & operator << (std::ostream & out, Node <T> * pList):

/***********************************************
* Release all the memory contained in a given linked­list. The one parameter is a
* pointer to the head of the list. This should be a non­member function.
***********************************************/
template <class T>
void freeData(Node <T> * pHead)
{
   
}


#endif // NODE_H
