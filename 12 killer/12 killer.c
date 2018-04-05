#include<stdio.h>
#include<math.h>

main() {
	int a, b, soma;
	float f, x, f2;
	
	for(x = 1000; x <= 9999; x++){
		f = x / 100;
		a = f;
		b = (f - a)*100;
		soma = b + a;
		pow(soma,2) == x ? printf("%.0f\n",x) : x ;
	}		
	
	
}
