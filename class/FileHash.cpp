/**
 * @file   FileHash.cpp
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de implementação da classe FileHash.
 */

#include "FileHash.h"

using namespace std;

FileHash::FileHash(const char * path):File(path){}

bool FileHash::write(Block){
	return false;
}

Block FileHash::read (){

	Block block(0);

	return block;
}



