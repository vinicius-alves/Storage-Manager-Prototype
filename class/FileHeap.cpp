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


