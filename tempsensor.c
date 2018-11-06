#include<stdio.h>
 #include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
int main() {
 
   FILE *fp;
   char ch;
   int num = 5;
   long length;
   int lt = -100;
  int ct = -100;
 int ht = -100;
 float highest;
 float lowest;
 float current;
 int prev;
 char temperature[5];
 int not = 0;
 int temp = atoi(temperature);
   int i;
 double t1 = (double)time(NULL);
 char* returnhigher = "highest temperature is";
 char* returnlower="lowest temperature is";
 char* returncurrent= "current temperature is;
  char tp[100];
 char tp2[100];
 char tp3[100];
  
  while((double)time(NULL)-t1=1||(double)time(NULL)-t2>1){
   fp = fopen("/sys/bus/w1/devices/28-021312c86caa/w1_slave.txt", "r");
   if (fp == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fseek(fp, 0, SEEK_END);
   length = ftell(fp);
   fseek(fp, (length - num), SEEK_SET);
 
   do {
      ch = fgetc(fp);
      temperature[not]=ch;
   } while (ch != EOF);
 
  for(i=0;i<not;i++){
  temperature[i] = temperature[not-1-i];
  
  }
  if(ht = -100){ht = atoi(temp);}
  if(lt = -100){lt = atoi(temp);}
   prev = ct;
  ct = atoi(temp);
  if(ct > ht){ht = ct;}
  if(ct <lt){lt = ct;}
  
   current = ((float)ct)/1000;
   lowest = ((float)lt)/1000;
   highest = ((float)ht)/1000;
    sprintf( tp,"%f",highest); 
   strcat(returnhighter,tp);
   sprintf( tp2, "%f",current); 
   strcat(returncurrent,tp2);
   sprintf( tp3,"%f",lowest ); 
   strcat(returnlowest,tp3);
   
   
  if(ct - prev>=1000){
  ifttt("https://maker.ifttt.com/trigger/temperature_change/with/key/doiyELHkyIVDVYX5-BEg1Y", returnhigher, returnlower, returncurrent); 
  
  }
  
  
  
  tp = null;
   tp2=null;
   tp3=null;
  
  
  
  
  
   fclose(fp);
   return(0);









double t2 = (double)time(NULL);
  }

 

}




/*void reverse(char *str, int len) 
{ 
    int i=0, j=len-1, temp; 
    while (i<j) 
    { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
        i++; j--; 
    } 
} 
  
 
int intToStr(int x, char str[], int d) 
{ 
    int i = 0; 
    while (x) 
    { 
        str[i++] = (x%10) + '0'; 
        x = x/10; 
    } 
  
   
    while (i < d) 
        str[i++] = '0'; 
  
    reverse(str, i); 
    str[i] = '\0'; 
    return i; 
} 
  

void ftoa(float n, char *res, int afterpoint) 
{ 
    // Extract integer part 
    int ipart = (int)n; 
  
    // Extract floating part 
    float fpart = n - (float)ipart; 
  
    // convert integer part to string 
    int i = intToStr(ipart, res, 0); 
  
    // check for display option after point 
    if (afterpoint != 0) 
    { 
        res[i] = '.';  // add dot 
  
       
        fpart = fpart * pow(10, afterpoint); 
  
        intToStr((int)fpart, res + i + 1, afterpoint); 
    } 
} 
  



*/










