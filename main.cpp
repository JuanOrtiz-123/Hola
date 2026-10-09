#include <iostream>
#include <math.h>
int main(int argc, char** argv){
	float l,p,a;
	printf("%s","Ingrese el lado: ");
	scanf("%f",&l);
	p=l*3;
	a=(sqrt(3)/4)*(l*l);
	printf("El perimetro es: %f\n",p);
	printf("El area es: %f\n",a);
	return 0;
}
