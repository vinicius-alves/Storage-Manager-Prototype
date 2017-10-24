#include <iostream>
#include "FileSequential.h"
#include "FileHash.h"
#include "FileHeap.h"

int main(int argc, char **argv){
	
	File *smS  = new FileSequential("base.txt");
	File *smH  = new FileHash("base.txt");
	File *smFH = new FileHeap("base.txt");

	return 0;
}