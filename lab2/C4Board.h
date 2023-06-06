#include <iostream>
#include "C4Col.h"

class C4Board {
 public:
	 C4Board();
	 void display();
	 void play();
	 int win();
 private:
	 int numCol;
	 C4Col *board;
};