#include <stdio.h>
#include <math.h>
#define QTD 3


typedef struct{
    int x;
    int y;
}Pontos;

float distancia (Pontos p1, Pontos p2){
    return (sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2)));
}

int main()
{
   Pontos p[QTD];
   float perimetro = 0;
   
   p[0].x = 4; 
   p[0].y = 7; 
   p[1].x = 2; 
   p[1].y = -9; 
   p[2].x = 5; 
   p[2].y = 3; 
   
   perimetro += distancia(p[0], p[1]);
   perimetro += distancia(p[1], p[2]);
   perimetro += distancia(p[2], p[0]);
   
   printf("%f", perimetro);
   
    return 0;
}

