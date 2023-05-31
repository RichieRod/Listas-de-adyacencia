#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ESTADOS 32

// Declaración de funciones
void agregar_vecino(int matriz_adyacencia[NUM_ESTADOS][NUM_ESTADOS], int estado_origen, int estado_destino);
void imprimir_grafo(int matriz_adyacencia[NUM_ESTADOS][NUM_ESTADOS], char estados[NUM_ESTADOS][50]);

int main()
{
    // Definición de los nombres de los estados
    char estados[NUM_ESTADOS][50] = {
        "Aguascalientes",
        "Baja California",
        "Baja California Sur",
        "Campeche",
        "Chiapas",
        "Chihuahua",
        "Coahuila",
        "Colima",
        "Durango",
        "Estado de México",
        "Guanajuato",
        "Guerrero",
        "Hidalgo",
        "Jalisco",
        "Michoacán",
        "Morelos",
        "Nayarit",
        "Nuevo León",
        "Oaxaca",
        "Puebla",
        "Querétaro",
        "Quintana Roo",
        "San Luis Potosí",
        "Sinaloa",
        "Sonora",
        "Tabasco",
        "Tamaulipas",
        "Tlaxcala",
        "Veracruz",
        "Yucatán",
        "Zacatecas",
        "Ciudad de México"
    };

    // Definición de la matriz de adyacencia
    int matriz_adyacencia[NUM_ESTADOS][NUM_ESTADOS] = {0};

    // Agregar los estados vecinos a cada estado
    agregar_vecino(matriz_adyacencia, 0, 1); // Aguascalientes -> Baja California
    agregar_vecino(matriz_adyacencia, 0, 7); // Aguascalientes -> Colima
    agregar_vecino(matriz_adyacencia, 0, 9); // Aguascalientes -> Estado de México
    agregar_vecino(matriz_adyacencia, 0, 10); // Aguascalientes -> Guanajuato
    agregar_vecino(matriz_adyacencia, 0, 12); // Aguascalientes -> Hidalgo
    agregar_vecino(matriz_adyacencia, 0, 14); // Aguascalientes -> Jalisco
    agregar_vecino(matriz_adyacencia, 0, 23); // Aguascalientes -> San Luis Potosí
    agregar_vecino(matriz_adyacencia, 0, 30); // Aguascalientes -> Zacatecas

    agregar_vecino(matriz_adyacencia, 1, 0); // Baja California -> Aguascalientes
    agregar_vecino(matriz_adyacencia, 1, 2); // Baja California -> Baja California Sur
    agregar_vecino(matriz_adyacencia, 1, 28); // Baja California -> Tamaulipas
    agregar_vecino(matriz_adyacencia, 1, 31); // Baja California -> Ciudad de México
    
    agregar_vecino(matriz_adyacencia, 3, 2); // Campeche -> Baja California Sur
	agregar_vecino(matriz_adyacencia, 3, 4); // Campeche -> Chiapas
	agregar_vecino(matriz_adyacencia, 3, 6); // Campeche -> Coahuila
	agregar_vecino(matriz_adyacencia, 3, 7); // Campeche -> Colima
	agregar_vecino(matriz_adyacencia, 3, 12); // Campeche -> Hidalgo
	agregar_vecino(matriz_adyacencia, 3, 13); // Campeche -> Jalisco
	agregar_vecino(matriz_adyacencia, 3, 16); // Campeche -> Morelos
	agregar_vecino(matriz_adyacencia, 3, 17); // Campeche -> Nayarit
	agregar_vecino(matriz_adyacencia, 3, 20); // Campeche -> Querétaro
	
	agregar_vecino(matriz_adyacencia, 4, 2); // Chiapas -> Baja California Sur
	agregar_vecino(matriz_adyacencia, 4, 3); // Chiapas -> Campeche
	agregar_vecino(matriz_adyacencia, 4, 5); // Chiapas -> Chihuahua
	agregar_vecino(matriz_adyacencia, 4, 7); // Chiapas -> Colima
	agregar_vecino(matriz_adyacencia, 4, 8); // Chiapas -> Durango
	agregar_vecino(matriz_adyacencia, 4, 10); // Chiapas -> Guanajuato
	agregar_vecino(matriz_adyacencia, 4, 12); // Chiapas -> Hidalgo
	agregar_vecino(matriz_adyacencia, 4, 13); // Chiapas -> Jalisco
	agregar_vecino(matriz_adyacencia, 4, 15); // Chiapas -> Michoacán
	agregar_vecino(matriz_adyacencia, 4, 16); // Chiapas -> Morelos
	agregar_vecino(matriz_adyacencia, 4, 19); // Chiapas -> Oaxaca
	
	agregar_vecino(matriz_adyacencia, 5, 4); // Chihuahua -> Chiapas
    agregar_vecino(matriz_adyacencia, 5, 6); // Chihuahua -> Coahuila
    agregar_vecino(matriz_adyacencia, 5, 8); // Chihuahua -> Durango
    agregar_vecino(matriz_adyacencia, 5, 9); // Chihuahua -> Estado de México
    agregar_vecino(matriz_adyacencia, 5, 10); // Chihuahua -> Guanajuato
    agregar_vecino(matriz_adyacencia, 5, 13); // Chihuahua -> Jalisco
    agregar_vecino(matriz_adyacencia, 5, 22); // Chihuahua -> Sinaloa
    agregar_vecino(matriz_adyacencia, 5, 23); // Chihuahua -> San Luis Potosí
    agregar_vecino(matriz_adyacencia, 5, 25); // Chihuahua -> Sonora

    agregar_vecino(matriz_adyacencia, 6, 0); // Coahuila -> Aguascalientes
    agregar_vecino(matriz_adyacencia, 6, 3); // Coahuila -> Campeche
    agregar_vecino(matriz_adyacencia, 6, 5); // Coahuila -> Chihuahua
    agregar_vecino(matriz_adyacencia, 6, 8); // Coahuila -> Durango
    agregar_vecino(matriz_adyacencia, 6, 11); // Coahuila -> Guerrero
    agregar_vecino(matriz_adyacencia, 6, 14); // Coahuila -> Jalisco
    agregar_vecino(matriz_adyacencia, 6, 18); // Coahuila -> Nuevo León
    agregar_vecino(matriz_adyacencia, 6, 20); // Coahuila -> Querétaro
    agregar_vecino(matriz_adyacencia, 6, 23); // Coahuila -> San Luis Potosí
    agregar_vecino(matriz_adyacencia, 6, 24); // Coahuila -> Sinaloa
    agregar_vecino(matriz_adyacencia, 6, 27); // Coahuila -> Tamaulipas
    agregar_vecino(matriz_adyacencia, 6, 28); // Coahuila -> Veracruz
	agregar_vecino(matriz_adyacencia, 6, 29); // Coahuila -> Yucatán
	agregar_vecino(matriz_adyacencia, 6, 30); // Coahuila -> Zacatecas

    agregar_vecino(matriz_adyacencia, 7, 0); // Colima -> Aguascalientes
    agregar_vecino(matriz_adyacencia, 7, 3); // Colima -> Campeche
    agregar_vecino(matriz_adyacencia, 7, 4); // Colima -> Chiapas
    agregar_vecino(matriz_adyacencia, 7, 5); // Colima -> Chihuahua
    agregar_vecino(matriz_adyacencia, 7, 6); // Colima -> Coahuila
    agregar_vecino(matriz_adyacencia, 7, 8); // Colima -> Durango
    agregar_vecino(matriz_adyacencia, 7, 9); // Colima -> Estado de México
    agregar_vecino(matriz_adyacencia, 7, 10); // Colima -> Guanajuato

    

    // Imprimir el grafo
    imprimir_grafo(matriz_adyacencia, estados);

    return 0;
}

void agregar_vecino(int matriz_adyacencia[NUM_ESTADOS][NUM_ESTADOS], int estado_origen, int estado_destino)
{
    matriz_adyacencia[estado_origen][estado_destino] = 1;
    matriz_adyacencia[estado_destino][estado_origen] = 1;
}

void imprimir_grafo(int matriz_adyacencia[NUM_ESTADOS][NUM_ESTADOS], char estados[NUM_ESTADOS][50])
{
	int i,j;
    printf("Grafo:\n");
    for ( i = 0; i < NUM_ESTADOS; i++) {
        printf("%s: ", estados[i]);
        for ( j = 0; j < NUM_ESTADOS; j++) {
            if (matriz_adyacencia[i][j] == 1) {
                printf("%s, ", estados[j]);
            }
        }
        printf("\n");
    }
}
