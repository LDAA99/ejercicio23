#include <iostream>
#include <stdio.h>     
#include <math.h> 

# define pi           3.14159265358979323846  /* pi */

using std::cout;
using std::cin;
using std::endl;

void valoresx(double N, double u);
void llenaruv(double uv, double k, double ux);
void avanza(double k, double uv, double un);


//se definen todos los valores para x
void valoresx(double N, double u){
	int i; 
	
	for(i=0; i<N; i++){	
		u[i]=sin[2*pi*i]; 
}
}

//se ponen valores a uv para cuando j=0
void llenaruv(double uv, double k, double ux){
	int i;
	for(i=0; i<N-1; i++){
		uv[i]=(1.0/2.0)*k*(ux[i+1]-2*ux[i]+ux[i-1])+2*ux[i];
}}

//j es diferente de cero y va a cambiar de forma
void avanza(double k, double uv, double un){
	int i;
	for(i=1; i<N-1; i++){
		un[i]=k*(uv[i+1]-2*uv[i]+uv[i-1])+2*uv[i]-uv[i-1];
		uv[i]=un[i];
}


 

int main(){
	
	double c=0.1, dt=0.001, dx=0.01; 
	double k=(c*dt/dx)*(c*dt/dx);
	double xmax=1.0, xmin=0.0; 
	double N=(xmax-xmin)/(dx+1)
	double *un, *uv, *ux;


	new double un[N];
	new double uv[N];
	new double ux[N];

	valoresx(N, ux);
	llenaruv(uv, k, ux);
	
	//necesito saber cual es el argumento maximo para saber cuando este se vuelve -1 y detener la iteracion 
	

}





