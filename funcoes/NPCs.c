#include "funcoes.h"
#define AB ALLEGRO_BITMAP
#define MODULO(x) ((x) >= 0 ? (x) : -(x))

struct npc
{
    int vidas;
    int causa_dano;
    int x;
    int y;
    int morto;
    int aut;
    int pos;
    int des_x;
    int des_y;
    int count_npc;
};
struct npc v1;
struct npc v10;
struct npc v13;
struct npc inimigo1;

void NPC(int *mapa_atual, int *count, int load_pos, AB *V1, AB *V2, AB *V3, AB *V4, AB *V5, AB *V6, AB *V7, AB *V8, AB *V9, AB *V10, AB *V11, AB *V12, AB *V13, AB *V14, AB *V15, AB *V16, AB *V17, AB *V18, AB *V19)
{ // NPCs da vila

    if (load_pos == 0)
    {
        v1.x = 560;
        v1.y = 48;
        v1.aut = 0;
        v10.x = 530;
        v10.y = 82;
        v10.aut = 0;
        v13.x = 320;
        v13.y = 50;
        v13.aut = 0;
    }
    switch (*mapa_atual)
    {
    case 0:
        al_draw_bitmap_region(V3, 32, 0, 32, 32, 544, 144, 0);
        break;

    case 1:
        if (*count == 0 || *count == 9 || *count == 18)
        {
            if (v10.aut == 0)
            {
                v10.pos = v10.pos + 1;
                if (v10.pos == 3)
                {
                    v10.pos = 0;
                }
                if (v10.y == 416)
                {
                    v10.aut = 1;
                }
                v10.y = v10.y + 1;
            }
            if (v10.aut == 1)
            {
                v10.pos = v10.pos + 1;
                if (v10.pos == 3)
                {
                    v10.pos = 0;
                }
                if (v10.y == 80)
                {
                    v10.aut = 0;
                }
                v10.y = v10.y - 1;
            }
        }
        if (v10.pos == 0)
        {
            al_draw_bitmap_region(V10, 0, 96 * v10.aut, 32, 32, v10.x, v10.y, 0);
        }
        if (v10.pos == 1)
        {
            al_draw_bitmap_region(V10, 32, 96 * v10.aut, 32, 32, v10.x, v10.y, 0);
        }
        if (v10.pos == 2)
        {
            al_draw_bitmap_region(V10, 64, 96 * v10.aut, 32, 32, v10.x, v10.y, 0);
        }
        break;

    case 2:
        if (*count == 0 || *count == 9 || *count == 18)
        {
            if (v1.aut == 0)
            {
                v1.pos = v1.pos + 1;
                if (v1.pos == 3)
                {
                    v1.pos = 0;
                }
                if (v1.x == 730)
                {
                    v1.aut = 1;
                }
                v1.x = v1.x + 1;
            }
            if (v1.aut == 1)
            {
                v1.pos = v1.pos + 1;
                if (v1.pos == 3)
                {
                    v1.pos = 0;
                }
                if (v1.y == 530)
                {
                    v1.aut = 0;
                }
                v1.x = v1.x - 1;
            }
        }
        if (v1.pos == 0 && v1.aut == 1)
        {
            al_draw_bitmap_region(V1, 0, 32, 32, 32, v1.x, v1.y, 0);
        }
        if (v1.pos == 1 && v1.aut == 1)
        {
            al_draw_bitmap_region(V1, 32, 32, 32, 32, v1.x, v1.y, 0);
        }
        if (v1.pos == 2 && v1.aut == 1)
        {
            al_draw_bitmap_region(V1, 64, 32, 32, 32, v1.x, v1.y, 0);
        }
        if (v1.pos == 0 && v1.aut == 0)
        {
            al_draw_bitmap_region(V1, 0, 64, 32, 32, v1.x, v1.y, 0);
        }
        if (v1.pos == 1 && v1.aut == 0)
        {
            al_draw_bitmap_region(V1, 32, 64, 32, 32, v1.x, v1.y, 0);
        }
        if (v1.pos == 2 && v1.aut == 0)
        {
            al_draw_bitmap_region(V1, 64, 64, 32, 32, v1.x, v1.y, 0);
        }
        al_draw_bitmap_region(V4, 32, 96, 32, 32, 500, 370, 0);
        al_draw_bitmap_region(V2, 32, 0, 32, 32, 112, 272, 0);
        break;
    case 3:
        al_draw_bitmap_region(V8, 32, 0, 32, 32, 576, 160, 0);
        break;
    case 4:
        al_draw_bitmap_region(V7, 32, 0, 32, 32, 676, 200, 0);
        break;
    case 5:
        al_draw_bitmap_region(V9, 32, 64, 32, 32, 160, 280, 0);
        al_draw_bitmap_region(V5, 32, 32, 32, 32, 192, 280, 0);
        if (*count == 0 || *count == 9 || *count == 18)
        {
            if (v13.aut == 0)
            {
                v13.pos = v13.pos + 1;
                if (v13.pos == 3)
                {
                    v13.pos = 0;
                }
                if (v13.x == 730)
                {
                    v13.aut = 1;
                }
                v13.x = v13.x + 1;
            }
            if (v13.aut == 1)
            {
                v13.pos = v13.pos + 1;
                if (v13.pos == 3)
                {
                    v13.pos = 0;
                }
                if (v13.y == 320)
                {
                    v13.aut = 0;
                }
                v13.x = v13.x - 1;
            }
        }
        if (v13.pos == 0 && v13.aut == 1)
        {
            al_draw_bitmap_region(V13, 0, 32, 32, 32, v13.x, v13.y, 0);
        }
        if (v13.pos == 1 && v13.aut == 1)
        {
            al_draw_bitmap_region(V13, 32, 32, 32, 32, v13.x, v13.y, 0);
        }
        if (v13.pos == 2 && v13.aut == 1)
        {
            al_draw_bitmap_region(V13, 64, 32, 32, 32, v13.x, v13.y, 0);
        }
        if (v13.pos == 0 && v13.aut == 0)
        {
            al_draw_bitmap_region(V13, 0, 64, 32, 32, v13.x, v13.y, 0);
        }
        if (v13.pos == 1 && v13.aut == 0)
        {
            al_draw_bitmap_region(V13, 32, 64, 32, 32, v13.x, v13.y, 0);
        }
        if (v13.pos == 2 && v13.aut == 0)
        {
            al_draw_bitmap_region(V13, 64, 64, 32, 32, v13.x, v13.y, 0);
        }
        break;
    case 6:
        al_draw_bitmap_region(V12, 32, 32, 32, 32, 356, 170, 0);
        al_draw_bitmap_region(V14, 32, 64, 32, 32, 320, 170, 0);
        break;
    case 7:
        break;
    }
}

