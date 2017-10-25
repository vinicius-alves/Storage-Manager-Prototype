/**
 * @file   Block.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe Block.
 */

using namespace std;

#ifndef BLOCK_H
#define BLOCK_H

/**
 * Classe que representa um bloco de dados
 */
class Block{

	private:
		/** Identificador do bloco */
		unsigned int id;

	public:
		/**
		 * @brief Construtor
		 * @param id - Identificador do bloco
		 */
		Block(unsigned int id);

		/**
		 * @brief Destrutor
		 */
		~Block();

};



#endif
