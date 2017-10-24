/**
 * @file   FileHeader.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe FileHeader.
 */

#include <fstream>
#include <string>

using namespace std;

#ifndef FILEHEADER_H
#define FILEHEADER_H

/**
 * Descrição da classe FileHeader
 */
class FileHeader{

	public:
	   /**
	    * @brief Descrição curta de FileHeader(ifstream *file)
	    * @param file
	    */
		FileHeader(ifstream *file);
	   /**
		* @brief Descrição curta de updateHeader()
		* @param file
		*/
		void updateHeader();

	private:
		/** Descrição de file */
		ifstream *file;

};



#endif
