
#ifndef VARS
#define VARS

typedef struct vars{
       char identif[31];//nom identif
       char type[20];
       int ligne;// la ligne de declaratione cette variable
       int cnst;// si la variable est un constante ou non
       int tab;//si la variable est un tableau
       int conteur;// le nombre du declaration 
                     //cette variable dans la dectionnaire des variables
       int lignex;//le nombre du ligne si la variable est un tableau  
       int colonney;//le nombre du colonne si la variable est un tableau       
       int checkval;//si la variable conient un valeur
       struct vars *next;
}vars;
typedef struct fonction{
       char name[31];//le nom de fonction ou la procedure
       char type[20];//le type de fonction
       int arg;//le nombre des arguments du fonction ou du procedure
       int proc;//si c'est un fonction ou un procedure
       int conteur;//le nombre du declaration 
       //cette fonction dans la dictionnaire des fonctions 
       struct fonction *next;
       
}fonction;

#endif