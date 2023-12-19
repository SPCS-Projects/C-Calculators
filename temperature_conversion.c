#include <stdio.h>

float toCelcius(float fahrenheit){
  float celcius = (5.0/9.0)*(fahrenheit-32);
  return celcius;
}

float toFahrenheit(float celsius){
  float fahrenheit = (9.0/5.0)*(celsius)+32;
  return fahrenheit;
}

int main() {
  int i;
  printf("°C\t|\t°F\n");
  printf("----------------------\n");
  for(i=0; i<101; i++){
    printf("%d\t|\t",i);
    printf("%.2f\n",toFahrenheit(i));
  }
  printf("\n\n\n");

  printf("°F\t|\t°C\n");
  printf("----------------------\n");
  for(i=32; i<213; i++){
    printf("%d\t|\t",i);
    printf("%.2f\n",toCelcius(i));
  }
  return 0;
}