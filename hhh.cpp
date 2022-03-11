#include<stdio.h>  
    
    int main (void) 
    { 
     int i =3, j= i-2 * i;
     switch(i==j)
     {
         case 1: j++;
         case 2: j--;
         case 0: j++; break;
        
         deafult: j= 0;
     }
        printf("%d", ++j);
        return 0; 
    }

