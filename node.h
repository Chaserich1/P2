//Chase Richards
//CMPSCI 4280 P2
//Filename: node.h

#ifndef NODE_H
#define NODE_H

#include "token.h"
using namespace std;

struct Node{
   string name;
   int treeDepth;

   Node* firstChild;
   Node* secondChild;
   Node* thirdChild;
   Node* fourthChild;

   Token firstToken;
   Token secondToken;

   Node(string name, int treeDepth){
      this->name = "";
      this->treeDepth = treeDepth;

      this->firstChild = nullptr;
      this->secondChild = nullptr;
      this->thirdChild = nullptr;
      this->fourthChild = nullptr;
   
      this->firstToken = Token();
      this->secondToken = Token();
   }
   
   Node(){
      this->name = "";
      this->treeDepth = 0;

      this->firstChild = nullptr;
      this->secondChild = nullptr;
      this->thirdChild = nullptr;
      this->fourthChild = nullptr;

      this->firstToken = Token();
      this->secondToken = Token();
   }
};

#endif    
