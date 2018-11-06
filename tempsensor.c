#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
 int ifttt(char*where, char *v1, char *v2, char *v3);
 int status;
 int lower[] = ftoa(lt,&status);
  int current[] = ftoa(ct,&status);
 int higher[] = ftoa(ht,&status);

  double t1 = (double)time(NULL);
 
 wiringPiSetup () ;
 pinMode(4,INPUT);
 FILE *fd;
 int n;
  int i;
  int j;
 double temperature;
  char temp[5]
 char buf[60];
 double ht =-100;
 double lt = -100;
 double ct =0;
 /* char value1[30];
  char value2[30];
  char value3[30];*/
  while(1){
   if((fd = fopen("/sys/bus/w1/devices/28-021312c86caa/w1_slave.txt", "r")) == (FILE *)NULL) {
 perror("open  failed");
 (void) exit(1);
 }
 n = fread(buf, 1, 60, fd);
  
 if(n == 0) {
 perror("read fails!");
 exit(1);
 }
  
 buf[n] = '\0';
  for(i=0;i<n;i++){
    if (buf[i]='\0'){
    
    j=i-1;
    
    }  
    
  }
  for(i=0;i<5;i++){
  temp[i] = j-i;
  
  
  }
  temperature = ((double)atoi(temp))/1000;
 
  
  while((double)time(NULL)-t1>=1&&fabs(temperature-ct>1))){
 ct = temperature;
    if(lt ==-100){lt = ct;}
    if(ht == -100){ht = ct;}
    if(ct > ht){ht = ct;}
    if(ct <lt){lt = ct;}
    
 /*fprintf(stdout, "Read '%s'\n", buf);
   */ 
   
    
 ifttt("https://maker.ifttt.com/trigger/temperature_change/with/key/doiyELHkyIVDVYX5-BEg1Y", higher, lower, current);   

    
   t1 = (double)time(NULL); 
    break;
  }
    ct = temperature;
   (void) fclose(fd);}
 return 0;

}
