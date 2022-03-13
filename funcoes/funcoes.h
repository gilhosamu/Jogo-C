#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#define AB ALLEGRO_BITMAP

void NPC(int *mapa_atual, int *count, int load_pos, AB *V1, AB *V2, AB *V3, AB *V4, AB *V5, AB *V6, AB *V7, AB *V8, AB *V9, AB *V10, AB *V11, AB *V12, AB *V13, AB *V14, AB *V15, AB *V16, AB *V17, AB *V18, AB *V19);
void NPCin(int *mapa_atual, int *count, int *pos_x, int *pos_y, int load_pos, AB *IN1);
void Troca_mapa(int *mapa_atual, int *pos_x, int *pos_y, int *load_pos);
void Desenha_fundo(int *mapa_atual, AB *fundo, AB *fundo_dun);
void Desenha_fundo_colisao(int *mapa_atual, AB *colisao_1, AB *colisao_2);
void movimenta_personagem(int key_up, int key_down, int key_right, int key_left, int *count, int *x, int *y);
void Desenha_personagem(int *pos_x, int *pos_y, AB *prota);
void Desenha_ov(int *mapa_atual, AB *over);
void escreve_texto(int *mapa_atual, ALLEGRO_FONT *fonte, int *px, int *py, int *T_pressionado, int *enter_pressionado);