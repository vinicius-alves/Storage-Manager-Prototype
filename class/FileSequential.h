/**
 * @file   FileSequential.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe FileSequential.
 */

#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILESEQUENTIAL_H
#define FILESEQUENTIAL_H

/**
 * Descrição da classe FileSequential
 */
class FileSequential : public File {

	public:
		FileSequential(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif
