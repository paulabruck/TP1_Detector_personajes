#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

const int anio_nacimiento;
const char sabor_preferencia;
const char DULCE = 'D';
const char AMARGO = 'A';
const char SALADO = 'S';
const int talla_zapatos;
const char color_preferido;
const char AZUL = 'A';
const char AMARILLO = 'Y';
const char VERDE = 'V';
const char NEGRO = 'N';
const char BLANCO = 'B';
const char ROSA = 'R';
const int altura;
const int VALOR_PUNTAJE_DULCE = 15;
const int VALOR_PUNTAJE_AMARGO = 20;
const int VALOR_PUNTAJE_SALADO = 5;
const int VALOR_ROSA_AMARILLO = 5;
const int VALOR_NEGRO_BLANCO = 15;
const int VALOR_AZUL_VERDE = 20;
const char JOHNNY_BRAVO = 'J';
const char CORAJE = 'C' ; 
const char BELLOTA = 'S';
const char BLUE ='A';
const char PURO_HUESO = 'H';
const char POLLITO = 'P';
const int ALTURA_JOHNNY = 180;
const int ALTURA_CORAJE = 30;
const int ALTURA_BELLOTA = 120;
const int ALTURA_BLUE = 140;
const int ALTURA_PURO_HUESO = 200;
const int ALTURA_POLLITO = 50;

