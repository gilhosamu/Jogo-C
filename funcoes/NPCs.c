#include "funcoes.h"
#define AB ALLEGRO_BITMAP
#define MODULO(x) ((x) >= 0 ? (x) : -(x))

struct npc
{
    int vidas;
    int x;
    int y;
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
struct npc inimigo2;
struct npc inimigo3;
struct npc inimigo4;
struct npc inimigo5;

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

void NPCin(bool *done, int *venceu, int *mapa_atual, int *count, int *pos_x, int *pos_y, int *stamina, int *ataque, ALLEGRO_SAMPLE *player_hit, ALLEGRO_SAMPLE *player_hurt, int load_pos, AB *IN1, AB *IN2, AB *IN3, AB *IN4, AB *IN5, AB *IN6, AB *IN7, AB *IN8, AB *IN9, AB *IN10, AB *IN11, AB *IN12, AB *IN13)
{
    
    switch (*mapa_atual)
    {
    case 8:
    if (load_pos == 0){
        inimigo1.x = 544; inimigo1.y = 144; inimigo1.aut = 0; inimigo1.vidas =5;
        inimigo2.x = 600; inimigo2.y = 500; inimigo2.aut = 0; inimigo2.vidas =5;
        inimigo3.x = 350; inimigo3.y = 200; inimigo3.aut = 0; inimigo3.vidas =5;
        inimigo4.x = 400; inimigo4.y = 500; inimigo4.aut = 0; inimigo4.vidas =5;
    }
        if(inimigo1.vidas > 0){al_draw_bitmap_region(IN1, inimigo1.des_x, inimigo1.des_y, 32, 32, inimigo1.x, inimigo1.y, 0);}
        if (*count % 2 == 0 && (MODULO(inimigo1.x - *pos_x) < 200) && (MODULO(inimigo1.y - *pos_y) < 200))
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
        if(inimigo2.vidas > 0){al_draw_bitmap_region(IN2, inimigo2.des_x, inimigo2.des_y, 32, 32, inimigo2.x, inimigo2.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo2.x - *pos_x) < 200) && (MODULO(inimigo2.y - *pos_y) < 200))
        {
            if (inimigo2.x < *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 64;
                inimigo2.x = inimigo2.x + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.x > *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 32;
                inimigo2.x = inimigo2.x - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y < *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 0;
                inimigo2.y = inimigo2.y + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y > *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 96;
                inimigo2.y = inimigo2.y - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
        }
        if(inimigo4.vidas > 0){al_draw_bitmap_region(IN5, inimigo4.des_x, inimigo4.des_y, 32, 32, inimigo4.x, inimigo4.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo4.x - *pos_x) < 200) && (MODULO(inimigo4.y - *pos_y) < 200))
        {
            if (inimigo4.x < *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 64;
                inimigo4.x = inimigo4.x + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.x > *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 32;
                inimigo4.x = inimigo4.x - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y < *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 0;
                inimigo4.y = inimigo4.y + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y > *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 96;
                inimigo4.y = inimigo4.y - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
        }
        if(inimigo3.vidas > 0){al_draw_bitmap_region(IN8, inimigo3.des_x, inimigo3.des_y, 32, 32, inimigo3.x, inimigo3.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo3.x - *pos_x) < 200) && (MODULO(inimigo3.y - *pos_y) < 200))
        {
            if (inimigo3.x < *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 64;
                inimigo3.x = inimigo3.x + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.x > *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 32;
                inimigo3.x = inimigo3.x - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y < *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 0;
                inimigo3.y = inimigo3.y + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y > *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 96;
                inimigo3.y = inimigo3.y - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
        }
        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *count == 2 && inimigo1.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *count == 2 && inimigo2.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *count == 2 && inimigo3.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *count == 2 && inimigo4.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}

        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *ataque == 1 && inimigo1.vidas > 0){inimigo1.vidas = inimigo1.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *ataque == 1 && inimigo2.vidas > 0){inimigo2.vidas = inimigo2.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *ataque == 1 && inimigo3.vidas > 0){inimigo3.vidas = inimigo3.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *ataque == 1 && inimigo4.vidas > 0){inimigo4.vidas = inimigo4.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        load_pos = 0;
        if(inimigo1.vidas < 1 && inimigo2.vidas < 1 && inimigo3.vidas < 1 && inimigo4.vidas < 1){*mapa_atual = *mapa_atual +1; load_pos = 0; *pos_x = 700; *pos_y = 150;
        inimigo1.x = 544; inimigo1.y = 144; inimigo1.aut = 0; inimigo1.vidas =5;
        inimigo2.x = 600; inimigo2.y = 500; inimigo2.aut = 0; inimigo2.vidas =5;
        inimigo3.x = 350; inimigo3.y = 200; inimigo3.aut = 0; inimigo3.vidas =5;
        inimigo4.x = 400; inimigo4.y = 500; inimigo4.aut = 0; inimigo4.vidas =5;
        inimigo5.x = 112; inimigo5.y = 160; inimigo5.aut = 0; inimigo5.vidas =5;
        }
        break;

    case 9:
        if(inimigo1.vidas > 0){al_draw_bitmap_region(IN6, inimigo1.des_x, inimigo1.des_y, 32, 32, inimigo1.x, inimigo1.y, 0);}
        if (*count % 2 == 0 && (MODULO(inimigo1.x - *pos_x) < 200) && (MODULO(inimigo1.y - *pos_y) < 200))
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
        if(inimigo2.vidas > 0){al_draw_bitmap_region(IN13, inimigo2.des_x, inimigo2.des_y, 32, 32, inimigo2.x, inimigo2.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo2.x - *pos_x) < 200) && (MODULO(inimigo2.y - *pos_y) < 200))
        {
            if (inimigo2.x < *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 64;
                inimigo2.x = inimigo2.x + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.x > *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 32;
                inimigo2.x = inimigo2.x - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y < *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 0;
                inimigo2.y = inimigo2.y + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y > *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 96;
                inimigo2.y = inimigo2.y - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
        }
        if(inimigo4.vidas > 0){al_draw_bitmap_region(IN9, inimigo4.des_x, inimigo4.des_y, 32, 32, inimigo4.x, inimigo4.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo4.x - *pos_x) < 200) && (MODULO(inimigo4.y - *pos_y) < 200))
        {
            if (inimigo4.x < *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 64;
                inimigo4.x = inimigo4.x + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.x > *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 32;
                inimigo4.x = inimigo4.x - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y < *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 0;
                inimigo4.y = inimigo4.y + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y > *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 96;
                inimigo4.y = inimigo4.y - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
        }
        if(inimigo3.vidas > 0){al_draw_bitmap_region(IN10, inimigo3.des_x, inimigo3.des_y, 32, 32, inimigo3.x, inimigo3.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo3.x - *pos_x) < 200) && (MODULO(inimigo3.y - *pos_y) < 200))
        {
            if (inimigo3.x < *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 64;
                inimigo3.x = inimigo3.x + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.x > *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 32;
                inimigo3.x = inimigo3.x - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y < *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 0;
                inimigo3.y = inimigo3.y + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y > *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 96;
                inimigo3.y = inimigo3.y - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
        }
        if(inimigo5.vidas > 0){al_draw_bitmap_region(IN12, inimigo5.des_x, inimigo5.des_y, 32, 32, inimigo5.x, inimigo5.y, 0);} 
        if (*count % 2 == 0 && (MODULO(inimigo5.x - *pos_x) < 200) && (MODULO(inimigo5.y - *pos_y) < 200))
        {
            if (inimigo5.x < *pos_x && MODULO(inimigo5.x - *pos_x) > 20)
            {
                inimigo5.des_y = 64;
                inimigo5.x = inimigo5.x + 1;
                inimigo5.des_x = inimigo5.des_x + 32;
                if (inimigo5.des_x > 64)
                {
                    inimigo5.des_x = 0;
                }
            }
            if (inimigo5.x > *pos_x && MODULO(inimigo5.x - *pos_x) > 20)
            {
                inimigo5.des_y = 32;
                inimigo5.x = inimigo5.x - 1;
                inimigo5.des_x = inimigo5.des_x + 32;
                if (inimigo5.des_x > 64)
                {
                    inimigo5.des_x = 0;
                }
            }
            if (inimigo5.y < *pos_y && MODULO(inimigo5.y - *pos_y) > 20)
            {
                inimigo5.des_y = 0;
                inimigo5.y = inimigo5.y + 1;
                inimigo5.des_x = inimigo5.des_x + 32;
                if (inimigo5.des_x > 64)
                {
                    inimigo5.des_x = 0;
                }
            }
            if (inimigo5.y > *pos_y && MODULO(inimigo5.y - *pos_y) > 20)
            {
                inimigo5.des_y = 96;
                inimigo5.y = inimigo5.y - 1;
                inimigo5.des_x = inimigo5.des_x + 32;
                if (inimigo5.des_x > 64)
                {
                    inimigo5.des_x = 0;
                }
            }
        }
        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *count == 2 && inimigo1.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *count == 2 && inimigo2.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *count == 2 && inimigo3.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *count == 2 && inimigo4.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo5.x - *pos_x)<30 && MODULO(inimigo5.y - *pos_y)<30) && *count == 2 && inimigo5.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}

        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *ataque == 1 && inimigo1.vidas > 0){inimigo1.vidas = inimigo1.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *ataque == 1 && inimigo2.vidas > 0){inimigo2.vidas = inimigo2.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *ataque == 1 && inimigo3.vidas > 0){inimigo3.vidas = inimigo3.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *ataque == 1 && inimigo4.vidas > 0){inimigo4.vidas = inimigo4.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo5.x - *pos_x)<30 && MODULO(inimigo5.y - *pos_y)<30) && *ataque == 1 && inimigo5.vidas > 0){inimigo5.vidas = inimigo5.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        load_pos = 0;
        if(inimigo1.vidas < 1 && inimigo2.vidas < 1 && inimigo3.vidas < 1 && inimigo4.vidas < 1 && inimigo5.vidas < 1){*mapa_atual = *mapa_atual +1; load_pos = 0; *pos_x = 700; *pos_y = 150;
        inimigo1.x = 544; inimigo1.y = 144; inimigo1.aut = 0; inimigo1.vidas =5;
        inimigo2.x = 600; inimigo2.y = 500; inimigo2.aut = 0; inimigo2.vidas =5;
        inimigo3.x = 350; inimigo3.y = 200; inimigo3.aut = 0; inimigo3.vidas =5;
        inimigo4.x = 400; inimigo4.y = 500; inimigo4.aut = 0; inimigo4.vidas =5;
        inimigo5.x = 112; inimigo5.y = 160; inimigo5.aut = 0; inimigo5.vidas =5;
        }
        break;

    case 10:
    if(inimigo1.vidas > 0){al_draw_bitmap_region(IN6, inimigo1.des_x, inimigo1.des_y, 32, 32, inimigo1.x, inimigo1.y, 0);}
        if (*count % 2 == 0 && (MODULO(inimigo1.x - *pos_x) < 200) && (MODULO(inimigo1.y - *pos_y) < 200))
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
        if(inimigo2.vidas > 0){al_draw_bitmap_region(IN13, inimigo2.des_x, inimigo2.des_y, 32, 32, inimigo2.x, inimigo2.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo2.x - *pos_x) < 200) && (MODULO(inimigo2.y - *pos_y) < 200))
        {
            if (inimigo2.x < *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 64;
                inimigo2.x = inimigo2.x + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.x > *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 32;
                inimigo2.x = inimigo2.x - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y < *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 0;
                inimigo2.y = inimigo2.y + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y > *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 96;
                inimigo2.y = inimigo2.y - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
        }
        if(inimigo4.vidas > 0){al_draw_bitmap_region(IN9, inimigo4.des_x, inimigo4.des_y, 32, 32, inimigo4.x, inimigo4.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo4.x - *pos_x) < 200) && (MODULO(inimigo4.y - *pos_y) < 200))
        {
            if (inimigo4.x < *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 64;
                inimigo4.x = inimigo4.x + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.x > *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 32;
                inimigo4.x = inimigo4.x - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y < *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 0;
                inimigo4.y = inimigo4.y + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y > *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 96;
                inimigo4.y = inimigo4.y - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
        }
        if(inimigo3.vidas > 0){al_draw_bitmap_region(IN10, inimigo3.des_x, inimigo3.des_y, 32, 32, inimigo3.x, inimigo3.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo3.x - *pos_x) < 200) && (MODULO(inimigo3.y - *pos_y) < 200))
        {
            if (inimigo3.x < *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 64;
                inimigo3.x = inimigo3.x + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.x > *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 32;
                inimigo3.x = inimigo3.x - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y < *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 0;
                inimigo3.y = inimigo3.y + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y > *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 96;
                inimigo3.y = inimigo3.y - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
        }
        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *count == 2 && inimigo1.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *count == 2 && inimigo2.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *count == 2 && inimigo3.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *count == 2 && inimigo4.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}

        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *ataque == 1 && inimigo1.vidas > 0){inimigo1.vidas = inimigo1.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *ataque == 1 && inimigo2.vidas > 0){inimigo2.vidas = inimigo2.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *ataque == 1 && inimigo3.vidas > 0){inimigo3.vidas = inimigo3.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *ataque == 1 && inimigo4.vidas > 0){inimigo4.vidas = inimigo4.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        load_pos = 0;
        if(inimigo1.vidas < 1 && inimigo2.vidas < 1 && inimigo3.vidas < 1 && inimigo4.vidas < 1){*mapa_atual = *mapa_atual +1; load_pos = 0; *pos_x = 700; *pos_y = 250;
        inimigo1.x = 112; inimigo1.y = 260; inimigo1.aut = 0; inimigo1.vidas =5;
        inimigo2.x = 400; inimigo2.y = 260; inimigo2.aut = 0; inimigo2.vidas =5;
        inimigo3.x = 500; inimigo3.y = 416; inimigo3.aut = 0; inimigo3.vidas =5;
        inimigo4.x = 688    ; inimigo4.y = 400; inimigo4.aut = 0; inimigo4.vidas =5;
        }
        break;

    case 11:if(inimigo1.vidas > 0){al_draw_bitmap_region(IN6, inimigo1.des_x, inimigo1.des_y, 32, 32, inimigo1.x, inimigo1.y, 0);}
        if (*count % 2 == 0 && (MODULO(inimigo1.x - *pos_x) < 200) && (MODULO(inimigo1.y - *pos_y) < 200))
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
        if(inimigo2.vidas > 0){al_draw_bitmap_region(IN4, inimigo2.des_x, inimigo2.des_y, 32, 32, inimigo2.x, inimigo2.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo2.x - *pos_x) < 200) && (MODULO(inimigo2.y - *pos_y) < 200))
        {
            if (inimigo2.x < *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 64;
                inimigo2.x = inimigo2.x + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.x > *pos_x && MODULO(inimigo2.x - *pos_x) > 20)
            {
                inimigo2.des_y = 32;
                inimigo2.x = inimigo2.x - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y < *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 0;
                inimigo2.y = inimigo2.y + 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
            if (inimigo2.y > *pos_y && MODULO(inimigo2.y - *pos_y) > 20)
            {
                inimigo2.des_y = 96;
                inimigo2.y = inimigo2.y - 1;
                inimigo2.des_x = inimigo2.des_x + 32;
                if (inimigo2.des_x > 64)
                {
                    inimigo2.des_x = 0;
                }
            }
        }
        if(inimigo4.vidas > 0){al_draw_bitmap_region(IN5, inimigo4.des_x, inimigo4.des_y, 32, 32, inimigo4.x, inimigo4.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo4.x - *pos_x) < 200) && (MODULO(inimigo4.y - *pos_y) < 200))
        {
            if (inimigo4.x < *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 64;
                inimigo4.x = inimigo4.x + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.x > *pos_x && MODULO(inimigo4.x - *pos_x) > 20)
            {
                inimigo4.des_y = 32;
                inimigo4.x = inimigo4.x - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y < *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 0;
                inimigo4.y = inimigo4.y + 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
            if (inimigo4.y > *pos_y && MODULO(inimigo4.y - *pos_y) > 20)
            {
                inimigo4.des_y = 96;
                inimigo4.y = inimigo4.y - 1;
                inimigo4.des_x = inimigo4.des_x + 32;
                if (inimigo4.des_x > 64)
                {
                    inimigo4.des_x = 0;
                }
            }
        }
        if(inimigo3.vidas > 0){al_draw_bitmap_region(IN11, inimigo3.des_x, inimigo3.des_y, 32, 32, inimigo3.x, inimigo3.y, 0);} //inimigo 2
        if (*count % 2 == 0 && (MODULO(inimigo3.x - *pos_x) < 200) && (MODULO(inimigo3.y - *pos_y) < 200))
        {
            if (inimigo3.x < *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 64;
                inimigo3.x = inimigo3.x + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.x > *pos_x && MODULO(inimigo3.x - *pos_x) > 20)
            {
                inimigo3.des_y = 32;
                inimigo3.x = inimigo3.x - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y < *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 0;
                inimigo3.y = inimigo3.y + 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
            if (inimigo3.y > *pos_y && MODULO(inimigo3.y - *pos_y) > 20)
            {
                inimigo3.des_y = 96;
                inimigo3.y = inimigo3.y - 1;
                inimigo3.des_x = inimigo3.des_x + 32;
                if (inimigo3.des_x > 64)
                {
                    inimigo3.des_x = 0;
                }
            }
        }
        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *count == 2 && inimigo1.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *count == 2 && inimigo2.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *count == 2 && inimigo3.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *count == 2 && inimigo4.vidas > 0){*stamina = *stamina -2; al_play_sample(player_hurt,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}

        if((MODULO(inimigo1.x - *pos_x)<30 && MODULO(inimigo1.y - *pos_y)<30) && *ataque == 1 && inimigo1.vidas > 0){inimigo1.vidas = inimigo1.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo2.x - *pos_x)<30 && MODULO(inimigo2.y - *pos_y)<30) && *ataque == 1 && inimigo2.vidas > 0){inimigo2.vidas = inimigo2.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo3.x - *pos_x)<30 && MODULO(inimigo3.y - *pos_y)<30) && *ataque == 1 && inimigo3.vidas > 0){inimigo3.vidas = inimigo3.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        if((MODULO(inimigo4.x - *pos_x)<30 && MODULO(inimigo4.y - *pos_y)<30) && *ataque == 1 && inimigo4.vidas > 0){inimigo4.vidas = inimigo4.vidas -1; al_play_sample(player_hit,1.0,0.5,1.0,ALLEGRO_PLAYMODE_ONCE, NULL);}
        load_pos = 0;
        if(inimigo1.vidas < 1 && inimigo2.vidas < 1 && inimigo3.vidas < 1 && inimigo4.vidas < 1){*mapa_atual = *mapa_atual +1; load_pos = 0; *pos_x = 700; *pos_y = 150;
        *venceu = 1; *done = true; 
        }
        break;
    }
    *ataque = 0;
}