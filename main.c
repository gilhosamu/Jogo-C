#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

#include "./funcoes/funcoes.h" // Import para funcionar no linux


// Import para funcionar no MacOsx
// #include "funcoes/Colisao.c"
// #include "funcoes/Desenha_fundo.c"
// #include "funcoes/Movimentos_personagens.c"
// #include "funcoes/NPCs.c"

int x=10,y=10, count=0, mapa_atual=0; int x2 = 10, y2 = 10, vidas_personagem = 5, stamina = 10, load_pos = 0; //variáveis que serão utilizadas pelo personagem
const float FPS = 60; //taxa de quadros
int width = 800; int height = 600; //tamanho da tela
int key_down=0, key_up=0, key_left=0, key_right=0; // teclas do teclado AWSD
  
int main(){ 

  //inicializa o allegro
  al_init(); 
  al_init_image_addon(); 
  al_init_acodec_addon(); 
  al_install_audio();
  al_init_primitives_addon();
  al_install_keyboard();

  bool done=false;

  //carrega todos o bitmaps do jogo
  ALLEGRO_BITMAP *prota  = al_load_bitmap("Personagens/Protagonista.bmp"); al_convert_mask_to_alpha(prota, al_map_rgb(255,0,255));
  ALLEGRO_BITMAP *fundo  = al_load_bitmap("Mapas/vila.bmp");
  ALLEGRO_BITMAP *colisao_1 = al_load_bitmap("Mapas/vila_col.bmp");
  ALLEGRO_BITMAP *over  = al_load_bitmap("Mapas/vila_ov.bmp"); al_convert_mask_to_alpha(over, al_map_rgb(0,0,0));
  ALLEGRO_BITMAP *fundo_dun  = al_load_bitmap("Mapas/dungeon.bmp");
  ALLEGRO_BITMAP *colisao_2 = al_load_bitmap("Mapas/dungeon_col.bmp");

  //cria um timer a 60 FPS
  ALLEGRO_TIMER *timer = NULL;
  timer = al_create_timer(1.0/FPS); if(!timer){ return -1; }

  //cria um display
  ALLEGRO_DISPLAY *display = NULL;
  display = al_create_display(width, height); if(!display){ return -1; }

  //parte de audio
  ALLEGRO_AUDIO_STREAM *musica_vila = al_load_audio_stream("soundtracks/vila.ogg", 1, 1024);
  ALLEGRO_AUDIO_STREAM *dungeon = al_load_audio_stream("soundtracks/dungeon.ogg", 1, 1024);
  al_reserve_samples(4);
  al_attach_audio_stream_to_mixer(musica_vila, al_get_default_mixer());
  al_attach_audio_stream_to_mixer(dungeon, al_get_default_mixer());
  al_set_audio_stream_playing(musica_vila, false);
  al_set_audio_stream_playing(dungeon, false);
  ALLEGRO_SAMPLE *game_over = al_load_sample("soundtracks/Game_Over.ogg");
  ALLEGRO_SAMPLE *fanfare = al_load_sample("soundtracks/fanfare.ogg");


  ALLEGRO_EVENT_QUEUE *event_queue = NULL;
  ALLEGRO_COLOR i; //será usado para detectar as colisões
  event_queue = al_create_event_queue();

  al_register_event_source(event_queue, al_get_timer_event_source(timer));
  al_register_event_source(event_queue, al_get_keyboard_event_source());
  al_register_event_source(event_queue, al_get_display_event_source(display));

  al_start_timer(timer);

  while (!done) { //enquando o jogo estiver rodando, todas as ações serão concentradas dentro deste loop

    ALLEGRO_EVENT ev;
    al_wait_for_event(event_queue, &ev);
    if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE){done = true;} //ESC para fechar o jogo

    // faz o procedimento mostrado pelo professor para detecção de teclas mantidas pressionadas

    if(ev.type == ALLEGRO_EVENT_KEY_DOWN){
      switch(ev.keyboard.keycode){
        case ALLEGRO_KEY_W:
          key_up = 1;
          break;
        case ALLEGRO_KEY_S:
          key_down = 1;
          break;
        case ALLEGRO_KEY_D:
          key_right = 1;
          break;
        case ALLEGRO_KEY_A:
          key_left = 1;
          break;
      }
    }
    if(ev.type == ALLEGRO_EVENT_KEY_UP){
      switch(ev.keyboard.keycode){
        case ALLEGRO_KEY_W:
          key_up = 0;
          break;
        case ALLEGRO_KEY_S:
          key_down = 0;
          break;
        case ALLEGRO_KEY_D:
          key_right = 0;
          break;
        case ALLEGRO_KEY_A:
          key_left = 0;
          break;
      }
    }
      
    al_set_target_backbuffer(display); //coloca o display em buffer para gerar um bitmap(será usado para detectar colisões)

    if(ev.type == ALLEGRO_EVENT_TIMER) { //espera o timer
      
      count++; // para contar o sprite das animções dos personagens

      if(al_is_event_queue_empty(event_queue)) { // espera a fila de eventos ficar livre

        movimenta_personagem(key_up, key_down, key_right, key_left, &count, &x2, &y2); //no arquivo "Movimentos_personagem.h"
        Desenha_fundo_colisao(&mapa_atual, colisao_1, colisao_2); //no arquivo "Desenha_fundo.h"

        /*
        esta parte do código verifica se o personagem encostou em uma zona do choque(muros, paredes, etc...)
        funciona através da detecção de pixel na tela, todo o mapa é coberto com a cor 255, 0, 255 e as partes que colidem são marcadas com preto
        caso a função al_get_pixel() detectar alguma cor diferente de 255 no vermelho o personagem não passa por essa zona
        são repetidas 4 linhas parecidas para os 4 cantos da imagem do personagem
        */
        i = al_get_pixel( al_get_backbuffer(display), x2,y2 );
        if(i.r != 1){ x2 = x ; y2 = y; }
        i = al_get_pixel( al_get_backbuffer(display), x2+32,y2 );
        if(i.r != 1){ x2 = x ; y2 = y; }
        i = al_get_pixel( al_get_backbuffer(display), x2,y2+32 );
        if(i.r != 1){ x2 = x ; y2 = y; }
        i = al_get_pixel( al_get_backbuffer(display), x2+32,y2+32 );
        if(i.r != 1){ x2 = x ; y2 = y; }

        Troca_mapa(&mapa_atual, &x2, &y2, &load_pos); //no arquivo "Colisao.h"

        if(mapa_atual < 8 && mapa_atual >= 0) { //toca a musica da vila quando personagem se encontra na vila
          al_set_audio_stream_playing(dungeon, false);
          al_set_audio_stream_playing(musica_vila, true);
        }
        if(mapa_atual > 7) { //toca a musica da dungeon quando personagem se encontra na dungeon
          al_set_audio_stream_playing(musica_vila, false);
          al_set_audio_stream_playing(dungeon, true);
        }

        Desenha_fundo(&mapa_atual, fundo, fundo_dun); //no arquivo "Desenha_fundo.h"
        Desenha_personagem(&x, &y, prota); //no arquivo "Movimentos_personagem.h"
        NPC(&mapa_atual, &count, load_pos);
        Desenha_ov(&mapa_atual, over); //no arquivo "Desenha_ov.h"

        al_draw_filled_rectangle(15, 15, 15*vidas_personagem*2, 25, al_map_rgb(255,0,0));
        al_draw_filled_rectangle(15, 30, 15*stamina*1.5, 40, al_map_rgb(0,255,125));
      }

      if(count == 27){ count = 0; }
      x = x2; y = y2; //x2 e y2 são um "buffer" para o personagem não ficar tremendo quando entra em colisão

      al_flip_display(); // envia os desenhoas à tela
    }
  }
  
  //destroi tudo que foi criado pelo allegro
  al_destroy_display(display);
  al_destroy_bitmap(fundo);
  al_destroy_bitmap(colisao_1);
  al_destroy_bitmap(over);
  al_destroy_bitmap(prota);
  al_destroy_timer(timer);
  al_destroy_audio_stream(musica_vila);
  al_destroy_audio_stream(dungeon);
  al_destroy_sample(game_over);
  al_destroy_sample(fanfare);

  return 0;
}