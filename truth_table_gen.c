// ******************************************
// Module : truth table gen 
// Author : Shiva Prasad R
// Date   : 7/7/2019
// ******************************************


#include <stdio.h>
#include <stdbool.h>

bool gate_func (int a, int b)
{
  bool c,d,e;   
  
  // logic expression of circuit
  c = !(a && b); // NAND gate 
  d =  (a ^  b); // XOR gate
  e = !(c ^  d); // XNOR gate
  
  return e;
}

int main ()
{
  bool a, b, e;
  printf ("\n--------------");
  printf ("\n TRUTH TABLE  ");
  printf ("\n--------------");
  printf ("\n a  |  b | out");
  printf ("\n _____________");
  printf ("\n 0  |  0 | %0d", gate_func (0, 0));
  printf ("\n 0  |  1 | %0d", gate_func (0, 1));
  printf ("\n 1  |  0 | %0d", gate_func (1, 0));
  printf ("\n 1  |  1 | %0d", gate_func (1, 1));
  printf ("\n--------------");

}
