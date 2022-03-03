#ifndef DESENHA_FUNDO_INCLUDED
#define MDESENHA_FUNDO_INCLUDED

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>


void Desenha_fundo(int *mapa_atual){

    ALLEGRO_BITMAP *fundo  = al_load_bitmap("Mapas/vila.bmp");

    
    switch(*mapa_atual){
        case 0: al_draw_scaled_bitmap(fundo, 0,0,800,608,0,0,800,600, 0); break;
    }
}

#endif