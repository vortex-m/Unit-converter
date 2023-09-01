#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputUSDtoINR; // User inputted for USD to INR;
  int userinputINRtoDihram; // User inputted for INR to Dihram;
  int userinputINRtoNPR; // User inputted for INR to NPR;
  int userinputkg; // User inputted for kg;
  int userinputGram; // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoINR ; // varaible that stores the converted USD->INR;
  float INRtoDihram; // stores the converted USD->Dihram;
  float INRtoNPR; // stores the converted INR->Nepali rup.;
  float kgToPounds; // stores the converted kg->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to INR. \n");
      printf("Enter 2 for INR to Dihram. \n");
      printf("Enter 3 for INR to NPR. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoINR);
          USDtoINR = userinputUSDtoINR * 82.67;
          printf("INR: %.2f",USDtoINR); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoDihram);
          INRtoDihram = userinputINRtoDihram * 22.7;
          printf("Dihram: %.2f",INRtoDihram);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoNPR);
        INRtoNPR = userinputINRtoNPR * 0.62;
        printf("NPR: %.2f",INRtoNPR);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for kg to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the kg amount: \n");
          scanf("%d",&userinputkg);
          kgToPounds = userinputkg * 0.4535;
          printf("Pounds: %.2f",kgToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 453.2;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}