#include <iostream>
#include <cstdlib>
#include <ctime>

std namespace;

float G;
float M;
float m;
float x;
float v;
float h;

int main(){
	G = 10;
	M = 1000;
	m = 1;
	x = 100;
	v = 0;
	h = 0.001;

}
// Funciones Derivadas
float derivada_x(x,v,t){
 	return v;
}
float derivada_v(x,v,t){
	return (-G*M)/x**2
}

float rungekutta(float t_old, float v_old, float x_old){
//Primeras derivadas
	float x_prima = derivada_x(x_old, v_old, t_old);
	float v_prima = derivada_v(x_old, v_old, t_old);
//Punto Medio
	float t_medio = t_old + (h/2.0);
	float x_medio = x_old + (h/2.0) * x_prima;
	float v_medio = v_old + (h/2.0) * v_prima;
//Volvemos a derivar parte media
	float x_medio_prima = derivada_x(x_medio, v_medio, t_medio);
	float v_medio_prima = derivada_v(x_medio, v_medio, t_medio);
//remplazo de valores
	float t_nuevo = t_old + h;
	float x_nuevo = x_old + h * x_medio_prima;
	float v_nuevo = v_old + h * v_medio_prima;
	return t_nuevo, x_nuevo, v_nuevo
} 
