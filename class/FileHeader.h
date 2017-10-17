#include <fstream>
#include <string>

using namespace std;

#ifndef FILEHEADER_H
#define FILEHEADER_H

class FileHeader{

	public:
		FileHeader(ifstream *file);
		void updateHeader();

	private:
		ifstream *file;

};



#endif