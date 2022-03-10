#include "funcoes.h"

struct npc{
    int vidas;
    int causa_dano;
    int x; int y;
    int morto;
    int aut; int pos; int passo;
};
struct npc v10;

void NPC(int *mapa_atual, int *count, int load_pos){
    ALLEGRO_BITMAP *V10  = al_load_bitmap("Personagens/villagers/v10.bmp");

    if(load_pos == 0){
         v10.x = 530; v10.y = 82;
    }
    printf("\n %d  %d  %d  %d", v10.x, v10.y, *count, v10.pos);

    switch(*mapa_atual){
        case 0:
        break;

        case 1:
        if(*count == 0 || *count == 9 || *count == 18){
            if(v10.aut == 0){
                v10.pos = v10.pos +1;
                if(v10.pos == 3){v10.pos = 0;}
                if(v10.y == 416){v10.aut = 1;}
                v10.y = v10.y +1;
            }
            if(v10.aut == 1){
                v10.pos = v10.pos +1;
                if(v10.pos == 3){v10.pos = 0;}
                if(v10.y == 80){v10.aut = 0;}
                v10.y = v10.y -1;
            }
        }
        switch(v10.pos){
            case 0: al_draw_bitmap_region(V10, 0,96*v10.aut,32,32,v10.x,v10.y,0);
            case 1: al_draw_bitmap_region(V10, 32,96*v10.aut,32,32,v10.x,v10.y,0);
            case 2: al_draw_bitmap_region(V10, 64,96*v10.aut,32,32,v10.x,v10.y,0);
        }
        break;

        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
        break;
        case 11:
        break;

    }
    
}