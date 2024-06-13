#include<stdio.h>

double calpie(int rep,int sign,float pie);   //Function Decleration

int main(void) {
  int rep,sign=1;              /*Declare the number of term and initiliaze the sign with the data type of int*/
  double pie = 3.0;           /*Initialize pie with the value of 3.0 and with the data type of Double*/

  printf("Enter the Number of terms to use in the series : ");
  scanf("%d",&rep);       /*Ask the user to input the (NUmbers of terms) to use in the series and store it in the varaible of rep*/

if(rep<0)                    //if the user enter numbers of terms negative then its gives the error
{
  printf("The Numbers of term can't be Negative\n");
  
    return 1; 
  
  }
  double pie_answer;          //Declare the pie_answer varaible with the datatype of double
  
  pie_answer = calpie(rep,sign,pie);    
  printf("The approximate value of pie after %d iterations is %lf\n",rep,pie_answer);
/* The final value of pie after entering numbers of term       */
    return 0;
}
// Function to Calculate the series of the pie 
double calpie(int rep,int sign,float pie)
{
  int i;
    for (i = 0;i<2*rep; i+=2) {
        pie = pie+sign*(4.0 / ((2.0 + i) * (3.0 + i) * (4.0 + i)));
      sign=sign*(-1);
   }
      return pie;

}
