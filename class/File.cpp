#include <stdexcept>
#include "File.h"

using namespace std;

File::File(const char * path):path(path){

	file.open(this->path, ios::binary);
	if (!file.is_open()){
		throw invalid_argument( "File not found!" );
	}

	this->fileHeader = new FileHeader(&file);
}

File::~File(){
	file.close();
	delete this->fileHeader;
}


