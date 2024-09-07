#include <stdio.h>
#include<string.h>
 void main()
 {
 char strm[100],stren[100];
 char a;
 printf("enter the main string :\n");
 scanf("%[^\n]%*c",strm);
 printf("enter a string :\n");
 scanf("%s",stren);
 printf("  \n");
 a=strstr(strm,stren);    //used to find the first occurrence of a substring (stren) within main string (strm).
 if(a)
 {
 printf("*The main string contain the \n string you entered.. \n");
 print
   f("*The main string :\n \"%s\" \n which contain the sub string :\n \"%s\" \n",strm,stren);
 }
 else
 {
 printf("*The main string not contain the \n string you entered..\n");
 printf("*The main string :\n \"%s\"  \n which not contain the sub string :\n \"%s\" \n",strm,stren);
 }
 }
