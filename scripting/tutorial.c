#include <stdio.h>

int cek_prime(int angka){
 int i;
 for (i = 2; i < angka; i++){
  if(angka % i == 0){
    return 0;
  }
 }
 return 1;
}


