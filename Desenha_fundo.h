#ifndef DESENHA_FUNDO_INCLUDED
#define DESENHA_FUNDO_INCLUDED

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>

void Desenha_fundo_colisao(int *mapa_atual, ALLEGRO_BITMAP *colisao_1, ALLEGRO_BITMAP *colisao_2){
    switch(*mapa_atual){
        case 0: al_draw_scaled_bitmap(colisao_1, 0,1280,800,608,0,0,800,600, 0); break;
        case 1: al_draw_scaled_bitmap(colisao_1, 832,1280,800,608,0,0,800,600, 0); break;
        case 2: al_draw_scaled_bitmap(colisao_1, 0,640,800,608,0,0,800,600, 0); break;
        case 3: al_draw_scaled_bitmap(colisao_1, 832,640,800,608,0,0,800,600, 0); break;
        case 4: al_draw_scaled_bitmap(colisao_1, 1664,640,800,608,0,0,800,600, 0); break;
        case 5: al_draw_scaled_bitmap(colisao_1, 0,0,800,608,0,0,800,600, 0); break;
        case 6: al_draw_scaled_bitmap(colisao_1, 832,0,800,608,0,0,800,600, 0); break;
        case 7: al_draw_scaled_bitmap(colisao_1, 1664,0,800,608,0,0,800,600, 0); break;
        case 8: al_draw_scaled_bitmap(colisao_2, 0,640,800,608,0,0,800,600, 0); break;
        case 9: al_draw_scaled_bitmap(colisao_2, 832,640,800,608,0,0,800,600, 0); break;
        case 10: al_draw_scaled_bitmap(colisao_2, 0,0,800,608,0,0,800,600, 0); break;
        case 11: al_draw_scaled_bitmap(colisao_2, 832,0,800,608,0,0,800,600, 0); break;
    }
}


void Desenha_fundo(int *mapa_atual, ALLEGRO_BITMAP *fundo, ALLEGRO_BITMAP * fundo_dun ){
    
    switch(*mapa_atual){
        case 0: al_draw_scaled_bitmap(fundo, 0,1280,800,608,0,0,800,600, 0); break;
        case 1: al_draw_scaled_bitmap(fundo, 832,1280,800,608,0,0,800,600, 0); break;
        case 2: al_draw_scaled_bitmap(fundo, 0,640,800,608,0,0,800,600, 0); break;
        case 3: al_draw_scaled_bitmap(fundo, 832,640,800,608,0,0,800,600, 0); break;
        case 4: al_draw_scaled_bitmap(fundo, 1664,640,800,608,0,0,800,600, 0); break;
        case 5: al_draw_scaled_bitmap(fundo, 0,0,800,608,0,0,800,600, 0); break;
        case 6: al_draw_scaled_bitmap(fundo, 832,0,800,608,0,0,800,600, 0); break;
        case 7: al_draw_scaled_bitmap(fundo, 1664,0,800,608,0,0,800,600, 0); break;
        case 8: al_draw_scaled_bitmap(fundo_dun, 0,640,800,608,0,0,800,600, 0); break;
        case 9: al_draw_scaled_bitmap(fundo_dun, 832,640,800,608,0,0,800,600, 0); break;
        case 10: al_draw_scaled_bitmap(fundo_dun, 0,0,800,608,0,0,800,600, 0); break;
        case 11: al_draw_scaled_bitmap(fundo_dun, 832,0,800,608,0,0,800,600, 0); break;
    }
}

#endif