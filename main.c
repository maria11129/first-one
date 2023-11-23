#include <stdio.h>
#include <stdlib.h>

 int main ()
 {  int AA,MM,JJ,AAA,MMM,JJJ,A,M,J,AGE,CJ,B,DIF,LEAP;
     printf("entrer votre date de naissance\n ");
     scanf("%d/ %d /%d",&AA,&MM,&JJ);
     printf("Entrer la date d'aujourd'hui\n");
     scanf("%d / %d / %d",&AAA,&MMM,&JJJ);
     //DIF=AAA-AA;
     //LEAP=(DIF/4)+1;
     AA=AA*365;
     MM=(MM*30);
     B=AA+MM+JJ;
     AAA=AAA*365;
     MMM=(MMM*30);
     CJ=AAA+MMM+JJJ;
     AGE=CJ-B;
     A=AGE/365;
     AGE=AGE %(365);
     M=AGE/30;
     J=AGE %30;
     /*J=J+LEAP;
     if((J/30)!=0)
     {
        M=M+(J/30);
        J=J%30;
     }*/
     printf("Votre age est :%d ans et %d mois et %d jours.",A,M,J);
}
