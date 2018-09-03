#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

    struct Box b1,b2;
  struct Point p1,p2;

  initPoint(&p1,3.0,4.0);
    b1.ul = p1;
    b1.width = 5;
    b1.height = 7;
  assertEquals("[ul=(3,4), w=5,h=7]", boxToString(b1), "boxToString(b1)");

  initPoint(&p2,3.14159,6.2831853071);
    b2.ul=p2;
    b2.width =5;
    b2.height = 7;
  assertEquals("[ul=(3.14,6.28), w=5.00,h=7.00]", boxToString(b2,3), "boxToString(b2,3)");
  assertEquals("[ul=(3,6), w=5,h=7]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("[ul=(3.142,6.283), w=5.000,h=7.000]", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("[ul=(3.1416,6.2832), w=5.0000,h=7.0000]", boxToString(b2,5), "boxToString(b2,5)");

  return 0;
}
