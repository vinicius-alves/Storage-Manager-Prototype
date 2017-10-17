#include "FileHeap.h"

using namespace std;

FileHeap::FileHeap(const char * path):File(path){}

bool FileHeap::write(Block){
	return false;
}

Block FileHeap::read (){

	Block block(0);

	return block;
}


