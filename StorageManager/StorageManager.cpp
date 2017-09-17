#include <stdexcept>
#include "StorageManager.h"

using namespace std;

StorageManager::StorageManager(const char * path):path(path){}

vector<Aluno> StorageManager::select(){

ifstream file;
file.open(this->path, ios::binary);
vector<Aluno> alunos;

	if (file.is_open()){

		char charactere;
		int number;
		//if is char
		file.get(charactere);
		//if is int
		number = int(charactere);

		file.close();

	} else{
		throw invalid_argument( "File not found!" );
	}

	return alunos;
}


