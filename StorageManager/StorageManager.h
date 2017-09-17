#include <vector>
#include <fstream>

using namespace std;

#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

struct Aluno {
 	unsigned int DRE;
 	char ENDERECO[134];
 	unsigned int TELEFONE[3];
 	char * NOME;
};

class StorageManager{

	public:
		StorageManager(const char * path);
		vector< Aluno > select();

	private:
		const char * path;

};



#endif