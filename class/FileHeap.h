#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILEHEAP_H
#define FILEHEAP_H

class FileHeap : public File {

	public:
		FileHeap(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif