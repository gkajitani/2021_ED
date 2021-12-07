#include <stdio.h>
#include <math.h>
#define LIM 500

int main () {

printf ("\n# ./stat\n\n");

double a,media,x1,x2,dp,mediana;
double soma,max,soma2 = 0;
double min = LIM;
int c,num,t1,t2,m;
double notas [LIM];
double teste;

printf ("Quantos números na sua série (n): \n");

scanf ("%d",&num);



printf ("Entre com numeros: \n");

for (c=0; c<num; c=c+1) {

scanf ("%lf",&a);

soma = soma + a;
notas [c] = a;

	if (a>max) {
		max = a;}
		else {
		max = max;
		}
	if (a<min) {
		min = a;
		}
		else {
		min = min;
	}
}
	
media = soma/num;

for (c=0;c<num;c=c+1) {
x1 = (notas[c]-media)*(notas[c]-media);
soma2 = soma2 + x1;
}

x2 = soma2/num;
dp = sqrt(x2);

for (c=0;c<num;c=c+1) {

	for (t1=c+1;t1<num;t1=t1+1){

		if (notas[c] > notas [t1]) {
			t2=notas[c];
			notas[c]=notas[t1];
			notas[t1]=t2;
		}
	}
}


if (num%2==1) {
	m = (num/2)-0.5;
	mediana = notas[m+1];
}
else {
m = (num/2);
mediana = (notas[m]+notas[m-1])/2;
}



printf ("O valor minimo foi %lf .\n",min);
printf ("O valor maximo foi %lf .\n",max);
printf ("A media dos valores foi %lf .\n",media);
printf ("O desvio padrao foi %lf .\n",dp);
printf ("A mediana dos valores inseridos foi %lf .\n",mediana);

return 0;

}
