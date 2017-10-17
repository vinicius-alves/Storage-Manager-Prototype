#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILESEQUENTIAL_H
#define FILESEQUENTIAL_H

class FileSequential : public File {

	public:
		FileSequential(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif