#ifndef __CALCULADORA_H__ 
#define __CALCULADORA_H__ 

#include <iostream> 
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

template <typename T>
class Calculadora
{
    struct Node
    {
      T data;
      Node *m_pChild[2]; //seleccion de nodo izquierdo y derecho
      Node(const T &_data, Node *pLeft=nullptr, Node *pRight=nullptr) : data(_data)
      {   m_pChild[0] = pLeft;  m_pChild[1] = pRight;   }
      T getData()             { return data; }
      void setData (T &_data) { data=_data; } 
    };

  class Numero
  {
    private:
      T a; //primera numero
      T b; //segunda numero
      friend class Operacion; //usado en Operacion

    public:
  };

  class Variable
  {
    private:
      T x; //variable
      friend class Operacion; //usado en Operacion
      
    public:

  };

  class Operacion
  {
    private:
      T signo; //Signo en String

    public:
      /*
      //futuro sustituto del switch
      void ejec(const std::map<std::string, int>& m)
      const auto& [signo, ] : m;

      std::map<std::string,  > resultado { {"+", suma()}, {"-", resta()}, {"*", multiplicacion()}, {"/", division()} };
      */
  };
};

#endif
