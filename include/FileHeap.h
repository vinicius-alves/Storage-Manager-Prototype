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
 * Classe que herda da classe File e implementa seus métodos virtuais. Adiciona registros como um heap.
 */
class FileHeap : public File {

	public:
		FileHeap(const char * path);

		Record find(bool (*function)(Field, Field));
		Record findNext(bool (*function)(Field, Field));
		void delete_curr();
		void insert();
		bool write(Block);
		Block read ();

};



#endif
