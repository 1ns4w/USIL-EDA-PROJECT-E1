#ifndef __CALCULATOR_H__ 
#define __CALCULATOR_H__

#include <iostream>
#include "stdlib.h"

//Realizado por Kevin De Lama 


template <typename T>
class Calculator
{
  struct Node
  {
    protected:
      T data;
      T getData()             { return data; }
      void setData (T &_data) { data=_data;  }
    
    public:
      Node *m_pChild[2];
      Node(const T &_data, Node *pLeft=nullptr, Node *pRight=nullptr)
        : data(_data)
      {   m_pChild[0] = pLeft;  m_pChild[1] = pRight; } 
  };
  public:
    Calculator();
    ~Calculator();
};

template <typename T>
class NodeNumber: public Calculator<T>{
  T n1;
  T n2;
};

template <typename T>
class NodeOperation: public Calculator<T>{
  T simbolo; //tipo char
};

#endif
