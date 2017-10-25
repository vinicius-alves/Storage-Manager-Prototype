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
		/**
		 * @brief Construtor default.
		 */
		Date();
		/**
		 * @brief Construtor com argumentos. Não faz verificação da entrada.
		 * @param diaP - Dia
		 * @param mesP - Mês
		 * @param anoP - Ano
		 * @param horaP - Hora
		 * @param minP - Minuto
		 * @param segP - Segundo
		 */
		Date(int diaP, int mesP, int anoP, int horaP, int minP, int segP);

		/**
		 * @brief Destrutor.
		 */
		~Date();

};



#endif
