#ifndef SALADEREUNION_EJERCICIOS_H
#define SALADEREUNION_EJERCICIOS_H

#include <iostream>
#include <vector>
#include <math.h>
#include <tuple>
#include "definiciones.h"

using namespace std;

bool grabacionValida(audio s, int prof, int freq);
bool enRango(audio s, int prof);
bool micFunciona(audio s, int freq);
audio subseq(audio s, int i, int j);
bool sonTodosCeros(audio a);

//auxiliares para silencios

bool noSuperaUmbral (audio s, int i,int j,int umbral);
bool noHaySilencioMayor(audio s, int i, int j, int umbral);
bool esSilencio (audio s,intervalo inter,int i,int j,int umbral);
bool conPrecision(tiempo t, int p);



int elAcaparador(sala m, int freq, int prof);

sala ardillizar(sala m, int prof, int freq);

sala flashElPerezoso(sala m, int prof, int freq);

lista_intervalos silencios(audio s, int prof, int freq, int umbral);

bool hayQuilombo(sala m, int prof, int freq, int umbral);

locutor medirLaDistancia(sala m, audio frase, int freq, int prof);

int encontrarAparicion(audio x, audio y);

#endif //SALADEREUNION_EJERCICIOS_H
