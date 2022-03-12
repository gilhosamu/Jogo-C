#include "funcoes.h"
int counter_chat = 0;

void escreve_texto(int *mapa_atual, ALLEGRO_FONT *fonte, int *px, int *py, int *T_pressionado, int *enter_pressionado){
    switch(*mapa_atual){
        case 0:
        al_draw_text(fonte, al_map_rgb(0,0,0),60, 480, 0, "AWSD para mover o personagem");
        al_draw_text(fonte, al_map_rgb(0,0,0),60, 501, 0, "K para ataque com espada");
        al_draw_text(fonte, al_map_rgb(0,0,0),60, 522, 0, "T para conversar com NPCs");
        if((*px < 576 && *px > 512) && (*py < 186 && *py > 144)){
            if(*T_pressionado == 1){
                al_draw_text(fonte, al_map_rgb(0,0,0),480, 116, 0, "Ola viajante!");
                if(*enter_pressionado == 1){*T_pressionado = 0; *enter_pressionado = 0;}
            }else{al_draw_text(fonte, al_map_rgb(0,0,0),480, 116, 0, "T para conversar");}
        }else{*T_pressionado = 0; *enter_pressionado = 0;}
    }
}