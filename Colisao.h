#ifndef COLISAO_INCLUDED
#define COLISAO_INCLUDED

#define BTN(valor, min, max) (valor <= max && valor >= min)


void Colisao(int *mapa_atual, int *pos_x, int  *pos_y){
    switch(*mapa_atual){
        case 0:
        if(*pos_x == 795){*mapa_atual = 1; *pos_x = 6;}
        if(*pos_y == 5){*mapa_atual = 2; *pos_y = 594;}

        if(BTN(*pos_x, 575, 722) && *pos_y == 158){
            *pos_y = *pos_y +1;
        }

        break;

        case 1:
        if(*pos_x == 5){*mapa_atual = 0; *pos_x = 794;}
        else if(*pos_y == 5){*mapa_atual = 3; *pos_y = 594;}
        break;

        case 2: 
        if(*pos_x == 795){*mapa_atual = 3; *pos_x = 6;}
        if(*pos_y == 5){*mapa_atual = 5; *pos_y = 594;}
        if(*pos_y == 595){*mapa_atual = 0; *pos_y = 6;}
        break;

        case 3:
        if(*pos_x == 5){*mapa_atual = 2; *pos_x = 794;}
        if(*pos_x == 795){*mapa_atual = 4; *pos_x = 6;}
        if(*pos_y == 5){*mapa_atual = 6; *pos_y = 594;}
        if(*pos_y == 595){*mapa_atual = 1; *pos_y = 6;}
        break;

        case 4:
        if(*pos_x == 5){*mapa_atual = 3; *pos_x = 794;}
        break;

        case 5:
        if(*pos_x == 795){*mapa_atual = 6; *pos_x = 6;}
        if(*pos_y == 595){*mapa_atual = 3; *pos_y = 6;}
        break;

        case 6: 
        if(*pos_x == 5){*mapa_atual = 5; *pos_x = 794;}
        if(*pos_x == 795){*mapa_atual = 7; *pos_x = 6;}
        if(*pos_y == 595){*mapa_atual = 3; *pos_y = 6;}
        break;

        case 7:
        if(*pos_x == 5){*mapa_atual = 6; *pos_x = 794;}
        break;
    }
}

#endif