#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILEHASH_H
#define FILEHASH_H

class FileHash : public File {

	public:
		FileHash(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif