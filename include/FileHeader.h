/**
 * @file   FileHeader.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe FileHeader.
 */

#include <fstream>
#include <string>
#include <Date.h>

using namespace std;

#ifndef FILEHEADER_H
#define FILEHEADER_H

/**
 * Classe que representa um cabeçalho, ou header, de um arquivo
 */
class FileHeader{

	public:
	   /**
	    * @brief Construtor
	    * @param file
	    */
		FileHeader(ifstream *file);
	   /**
		* @brief Atualiza o header
		* @param file
		*/
		void updateHeader();

	private:
		/** Input Stream para abrir o arquivo */
		ifstream *file;

		/** Data em que o arquivo foi criado */
		Date data_criacao;

		/** Data da última modificação do arquivo */
		Date data_modificacao;

		/** Tamanho total do arquivo */
		unsigned int size;

		/** Caminho do arquivo no sistema de arquivos. Se for uma sequência de nomes separados
		  * por barras (/), o nome do arquivo é o nome a partir da última barra até o ponto (.)
		  * e a extensão é o que vem depois do ponto */
		const char * path;

		/** Tipo de arquivo. Pode ser single-table (SINGLE), caso possua apenas uma tabela, 
		  * ou multi-table (MULTI), caso possua simultaneamente mais de uma tabela */
		enum tipo {SINGLE, MULTI};


};



#endif