bool es_anio_nacimiento_valido( int anio_nacimiento){
	return ( anio_nacimiento >= 1988 && anio_nacimiento <= 2008);
}
bool es_sabor_valido( char sabor_preferencia){
	return (sabor_preferencia == 'D' || sabor_preferencia == 'A' || sabor_preferencia == 'S');	
}
void mostrar_convencion_sabores(){
	printf("Ingresar 'D' para DULCE, 'A' para AMARGO, 'S' para SALADO\n");
}
bool es_talla_zapatos_valida(int talla_zapatos){
	return ((talla_zapatos >= 33 && talla_zapatos <= 47) || talla_zapatos == 0);
}
bool es_color_valido( char color_preferido){
	return ( color_preferido == AZUL || color_preferido == AMARILLO || color_preferido == VERDE || color_preferido == NEGRO || color_preferido == BLANCO || 
	color_preferido == ROSA );
}
void mostrar_convencion_colores(){
	printf("Ingresar 'A' para AZUL, 'Y' para AMARILLO, 'V' para VERDE, 'N' para NEGRO, 'B' para BLANCO, 'R' para ROSA  \n" );
}
bool es_altura_valida( int altura){
	return (altura >= 10 && altura <= 250);
}
void preguntar_anio_nacimiento(int* anio_nacimiento){
	printf("Bienvenido al sistema de ultra seguridad del laboratorio de\n");
    printf("-DEXTER- el cientifico------\n");
	printf("Introducir año de nacimiento:\n");
	printf("(Ingresar un año entre 1988 y 2008)\n");
	scanf("%i", anio_nacimiento);
	while(! es_anio_nacimiento_valido(*anio_nacimiento)){
		printf(" --Acceso DENEGADO X--\n");
		printf("Introducir fecha de nacimiento:\n");
		printf("(Ingresar un año entre 1988 y 2008)\n");
		scanf("%i", anio_nacimiento);
	}
		printf("%i\n", *anio_nacimiento);
		printf(" --Aceptado 1/5--\n");
}
void preguntar_sabor_preferido(char* sabor_preferencia){
	printf("Introducir sabor de preferencia:\n");
	mostrar_convencion_sabores();
	scanf(" %c", sabor_preferencia);
	while(! es_sabor_valido(*sabor_preferencia)){
		printf(" --Acceso DENEGADO X--\n");
    	printf("Introducr sabor de preferencia:\n");
    	scanf(" %c", sabor_preferencia);
	}	
		printf("%c\n", *sabor_preferencia);
		printf(" --Aceptado 2/5--\n");
}
void preguntar_talla_zapatos(int* talla_zapatos){
	printf("Introducr talla de zapatos:\n");
	printf("(Ingresar un talle entre 33 y 47 o 0 si no usa zapatos.)\n");
	scanf("%i", talla_zapatos);
	while(! es_talla_zapatos_valida(*talla_zapatos)){
		printf(" --Acceso DENEGADO X--\n");
		printf("Introducr talla de zapatos:\n");
		printf("(Ingresar un talle entre 33 y 47 o 0 si no usa zapatos.)\n");
		scanf("%i", talla_zapatos);
	}
		printf("%i\n", *talla_zapatos);
		printf(" --Aceptado 3/5--\n");

}
void preguntar_color_preferido(char* color_preferido){
	printf("Introducr color preferido:\n");
	mostrar_convencion_colores();
	scanf(" %c", color_preferido);
	while(! es_color_valido(*color_preferido)){
		printf(" --Acceso DENEGADO X--\n");
		printf("Introducr color preferido:\n");
		mostrar_convencion_colores();
		scanf(" %c", color_preferido);
	}
		printf("%c\n", *color_preferido);
		printf(" --Aceptado 4/5--\n");
}
void preguntar_altura(int* altura){
	printf("Introducr Altura:\n");
	printf(" (Ingresar una altura entre 10 y 250 ) \n");
	scanf("%i", altura);
	while(! es_altura_valida(*altura)){
		printf(" --Acceso DENEGADO X--\n");
		printf("Introducr Altura:\n");
		printf(" (Ingresar una altura entre 10 y 250 ) \n");
		scanf("%i", altura);
	}
	printf("%i\n", *altura);
	printf(" --Aceptado 5/5--\n");
}
void calcular_puntaje_anio(int* puntaje_anio,
						int anio_nacimiento){
	if(anio_nacimiento >= 1988 && anio_nacimiento <= 2008)
	(*puntaje_anio) = (anio_nacimiento % 20 +1);
	
}
void calcular_puntaje_sabor(int* puntaje_sabor,
						 int sabor_preferencia){
	if(sabor_preferencia == DULCE)
	(*puntaje_sabor) = VALOR_PUNTAJE_DULCE;
	if(sabor_preferencia == AMARGO)
	(*puntaje_sabor) = VALOR_PUNTAJE_AMARGO;
	if(sabor_preferencia == SALADO)
	(*puntaje_sabor) = VALOR_PUNTAJE_SALADO;
	
}
void calcular_punatje_color(int* puntaje_color,
						 int color_preferido){
	if(color_preferido == BLANCO || color_preferido == NEGRO)
	(*puntaje_color )= VALOR_NEGRO_BLANCO;
	if(color_preferido == VERDE || color_preferido == AZUL)
	(*puntaje_color) = VALOR_AZUL_VERDE;
	if(color_preferido == ROSA || color_preferido == AMARILLO)
	(*puntaje_color) = VALOR_ROSA_AMARILLO;
	
}
void calcular_puntaje_talla_zapatos(int* puntaje_talla_zapatos,
								 int talla_zapatos){
	if(talla_zapatos == 0)
	(*puntaje_talla_zapatos) = 1;
	if( talla_zapatos >= 33 && talla_zapatos <= 37)
	(*puntaje_talla_zapatos) = 2;
	if(talla_zapatos >= 38 && talla_zapatos <= 42)
	(*puntaje_talla_zapatos) = 3;
	if(talla_zapatos >= 43 && talla_zapatos <= 47)
	(*puntaje_talla_zapatos) = 4;
	
}
void calcular_puntaje_total(int* puntaje_total,
						 int puntaje_color,
						 int puntaje_sabor,
						 int puntaje_anio,
						 int puntaje_talla_zapatos){
	(*puntaje_total) = ((puntaje_color) + (puntaje_sabor) + (puntaje_anio)) * (puntaje_talla_zapatos);
	printf(" ---ATENCION SISTEMA DE SEGURIDAD--- \n");
	printf("Codigos activados en puerta de acceso,\n");
	printf("Individuo intentando ingresar,\n");
	printf("La maquina detecta un total de 5 pruebas superadas con un total de:\n");
	printf("%i puntos\n", *puntaje_total);
}
void definir_personajes( char* personaje_1, 
						char* personaje_2,
						int puntaje_total){
	if(puntaje_total >= 1 && puntaje_total <= 80){ 
	(*personaje_1) = JOHNNY_BRAVO;
	(*personaje_2) = CORAJE;
	}
	if(puntaje_total >= 81 && puntaje_total <= 160){ 
	(*personaje_1) = PURO_HUESO; 
	(*personaje_2) = POLLITO;
	}
	if(puntaje_total >= 161 && puntaje_total <= 240){ 
	(*personaje_1) = BLUE; 
	(*personaje_2) = BELLOTA;
	}
	
}
void definir_altura_personaje_1(int* altura_personaje_1,
					   char personaje_1){
	if ( personaje_1 == JOHNNY_BRAVO){
	(*altura_personaje_1) = ALTURA_JOHNNY;
	}
	if(personaje_1 == PURO_HUESO){
	(*altura_personaje_1)= ALTURA_PURO_HUESO;	
	}
	if(personaje_1 == BLUE){
	(*altura_personaje_1)= ALTURA_BLUE;	
	}
		
}
void definir_altura_personaje_2(int* altura_personaje_2,
					   char personaje_2){
	if(personaje_2 == CORAJE){
	(*altura_personaje_2) = ALTURA_CORAJE;
	}
	if(personaje_2 == POLLITO){
	(*altura_personaje_2) = ALTURA_POLLITO;
	}
	if(personaje_2 == BELLOTA){
	(*altura_personaje_2) = ALTURA_BELLOTA;
	}
	
}
void calcular_altura_ingresada ( int* altura_ingresada,
					int altura ){
	if(altura >= 10 && altura <= 250){
	(*altura_ingresada) = (altura);
	
	}
}
void calcular_valor_diferencia_personaje_1 (int* diferencia_personaje_1,
							   int altura_personaje_1,
							   int altura_ingresada){
	(*diferencia_personaje_1) = (altura_personaje_1 - altura_ingresada);
	
}
void calcular_valor_absoluto_personaje_1(int* valor_absoluto,
								int diferencia_personaje_1){
	int valor= diferencia_personaje_1;
	(*valor_absoluto)= abs (valor);
	
}
void calcular_valor_diferencia_personaje_2 ( int* diferencia_personaje_2,
									int altura_personaje_2,
									int altura_ingresada){
	(*diferencia_personaje_2) = (altura_personaje_2 - altura_ingresada);
	
}
void calcular_valor_absoluto_personaje_2(int* valor_absoluto_1,
								int diferencia_personaje_2){
	int valor_1= diferencia_personaje_2;
	(*valor_absoluto_1)= abs(valor_1);
	
}
void imprimir_personaje_detectado(char * personaje_detectado,
								int valor_absoluto,
								int valor_absoluto_1,
								char personaje_2,
								char personaje_1){
	if(valor_absoluto > valor_absoluto_1){
	(*personaje_detectado)= personaje_2;
	}
	if(valor_absoluto_1 > valor_absoluto){
	(*personaje_detectado)= personaje_1;
	}	
	if(valor_absoluto == valor_absoluto_1){
	(*personaje_detectado)= personaje_1;
	}
		
		if(*personaje_detectado == POLLITO){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenido - Pollito -\n");
		}
		if(*personaje_detectado == PURO_HUESO){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenido - Puro Hueso -\n");	
		}
		if(*personaje_detectado == JOHNNY_BRAVO){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenido - Johnny Bravo -\n");	
		}
		if(*personaje_detectado == CORAJE){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenido - Coraje -\n");	
		}
		if(*personaje_detectado == BELLOTA){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenida - Bellota -\n");	
		}
		if(*personaje_detectado == BLUE){
			printf("El personaje ha sido identificado\n");
			printf("Bienvenido - Blue -\n");	
		}							
}	

