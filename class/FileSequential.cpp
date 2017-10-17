#include "FileSequential.h"

using namespace std;

FileSequential::FileSequential(const char * path):File(path){}

bool FileSequential::write(Block){
	return false;
}

Block FileSequential::read (){

	Block block(0);

	return block;
}
