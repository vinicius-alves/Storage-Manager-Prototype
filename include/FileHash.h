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
 * Classe que herda da classe File e implementa seus métodos virtuais. Adiciona registros segundo uma função hash.
 */
class FileHash : public File {

	public:
		FileHash(const char * path);
		
		Record find(bool (*function)(Field, Field));
		Record findNext(bool (*function)(Field, Field));
		void delete_curr();
		void insert();
		bool write(Block);
		Block read ();

		/**
		 * @brief Função hash que define onde o registro deve estar dentro do arquivo
		 * @param key
		 * key é a chave do registro
		 * @return
		 */
		unsigned int hash(unsigned int key);

};



#endif
