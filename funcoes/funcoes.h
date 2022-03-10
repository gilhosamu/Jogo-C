#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>

//void NPC();
void Troca_mapa(int *mapa_atual, int *pos_x, int  *pos_y);
void Desenha_fundo(int *mapa_atual, ALLEGRO_BITMAP *fundo, ALLEGRO_BITMAP * fundo_dun );
void Desenha_fundo_colisao(int *mapa_atual, ALLEGRO_BITMAP *colisao_1, ALLEGRO_BITMAP *colisao_2);
void movimenta_personagem(int key_up, int key_down, int key_right, int key_left, int *count, int *x, int *y);
void Desenha_personagem(int *pos_x, int *pos_y, ALLEGRO_BITMAP *prota);
void Desenha_ov(int *mapa_atual, ALLEGRO_BITMAP *over);