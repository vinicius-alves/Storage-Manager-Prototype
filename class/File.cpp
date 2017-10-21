#include <stdexcept>
#include "File.h"

using namespace std;

File::scan(){
	// Altera curr_reg para apontar para o próximo registro
}

File::File(const char * path):path(path){
	this->path = path;
	this->fileHeader = new FileHeader(&file);
}

File::~File(){
	file.close();
	delete this->fileHeader;
}

File::open(){
	file.open(this->path, ios::binary);
	if (!file.is_open()){
		throw invalid_argument( "File not found!" );
	}
}

File::close(){
	file.close();
}

File::save(){
	//Salva na memória secundária o que ainda não foi sincronizado dos buffers
	file.flush();
}

File::reset(){
	//Volta o ponteiro para o início do arquivo
}

File::modify(bool (*function)(Field, Field)){
	//Modifica algum(ns) campo(s) do registro atual
}
