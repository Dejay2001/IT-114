#include<stdio.h>

int main(){
int age;
char fname[50];
char lname[50];

 printf("Enter First Name: ");
 scanf("%s",&fname);
 printf("Enter Last Name: ");
 scanf("%s",&lname);
 printf("Enter Age: ");
 scanf("%d",&age);


 printf("\n\n\nNAME: %s %s \n", fname, lname);
 printf("AGE: %d \n", age);
 if (age < 18){
    printf("You are NOT Eligible for Voting.");
 }
 else if (age >= 18){
   printf("You are Eligible for Voting.");
 }
 else{
    printf("Invalid Input. Please Try Again");
 }

return 0;

}
