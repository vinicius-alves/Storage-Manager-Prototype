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
 * Classe que herda da classe File e implementa seus métodos virtuais. Adiciona registros sequencialmente.
 */
class FileSequential : public File {

	public:
		FileSequential(const char * path);

		Record find(bool (*function)(Field, Field));
		Record findNext(bool (*function)(Field, Field));
		void delete_curr();
		void insert();
		bool write(Block);
		Block read ();

};



#endif
