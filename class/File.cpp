/**
 * @file   File.cpp
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de implementação da classe File.
 */

#include <stdexcept>
#include "File.h"

using namespace std;

File::scan(){

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
	file.flush();
}

File::reset(){

}

File::modify(bool (*function)(Field, Field)){

}
