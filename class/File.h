#include <fstream>
#include <string>
#include "FileHeader.h"
#include "Block.h"

using namespace std;

#ifndef FILE_H
#define FILE_H

class File{

	public:
		File(const char * path);
		~File();
		virtual bool write(Block) =0;
		virtual Block read () =0;

	protected:
		FileHeader *fileHeader;
		const char * path;
		ifstream file;

};



#endif