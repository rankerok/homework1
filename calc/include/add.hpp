#pragma once

#include <string>

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    Add( ASTNode *lhs, ASTNode *rhs)
        : ASTNode("+",lhs,rhs)
        {}
   ~Add() {}
   Add &operator=(const Add &other) = delete;     
};

class Sub : public ASTNode {
  public:
    Sub( ASTNode *lhs, ASTNode *rhs)
        : ASTNode("-",lhs,rhs)
        {}
   ~Sub(){}
   Sub &operator=(const Sub &other) = delete;      
};
class Mul : public ASTNode {
  public:
    Mul( ASTNode *lhs, ASTNode *rhs)
        : ASTNode("*",lhs,rhs)
        {}
   ~Mul(){} 
   Mul &operator=(const Mul &other) = delete;    
};
class Div : public ASTNode {
  public:
    Div( ASTNode *lhs, ASTNode *rhs)
        : ASTNode("/",lhs,rhs)
        {}
   ~Div(){}  
   Div &operator=(const Div &other) = delete;   
};
