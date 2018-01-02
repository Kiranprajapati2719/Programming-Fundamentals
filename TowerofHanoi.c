//Tower of Hanoi

#include<stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
  if(n ==1){
    printf("Move disk 1 from %c rod to %c rod, from_rod, aux_rod");
  }
  towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
  printf("Move %d disk from %c rod to %c rod", n, from_rod, to_rod);
  towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

void main(){
  int n = 4; //no. of disks
  towerOfHanoi(n, 'A', 'C', 'B');
}
