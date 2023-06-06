#include "C4Col.h"
#include <iostream>

using namespace std;


C4Col::C4Col(){ //Default Constructor
	numDiscs = 0;
	maxDiscs = 6;
	discs = new char [maxDiscs]; //Initialization slightly different from write up??	
	for (int i = 0; i < maxDiscs; i++) discs[i] = '_';
} // All Good

int C4Col::isFull(){
	//C4Col C4ColObject;
	if (numDiscs == maxDiscs){
		return 1;
	}
	else{
		return 0;
	}
} // All Good

char C4Col::getDisc(int discsIndex = 0){
	return discs[discsIndex];
} 


int C4Col::getMaxDiscs(){
	return maxDiscs;
} // All good

void C4Col::addDisc(char newDiscs){
	if (isFull()){
		cout << "Column is full, please try another!" << endl;
	}
	else{
		discs[numDiscs++] = newDiscs;
	}
} //All good

