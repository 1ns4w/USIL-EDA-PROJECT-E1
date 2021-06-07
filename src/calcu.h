#ifndef __CALCU_H__
#define __CALCU_H__

#include <algorithm>
#include <iostream>
#include "type.h"


template <typename T>
class Node 
{
  protected: 
    T dato;
    Node *m_pChild[2];
    Node(const T &_dato, Node *pLeft=nullptr, Node *pRight=nullptr) //Maizo agregado const
      : dato(_dato)
    {   m_pChild[0] = pLeft;  m_pChild[1] = pRight; }
  public:
  Node ();
  virtual bool evalnum(T2 num)=0;
  virtual bool evaloperator(T2 oper)=0;
  virtual bool evalvari(T2 var)=0;
};

template <typename T>
class NodeNumber: public Node<T>
{
 T  dato;
 T getDato()             { return dato; } //Maizo
 void setDato (T &_dato) { dato=_dato; }  //Maizo

 bool evalnum(T2 num)
 { 
   if (num >= '0')
    return true;
   return false;
 }
};
  
template <typename T>
class NodeOperator: public Node<T>
{
 T2  simbol;
 T getSimbol()             { return simbol; } 
 void setSimbol (T &_simbol) { simbol=_simbol; }
 
 bool evaloperator(T2 oper)
 {
   if (oper=='+'||oper=='-'||oper == '*' || oper == '/' || oper == '^')
    return true;
  return false;
 }
};

template <typename T>
class NodeVariable: public Node<T>
{
 T2  variable;
 T getVari()             { return variable; } 
 void setVari (T &_vari) { variable=_vari; }
};


#endif
