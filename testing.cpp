#include <iostream>
#include <math.h>
#include <stdlib.h>

int circulo(){
	int radio, per, ar;
	
	std::cout<<"Ingrese Radio: ";
	std::cin>>radio;
	
	per = 2*3,14*radio;
	ar = 3,14*(radio^2);
	
	std::cout<<"Valor Perimetro: "<<per;
	std::cout<<"Valor Area: "<<ar;	
}

int cuadrado(){
	int lado, per, ar;
	
	std::cout<<"Ingrese valor lado: ";
	std::cin>>lado;
	
	per = lado*4;
	ar = lado^2;
	
	std::cout<<"Valor Perimetro: "<<per;
	std::cout<<"Valor Area: "<<ar;	
}

int rectangulo(){
	int ancho, alto, per, ar;
	
	std::cout<<"Ingrese Alto: ";
	std::cin>>alto;
	std::cout<<"Ingrese Ancho: ";
	std::cin>>ancho;
	
	per = (alto*2)+(ancho*2);
	ar = alto*ancho;
	
	std::cout<<"Valor Perimetro: "<<per;
	std::cout<<"Valor Area: "<<ar;
}

int triangulo(){
	int opc;
	
	std::cout<<"Tipo de triangulo";
	std::cout<<"1.- Equilatero";
	std::cout<<"2.- Isosceles";
	std::cout<<"3.- Escaleno";
	std::cout<<"4.- Rectangulo";
	std::cin>>opc;
	
	switch(opc){
		
		case 1:
			int li, pe, ae;
			
			std::cout<<"Ingrese valor lado: ";
			std::cin>>li;
			
			pe = li*3;
			ae= (sqrt(3)/4) * (li^2);
			
			std::cout<<"Valor Perimetro: "<<pe;
			std::cout<<"Valor Area: "<<ae;
			
		case 2:
			int l1, l2, pi, ai;
			
			std::cout<<"Ingrese valor de lados iguales: ";
			std::cin>>l1;
			std::cout<<"Ingrese valor de lado distino: ";
			std::cin>>l2;
			
			pi = (l1*2)+l2;
			ai= (l2*(sqrt((l1^2)-((l2^2)/4))))/2;
			
			std::cout<<"Valor Perimetro: "<<pi;
			std::cout<<"Valor Area: "<<ai;
			
		case 3:
			int le1, le2, le3, pes, aes, semip;
			
			std::cout<<"Ingrese valor de lado 1: ";
			std::cin>>le1;
			std::cout<<"Ingrese valor de lado 2: ";
			std::cin>>le2;
			std::cout<<"Ingrese valor de lado 3: ";
			std::cin>>le3;
			
			pes = le1+le2+le3;
			semip = pes/2;
			aes = sqrt(semip*(semip-le1)*(semip-le2)*(semip-le3));
			
			std::cout<<"Valor Perimetro: "<<pes;
			std::cout<<"Valor Area: "<<aes;
			
		case 4:
			int cat1, cat2, hip, pr, ar;
			
			std::cout<<"Ingrese valor de cateto 1: ";
			std::cin>>cat1;
			std::cout<<"Ingrese valor de cateto 2: ";
			std::cin>>cat2;
			
			hip = sqrt((cat1^2)+(cat2^2));
			pr = cat1+cat2+hip;
			ar = (cat1*cat2)/2;
			
			std::cout<<"Valor Perimetro: "<<pr;
			std::cout<<"Valor Area: "<<ar;			
	}	
}

int main(){
	int op;
	
	std::cout<<"Elegir figura\n";
	std::cout<<"1.- Circulo\n";
	std::cout<<"2.- Cuadrado\n";
	std::cout<<"3.- Rectangulo\n";
	std::cout<<"4.- Triangulo\n";
	std::cout<<"Opcion: ";
	std::cin>>op;
	
	switch (op){
		case 1:
			circulo();
			break;
		case 2:
			cuadrado();
			break;
		case 3:
			rectangulo();
			break;
		case 4:
			triangulo();
			break;
	}
}