int main(){
	

	int anio_nacimiento;
	preguntar_anio_nacimiento(&anio_nacimiento);

	char sabor_preferencia;
	preguntar_sabor_preferido(&sabor_preferencia);

	int talla_zapatos;
	preguntar_talla_zapatos(&talla_zapatos);

	char color_preferido;
	preguntar_color_preferido(&color_preferido);

	int altura;
	preguntar_altura(& altura);

	int puntaje_anio;
	calcular_puntaje_anio(&puntaje_anio, anio_nacimiento);

	int puntaje_sabor;
	calcular_puntaje_sabor(&puntaje_sabor, sabor_preferencia);

	int puntaje_color;
	calcular_punatje_color(&puntaje_color, color_preferido);

	int puntaje_talla_zapatos;
	calcular_puntaje_talla_zapatos(&puntaje_talla_zapatos, talla_zapatos);

	int puntaje_total;	
	calcular_puntaje_total(&puntaje_total, puntaje_color, puntaje_sabor, puntaje_anio, puntaje_talla_zapatos);	

	char personaje_1;
	char personaje_2;
	definir_personajes(&personaje_1, &personaje_2, puntaje_total);

	int altura_personaje_1;
	definir_altura_personaje_1(&altura_personaje_1, personaje_1);

	int altura_personaje_2;
	definir_altura_personaje_2(&altura_personaje_2, personaje_2);

	int altura_ingresada;
	calcular_altura_ingresada(&altura_ingresada, altura);

	int diferencia_personaje_1;
	calcular_valor_diferencia_personaje_1(&diferencia_personaje_1, altura_personaje_1, altura_ingresada);

	int valor_absoluto;
	calcular_valor_absoluto_personaje_1(&valor_absoluto, diferencia_personaje_1);
	
	int diferencia_personaje_2;
	calcular_valor_diferencia_personaje_2(&diferencia_personaje_2, altura_personaje_2, altura_ingresada);

	int valor_absoluto_1;
	calcular_valor_absoluto_personaje_2(&valor_absoluto_1, diferencia_personaje_2);
	
	char personaje_detectado;
	imprimir_personaje_detectado(&personaje_detectado, valor_absoluto, valor_absoluto_1, personaje_2, personaje_1);
		
	return 0;
}