void NPCin(int *mapa_atual, int *count, int *pos_x, int *pos_y, int load_pos, AB *IN1)
{
    if (load_pos == 0)
    {
        inimigo1.x = 544;
        inimigo1.y = 144;
        inimigo1.aut = 0;
    }
    switch (*mapa_atual)
    {
    case 8:
        al_draw_bitmap_region(IN1, inimigo1.des_x, inimigo1.des_y, 32, 32, inimigo1.x, inimigo1.y, 0);
        if (*count % 2 == 0 && (MODULO(inimigo1.x - *pos_x) < 110) && (MODULO(inimigo1.y - *pos_y) < 110))
        {
            if (inimigo1.x < *pos_x && MODULO(inimigo1.x - *pos_x) > 20)
            {
                inimigo1.des_y = 64;
                inimigo1.x = inimigo1.x + 1;
                inimigo1.des_x = inimigo1.des_x + 32;
                if (inimigo1.des_x > 64)
                {
                    inimigo1.des_x = 0;
                }
            }
            if (inimigo1.x > *pos_x && MODULO(inimigo1.x - *pos_x) > 20)
            {
                inimigo1.des_y = 32;
                inimigo1.x = inimigo1.x - 1;
                inimigo1.des_x = inimigo1.des_x + 32;
                if (inimigo1.des_x > 64)
                {
                    inimigo1.des_x = 0;
                }
            }
            if (inimigo1.y < *pos_y && MODULO(inimigo1.y - *pos_y) > 20)
            {
                inimigo1.des_y = 0;
                inimigo1.y = inimigo1.y + 1;
                inimigo1.des_x = inimigo1.des_x + 32;
                if (inimigo1.des_x > 64)
                {
                    inimigo1.des_x = 0;
                }
            }
            if (inimigo1.y > *pos_y && MODULO(inimigo1.y - *pos_y) > 20)
            {
                inimigo1.des_y = 96;
                inimigo1.y = inimigo1.y - 1;
                inimigo1.des_x = inimigo1.des_x + 32;
                if (inimigo1.des_x > 64)
                {
                    inimigo1.des_x = 0;
                }
            }
        }
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    }
}