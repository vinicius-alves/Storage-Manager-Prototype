/**
 * @file   FileHash.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe FileHash.
 */

#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILEHASH_H
#define FILEHASH_H

/**
 * Descrição da classe FileHash
 */
class FileHash : public File {

	public:
		FileHash(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif
