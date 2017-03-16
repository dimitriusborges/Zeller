#ifndef Zeller_H
#define Zeller_H

#include <Arduino.h>


/*

  Library responsible for determine the weekday of any date. Receives as entry: 
month day, month and year and gives : 
1 - sunday, 2 - monday, 3 - tuesday, 4- wednesday, 5 - thursday, 6 - friday, 7 - saturday 

*/

class Zeller{

public:

	Zeller();
	~Zeller();


/*
*IN: MONTH DAY, MONTH, YEAR, ALL AS INT
 *OUT: WEEKDAY,AS INT (1 - SUNDAY, 2 - MONDAY...7 - SATURDAY)
 *OBEJECTIVE: DETERMINES THE WEEKDAY OF ANY DATE.
 */
int algoZeller(int dia_mes,int mes ,int ano);

};

#endif
