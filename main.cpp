#include <iostream>
#include "class/FileSequential.h"
#include "class/FileHash.h"
#include "class/FileHeap.h"

int main(){
	
	File *smS  = new FileSequential("base.txt");
	File *smH  = new FileHash("base.txt");
	File *smFH = new FileHeap("base.txt");



	return 0;
}