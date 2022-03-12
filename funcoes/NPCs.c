#include "funcoes.h"
#define AB ALLEGRO_BITMAP

struct npc{
    int vidas;
    int causa_dano;
    int x; int y;
    int morto;
    int aut; int pos; float passo;
};
struct npc v1; struct npc v10;

void NPC(int *mapa_atual, int *count, int load_pos, AB *V1,AB *V2,AB *V3,AB *V4,AB *V5,AB *V6,AB *V7,AB *V8,AB *V9,AB *V10){

    if(load_pos == 0){
        v1.x = 560; v1.y = 48; v1.aut =0;
        v10.x = 530; v10.y = 82; v10.aut =0;
    }
//    printf("\n %d  %d  %d  %d", v10.x, v10.y, *count, v10.pos);

    switch(*mapa_atual){
        case 0:
        al_draw_bitmap_region(V3, 32,0,32,32,544,144,0);
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
        if(v10.pos== 0){al_draw_bitmap_region(V10, 0,96*v10.aut,32,32,v10.x,v10.y,0);}
        if(v10.pos== 1){al_draw_bitmap_region(V10, 32,96*v10.aut,32,32,v10.x,v10.y,0);}
        if(v10.pos== 2){al_draw_bitmap_region(V10, 64,96*v10.aut,32,32,v10.x,v10.y,0);}
        break;

        case 2:
        if(*count == 0 || *count == 9 || *count == 18){
            if(v1.aut == 0){
                v1.pos = v1.pos +1;
                if(v1.pos == 3){v1.pos = 0;}
                if(v1.x == 730){v1.aut = 1;}
                v1.x = v1.x +1;
            }
            if(v1.aut == 1){
                v1.pos = v1.pos +1;
                if(v1.pos == 3){v1.pos = 0;}
                if(v1.y == 530){v1.aut = 0;}
                v1.x = v1.x -1;
            }
        }
        if(v1.pos == 0 && v1.aut == 1){al_draw_bitmap_region(V1, 0,32,32,32,v1.x,v1.y,0);}
        if(v1.pos == 1 && v1.aut == 1){al_draw_bitmap_region(V1, 32,32,32,32,v1.x,v1.y,0);}
        if(v1.pos == 2 && v1.aut == 1){al_draw_bitmap_region(V1, 64,32,32,32,v1.x,v1.y,0);}
        if(v1.pos == 0 && v1.aut == 0){al_draw_bitmap_region(V1, 0,64,32,32,v1.x,v1.y,0);}
        if(v1.pos == 1 && v1.aut == 0){al_draw_bitmap_region(V1, 32,64,32,32,v1.x,v1.y,0);}
        if(v1.pos == 2 && v1.aut == 0){al_draw_bitmap_region(V1, 64,64,32,32,v1.x,v1.y,0);}
        al_draw_bitmap_region(V4, 32,96,32,32,500,370,0);
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        al_draw_bitmap_region(V9, 32,64,32,32,160,280,0);
        al_draw_bitmap_region(V5, 32,32,32,32,192,280,0);
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