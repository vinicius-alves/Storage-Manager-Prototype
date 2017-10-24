/**
 * @file   FileHeap.cpp
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de implementação da classe FileHeap.
 */

#include "FileHeap.h"

using namespace std;

FileHeap::FileHeap(const char * path):File(path){}

bool FileHeap::write(Block){
	return false;
}

Block FileHeap::read (){

	Block block(0);

	return block;
}

Record FileHeap::find(bool (*function)(Field, Field)) {
	Record rec = Record();
	return rec;
}

Record FileHeap::findNext(bool (*function)(Field, Field)){
	Record rec = Record();
	return rec;
}

void FileHeap::delete_curr(){}

void FileHeap::insert(){}
