#include <iostream>
#ifndef C4Col_H
#define C4Col_H //Do more research for header guards

class C4Col {
	private:
		int numDiscs;
		int maxDiscs;
		char *discs;
	public:
		C4Col();
		int isFull();
		char getDisc(int);
		int getMaxDiscs();
		void addDisc(char);
};

#endif