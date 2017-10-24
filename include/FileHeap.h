/**
 * @file   FileHeap.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe FileHeap.
 */

#include "File.h"
#include <fstream>

using namespace std;

#ifndef FILEHEAP_H
#define FILEHEAP_H

/**
 * Descrição da classe FileHeap
 */
class FileHeap : public File {

	public:
		FileHeap(const char * path);
		virtual bool write(Block) ;
		virtual Block read ();

};



#endif
