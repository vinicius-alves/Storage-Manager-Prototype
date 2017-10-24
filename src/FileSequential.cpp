/**
 * @file   FileSequential.cpp
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de implementação da classe FileSequential.
 */

#include "FileSequential.h"

using namespace std;

FileSequential::FileSequential(const char * path):File(path){}

bool FileSequential::write(Block){
	return false;
}

Block FileSequential::read (){

	Block block(0);

	return block;
}

Record FileSequential::find(bool (*function)(Field, Field)) {
	Record rec = Record();
	return rec;
}

Record FileSequential::findNext(bool (*function)(Field, Field)){
	Record rec = Record();
	return rec;
}

void FileSequential::delete_curr(){}

void FileSequential::insert(){}
