#include<18F4620.h>
#include<stdio.h>
#include<stdlib.h>
#use delay(clock = 16000000)
#fuses XT, NOMCLR
int contador=128;
int contador2=128;
int contador3=1;
int opcion=0,opcion1=0,opcion2=0,opcion3=0;
int port=port_a0,port1=port_a1,port2=port_a2,port3=port_a3,port4=port_a4,port5=port_a5;
void main(){
set_tris_a(0x3F);
set_tris_b(0x00);
set_tris_c(0x00);
set_tris_d(0x00);
while (1){

  if(port==1 && port2==1){
   opcion=1;
  }
  if(port1==1 && port4==1){
   opcion1=1;
  }
  if(port2==1 && port5==1){
   opcion2=1;
  }
  if(opcion==1 && opcion1==1 && opcion2==1){
    opcion3=1;
  }
  
 }
}

