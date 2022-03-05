#ifndef DESENHA_OV_INCLUDED
#define DESENHA_OV_INCLUDED

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>


void Desenha_ov(int *mapa_atual, ALLEGRO_BITMAP *over){
    
    switch(*mapa_atual){
        case 0: al_draw_scaled_bitmap(over, 0,1280,800,608,0,0,800,600, 0); break;
        case 1: al_draw_scaled_bitmap(over, 832,1280,800,608,0,0,800,600, 0); break;
        case 2: al_draw_scaled_bitmap(over, 0,640,800,608,0,0,800,600, 0); break;
        case 3: al_draw_scaled_bitmap(over, 832,640,800,608,0,0,800,600, 0); break;
        case 4: al_draw_scaled_bitmap(over, 1664,640,800,608,0,0,800,600, 0); break;
        case 5: al_draw_scaled_bitmap(over, 0,0,800,608,0,0,800,600, 0); break;
        case 6: al_draw_scaled_bitmap(over, 832,0,800,608,0,0,800,600, 0); break;
        case 7: al_draw_scaled_bitmap(over, 1664,0,800,608,0,0,800,600, 0); break;
    }
}

#endif