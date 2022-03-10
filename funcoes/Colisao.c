#include "funcoes.h"

void Troca_mapa(int *mapa_atual, int *pos_x, int  *pos_y){
    switch(*mapa_atual){
        case 0:
        if(*pos_x == 766){*mapa_atual = 1; *pos_x = 0;}
        if(*pos_y == 0){*mapa_atual = 2; *pos_y = 560;}
        break;

        case 1:
        if(*pos_x == 0){*mapa_atual = 0; *pos_x = 760;}
        else if(*pos_y == 0){*mapa_atual = 3; *pos_y = 560;}
        break;

        case 2: 
        if(*pos_x == 766){*mapa_atual = 3; *pos_x = 32;}
        if(*pos_y == 0){*mapa_atual = 5; *pos_y = 560;}
        if(*pos_y == 566){*mapa_atual = 0; *pos_y = 32;}
        break;

        case 3:
        if(*pos_x == 0){*mapa_atual = 2; *pos_x = 760;}
        if(*pos_x == 766){*mapa_atual = 4; *pos_x = 32;}
        if(*pos_y == 0){*mapa_atual = 6; *pos_y = 560;}
        if(*pos_y == 566){*mapa_atual = 1; *pos_y = 32;}
        break;

        case 4:
        if(*pos_x == 0){*mapa_atual = 3; *pos_x = 760;}
        if(*pos_x == 766){*mapa_atual = 8; *pos_x = 100;}
        break;

        case 5:
        if(*pos_x == 766){*mapa_atual = 6; *pos_x = 32;}
        if(*pos_y == 566){*mapa_atual = 3; *pos_y = 32;}
        break;

        case 6: 
        if(*pos_x == 0){*mapa_atual = 5; *pos_x = 760;}
        if(*pos_x == 766){*mapa_atual = 7; *pos_x = 32;}
        if(*pos_y == 566){*mapa_atual = 3; *pos_y = 32;}
        break;

        case 7:
        if(*pos_x == 0){*mapa_atual = 6; *pos_x = 760;}
        break;
    }
}