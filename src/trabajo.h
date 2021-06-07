#ifndef __TRABAJO_H__
#define __TRABAJO_H__
#include <iostream>
#include"stdlib.h"

using namespace std;
template<typename T>
class principal
{
  protected:
  T numero1;
  T numero2;
  public:
    principal();
    ~principal();
};
template<typename T>
class operaciones:public principal<T>
{
  public:
  T suma();
  T resta();
  T multiplicacion();
  T division();
  T potencia();
};
#endif
