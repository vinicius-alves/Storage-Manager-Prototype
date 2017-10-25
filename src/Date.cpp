/**
 * @file   Date.cpp
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de implementação da classe Date.
 */

#include "Date.h"

using namespace std;

Date::Date(){

	dia = 1;
	mes = 1;
	ano = 2001;
	hora = 0;
	min = 0;
	seg = 0;

}

Date::Date(int diaP, int mesP, int anoP, int horaP, int minP, int segP){

	dia = diaP;
	mes = mesP;
	ano = anoP;
	hora = horaP;
	min = minP;
	seg = segP;
}

Date::~Date() {}
