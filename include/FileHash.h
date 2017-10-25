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
 * Classe que herda da classe File e implementa seus métodos virtuais.
 */
class FileHash : public File {

	public:
		FileHash(const char * path);

		/**
		 * @brief Descrição curta de find()
		 * @param function
		 * @return
		 */
		Record find(bool (*function)(Field, Field));
		/**
		 * @brief Descrição curta de findNext()
		 * @param function
		 * @return
		 * function pode ser uma função do tipo de valor único, de faixa de valores
		 * ou de lista de valores. Ela deve retornar True quando o campo satisfizer
		 * a condição
		 */
		Record findNext(bool (*function)(Field, Field));
		/**
		 * @brief Descrição curta de delete_curr()
		 */
		void delete_curr();
		/**
		 * @brief Descrição curta de insert()
		 */
		void insert();
		/**
		 * @brief Descrição curta de write()
		 * @return
		 */
		bool write(Block);
		/**
		 * @brief Descrição curta de read()
		 * @param block
		 * @return
		 */
		Block read ();

		/**
		 * @brief Função hash que define onde o registro deve estar dentro do arquivo
		 * @param key
		 * key é a chave do registro
		 * @return
		 */
		unsigned int hash(unsigned int key)

};



#endif
