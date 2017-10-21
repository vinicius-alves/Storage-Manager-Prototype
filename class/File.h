#include <fstream>
#include <string>
#include "FileHeader.h"
#include "Block.h"
#include "Record.h"

using namespace std;

#ifndef FILE_H
#define FILE_H

class File{

	private:
		void scan();

	public:
		File(const char * path);
		~File();
		void open();
		void close();
		void save();
		void reset();
		void modify();
		virtual Record find(bool (*function)(Field, Field)) =0;
		virtual Record findNext(bool (*function)(Field, Field)) =0;
		// function pode ser uma função do tipo de valor único, de faixa de valores
		// ou de lista de valores. Ela deve retornar True quando o campo satisfizer
		// a condição
		virtual void delete_curr() =0;
		virtual void insert() =0;
		virtual bool write(Block) =0;
		virtual Block read () =0;

	protected:
		FileHeader *fileHeader;
		const char * path;
		ifstream file;
		Record * curr_reg;

};



#endif
