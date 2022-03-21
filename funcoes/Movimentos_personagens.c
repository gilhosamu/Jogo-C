#define velocidade_carinha 1
#include "funcoes.h"
int posicao = 4;

void movimenta_personagem(int key_up, int key_down, int key_right, int key_left, int *count, int *x, int *y)
{
    if (key_down == 1)
    {
        *y += velocidade_carinha;
        if (*count >= 0 && *count < 9)
        {
            posicao = 0;
        }
        if (*count >= 9 && *count < 18)
        {
            posicao = 1;
        }
        if (*count >= 18 && *count < 27)
        {
            posicao = 2;
        }
    }
    if (key_up == 1)
    {
        *y -= velocidade_carinha;
        if (*count >= 0 && *count < 9)
        {
            posicao = 3;
        }
        if (*count >= 9 && *count < 18)
        {
            posicao = 4;
        }
        if (*count >= 18 && *count < 27)
        {
            posicao = 5;
        }
    }
    if (key_left == 1)
    {
        *x -= velocidade_carinha;
        if (*count >= 0 && *count < 9)
        {
            posicao = 6;
        }
        if (*count >= 9 && *count < 18)
        {
            posicao = 7;
        }
        if (*count >= 18 && *count < 27)
        {
            posicao = 8;
        }
    }
    if (key_right == 1)
    {
        *x += velocidade_carinha;
        if (*count >= 0 && *count < 9)
        {
            posicao = 9;
        }
        if (*count >= 9 && *count < 18)
        {
            posicao = 10;
        }
        if (*count >= 18 && *count < 27)
        {
            posicao = 11;
        }
    }
}

void Desenha_personagem(int *pos_x, int *pos_y, ALLEGRO_BITMAP *prota, int *ataque)
{
    switch (posicao)
    {
    case 0:
        al_draw_bitmap_region(prota, 0, 0, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 1:
        al_draw_bitmap_region(prota, 32, 0, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 2:
        al_draw_bitmap_region(prota, 64, 0, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 3:
        al_draw_bitmap_region(prota, 0, 96, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 4:
        al_draw_bitmap_region(prota, 32, 96, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 5:
        al_draw_bitmap_region(prota, 64, 96, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 6:
        al_draw_bitmap_region(prota, 0, 32, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 7:
        al_draw_bitmap_region(prota, 32, 32, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 8:
        al_draw_bitmap_region(prota, 64, 32, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 9:
        al_draw_bitmap_region(prota, 0, 64, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 10:
        al_draw_bitmap_region(prota, 32, 64, 32, 32, *pos_x, *pos_y, 0);
        break;
    case 11:
        al_draw_bitmap_region(prota, 64, 64, 32, 32, *pos_x, *pos_y, 0);
        break;
    }
    if(*ataque == 1 && (posicao < 3 && posicao >= 0)){
        al_draw_line(*pos_x +8, *pos_y +25, *pos_x +8, *pos_y+40, al_map_rgb(255, 255, 255), 2);
    }
    if(*ataque == 1 && (posicao < 6 && posicao >= 3)){
        al_draw_line(*pos_x +29, *pos_y +25, *pos_x +29, *pos_y-8, al_map_rgb(255, 255, 255), 2);
    }
    if(*ataque == 1 && (posicao < 9 && posicao >= 6)){
        al_draw_line(*pos_x +8, *pos_y +25, *pos_x -20, *pos_y+25, al_map_rgb(255, 255, 255), 2);
    }
    if(*ataque == 1 && (posicao < 12 && posicao >= 9)){
        al_draw_line(*pos_x +25, *pos_y +25, *pos_x +47, *pos_y+25, al_map_rgb(255, 255, 255), 2);
    }
}