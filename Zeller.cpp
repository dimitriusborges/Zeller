#include <Zeller.H>

/*----------------Zeller's congruence---------------------
 
 Function:
 
 h = [(q + ((m+1).26)/10 + K + (K/4) + (J/4) - 2.J)] MOD 7
 
 Where:
 
 h = weekday
 q = month day 
 m = month, where 3 = march, 4 = april, 5 = may... jan and feb are 13 and 14, respectively, of the last year
 K = century year (2013 century year gonna be 13)
 J = century (2013 century is 20, i.e., century - 1)
  
 */


Zeller::Zeller(){}

Zeller::~Zeller(){}




/*
*IN: MONTH DAY, MONTH, YEAR, ALL AS INT
 *OUT: WEEKDAY,AS INT (1 - SUNDAY, 2 - MONDAY...7 - SATURDAY)
 *OBEJECTIVE: DETERMINES THE WEEKDAY OF ANY DATE.
 */
int Zeller::algoZeller(int dia_mes,int mes ,int ano){

  int mesZeller = 0; //month with zeller rules
  int aux = 0; //auxiliar
  int dia_sem = 0;//weekday
  int seculo = 0;//century
  int anoSeculo = 0;//year in the century
  int i = 0;

  for(i; i < 7 ; i++){ 

    //if march to dezember, month assumes its real value.
    if(mes > 2 ){
      mesZeller = mes; 

    }

    //if january or febuary, month assumes value 13 and 14, respectively, of the last year.
    else{
      mesZeller = mes + 12;
      ano = ano - 1; 
    } 

    seculo = ano/100;  
    //CENTURY VALUE IS ALWAYS 0 FOR DATES BETWEEN 2000 AND 2099
    
    anoSeculo = ano%100;

    dia_sem=(dia_mes +(26*mesZeller + 26)/10) + anoSeculo + (anoSeculo/4) + (seculo/4) -2*seculo;
    dia_sem= dia_sem%7;

     // giving 7 for saturday instead of 0, now the values for each day are:
     // 1 - sunday, 2 - monday, 3 - tuesday, 4- wednesday, 5 - thursday, 6 - friday, 7 - saturday               
    if(dia_sem == 0) dia_sem = 7;

    return dia_sem;
  }

}
