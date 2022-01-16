#include <stdio.h>

int main(){
    int choice;
    int payment;
    int change;
    
    printf("Select your order\n[1]Nachos(150)\n[2]Pepsi(50)\n[3]Mineral Water(20)\nChoice:");
    scanf("%d", &choice);
    
    switch(choice){
    case 1:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=150){
          printf("You have purchase Nachos.\n");
          change= payment - 150; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    case 2:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=50){
          printf("You have purchase Pepsi.\n");
          change= payment - 50; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    case 3:
          printf("Input Payment:");
          scanf("%d", &payment);
          if(payment>=20){
          printf("You have purchase Mineral Water.\n");
          change= payment - 20; 
          printf("Change:%d", change);
          }else{
          printf("You don't have enough Funds.");
          }break;
    default:
          printf("Invalid Input");
    }
    return 0;
}

