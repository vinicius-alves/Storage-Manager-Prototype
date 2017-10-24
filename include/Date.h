/**
 * @file   Date.h
 * @Author Grupos D e E
 * @date   Outubro 20, 2017
 * @brief  Arquivo de declaração da classe Date.
 */

using namespace std;

#ifndef DATE_H
#define DATE_H

/**
 * Date é uma simples representação de data e hora
 */
class Date{

	private:
		int dia;
		int mes;
		int ano;
		int hora;
		int min;
		int seg;

	public:
		/** Construtor default */
		Date();

		/** Construtor com argumentos. Não faz verificação da entrada */
		Date(int diaP, int mesP, int anoP, int horaP, int minP, int segP);

		/** Destrutor */
		~Date();

};



#endif
