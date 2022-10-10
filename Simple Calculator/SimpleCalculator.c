#include <stdio.h>  //preprocessor

int main(){
   char Operator;                   //Initialization of variables
   float num1, num2, result = 0;

   printf("\nFormat : [Operator Operation Operator]\nOperations : + , - , * , / \nEnter The Expression : ");   
   scanf("%f%c%f", &num1,&Operator, &num2 );        //Input values

   switch(Operator){                    //Switchcase for Operation
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("\n Invalid Operator ");
   }
   printf("\n%.2f %c %.2f = %.2f\n",num1,Operator,num2,result); //The Output
   return 0;
}
