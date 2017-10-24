/**
 * @file   File.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe File.
 */

#include <fstream>
#include <string>
#include "FileHeader.h"
#include "Block.h"
#include "Record.h"

using namespace std;

#ifndef FILE_H
#define FILE_H

/**
 * Descrição da classe File
 */
class File{

	private:
	   /**
	 	* @brief Altera curr_reg para apontar para o próximo registro.
	 	*/
		void scan();

	public:
		/**
		 * @brief Descrição curta de File(const char * path)
		 * @param path
		 */
		File(const char * path);
		/**
		 * @brief Descrição curta de ~File()
		 */
		~File();
		/**
		 * @brief Descrição curta de open()
		 * @param path
		 */
		void open();
		/**
		 * @brief Descrição curta de close()
		 * Descricao completa (opcional).
		 */
		void close();
		/**
		 * @brief Salva na memória secundária o que ainda não foi sincronizado dos buffers.
		 */
		void save();
		/**
		 * @brief Volta o ponteiro para o início do arquivo.
		 */
		void reset();
		/**
		 * @brief Modifica algum(ns) campo(s) do registro atual.
		 */
		void modify();
		/**
		 * @brief Descrição curta de find()
		 * @param function
		 * @return
		 */
		virtual Record find(bool (*function)(Field, Field)) =0;
		/**
		 * @brief Descrição curta de findNext()
		 * @param function
		 * @return
		 * function pode ser uma função do tipo de valor único, de faixa de valores
		 * ou de lista de valores. Ela deve retornar True quando o campo satisfizer
		 * a condição
		 */
		virtual Record findNext(bool (*function)(Field, Field)) =0;
		/**
		 * @brief Descrição curta de delete_curr()
		 */
		virtual void delete_curr() =0;
		/**
		 * @brief Descrição curta de insert()
		 */
		virtual void insert() =0;
		/**
		 * @brief Descrição curta de write()
		 * @return
		 */
		virtual bool write(Block) =0;
		/**
		 * @brief Descrição curta de read()
		 * @param block
		 * @return
		 */
		virtual Block read () =0;

	protected:
		/** Descrição de fileHeader */
		FileHeader *fileHeader;

		/** Descrição de path */
		const char * path;

		/** Descrição de file */
		ifstream file;

		/** Descrição de curr_reg */
		Record * curr_reg;

};



#endif
