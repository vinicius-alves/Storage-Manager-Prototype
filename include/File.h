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
 * Classe para abstração de arquivos. É uma classe virtual, que terá 3 classes filhas:
 * FileHash, FileHeap e FileSequential.
 */
class File{

	private:
	   /**
	 	* @brief Altera curr_reg para apontar para o próximo registro.
	 	*/
		void scan();

	public:
		/**
		 * @brief Construtor com parâmetro path, que indica o caminho no sistema de arquivos
		 * @param path
		 */
		File(const char * path);
		/**
		 * @brief Destrutor
		 */
		~File();
		/**
		 * @brief "Abre" o arquivo, associando o objeto ifstream chamado file ao arquivo identificado pelo path
		 */
		void open();
		/**
		 * @brief "Fecha" o arquivo, desassociando o objeto ifstream chamado file do arquivo outrora associado
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
		 * @brief Encontra um registro que satifaz a função function, retornando true
		 * @param function
		 * function pode ser uma função do tipo de valor único, de faixa de valores
		 * ou de lista de valores. Ela deve retornar True quando o campo satisfizer
		 * a condição
		 * @return
		 */
		virtual Record find(bool (*function)(Field, Field)) =0;
		/**
		 * @brief Descrição curta de findNext()
		 * @param function
		 * function pode ser uma função do tipo de valor único, de faixa de valores
		 * ou de lista de valores. Ela deve retornar True quando o campo satisfizer
		 * a condição
		 * @return
		 */
		virtual Record findNext(bool (*function)(Field, Field)) =0;
		/**
		 * @brief Deleta o registro atual (apontado pelo atributo curr_reg)
		 */
		virtual void delete_curr() =0;
		/**
		 * @brief Insere um novo registro
		 */
		virtual void insert() =0;
		/**
		 * @brief Escrita simples no arquivo
		 * @return
		 */
		virtual bool write(Block) =0;
		/**
		 * @brief Leitura simples do arquivo
		 * @param block
		 * @return
		 */
		virtual Block read () =0;

	protected:
		/** Header associado ao arquivo */
		FileHeader *fileHeader;

		/** Objeto ifstream que será associado a um arquivo */
		ifstream file;

		/** Ponteiro para o registro atual */
		Record * curr_reg;

};



#endif
