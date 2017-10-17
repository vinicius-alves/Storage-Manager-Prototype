#include "FileHash.h"

using namespace std;

FileHash::FileHash(const char * path):File(path){}

bool FileHash::write(Block){
	return false;
}

Block FileHash::read (){

	Block block(0);

	return block;
}



