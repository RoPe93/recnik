#include <stdio.h>
#include <string.h>

#define Max_Rec 17 //maksimalna duzina reci
#define Slova 30 //broj razlicitih slova u azbuci
#define Broj_Reci 2500 // broj reci koje pocinju nekim slovom

 int rec_postoji(char rec, &char recnik){


 }
 
 int unesi_rec(char nova_rec, &char recnik){


 }

int main(){
 char recnik [Slova][Broj_Reci];
 char nova_rec[Max_Rec]; 

 printf("Unesite rec:\n");

  if(rec_postoji(nova_rec))
   printf("Uneta rec %s vec postoji.\n");

  else
   unesi_rec(nova_rec, recnik);

  
 return 0;
}

