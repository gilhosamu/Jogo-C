#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include "allegro5/allegro_acodec.h"
#include "Movimentos_personagem.h"
#include "Desenha_fundo.h"
#include "Colisao.h"
#include "Desenha_ov.h"

    int x=10,y=10, count=0, mapa_atual=0; int x2 = 10, y2 = 10;
    const float FPS = 60;
    int width = 800; int height = 600;
    int key_down=0, key_up=0, key_left=0, key_right=0;
    double i;
  
int main(){ 

 al_init(); al_init_image_addon(); al_init_acodec_addon();
 bool done=false, col[4];

 ALLEGRO_BITMAP *prota  = al_load_bitmap("Personagens/Protagonista.bmp"); al_convert_mask_to_alpha(prota, al_map_rgb(255,0,255));
 ALLEGRO_BITMAP *fundo  = al_load_bitmap("Mapas/vila.bmp");
 ALLEGRO_BITMAP *colisao_1 = al_load_bitmap("Mapas/vila_col.bmp");
 ALLEGRO_BITMAP *over  = al_load_bitmap("Mapas/vila_ov.bmp"); al_convert_mask_to_alpha(over, al_map_rgb(0,0,0));

 ALLEGRO_TIMER *timer = NULL;

 ALLEGRO_DISPLAY *display = NULL;


ALLEGRO_AUDIO_STREAM *musica_vila = al_load_audio_stream("soundtracks/vila.ogg", 1, 1024);
//ALLEGRO_SAMPLE *musica_vila_sample = NULL;
al_attach_audio_stream_to_mixer(musica_vila, al_get_default_mixer());
al_set_audio_stream_playing(musica_vila, true);


/*
ALLEGRO_VOICE *voice; voice = al_create_voice(44100, ALLEGRO_AUDIO_DEPTH_INT16, ALLEGRO_CHANNEL_CONF_2);
ALLEGRO_MIXER *mixer; mixer = al_create_mixer(44100, ALLEGRO_AUDIO_DEPTH_FLOAT32, ALLEGRO_CHANNEL_CONF_2);
al_attach_mixer_to_voice(mixer, voice);
al_reserve_samples(1);
ALLEGRO_SAMPLE *musica_vila = al_load_sample("sounds/vila.ogg");
ALLEGRO_SAMPLE_INSTANCE *musica_vila_instancia = al_create_sample_instance(musica_vila);
al_set_sample_instance_playmode(musica_vila_instancia, ALLEGRO_PLAYMODE_LOOP);
al_attach_sample_instance_to_mixer(musica_vila_instancia, al_get_default_mixer());
*/

 ALLEGRO_EVENT_QUEUE *event_queue = NULL;
 ALLEGRO_COLOR i;

 timer = al_create_timer(1.0/FPS); if(!timer){return -1;}
 display = al_create_display(width, height); if(!display){return -1;}

  al_init_primitives_addon();
	al_install_keyboard();
  al_install_audio();

	event_queue = al_create_event_queue();

  al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));

  al_start_timer(timer);

 while (!done){ 
      ALLEGRO_EVENT ev;
		  al_wait_for_event(event_queue, &ev);
      if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE){done = true;}

      //al_play_sample_instance(musica_vila_instancia);
      //al_play_sample(musica_vila_sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);

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
            }}
            al_set_target_backbuffer(display);

            if(ev.type == ALLEGRO_EVENT_TIMER){
              count++;
            if((key_up!=0 || key_down!=0 || key_right!=0 || key_left!=0) && (al_is_event_queue_empty(event_queue))){
              movimenta_personagem(key_up, key_down, key_right, key_left, &count, &x2, &y2);
              Desenha_fundo_colisao(&mapa_atual, colisao_1);
              i = al_get_pixel(al_get_backbuffer(display), x2,y2);
              if(i.r != 1){x2 = x ; y2 = y;}
              i = al_get_pixel(al_get_backbuffer(display), x2+32,y2);
              if(i.r != 1){x2 = x ; y2 = y;}
              i = al_get_pixel(al_get_backbuffer(display), x2,y2+32);
              if(i.r != 1){x2 = x ; y2 = y;}
              i = al_get_pixel(al_get_backbuffer(display), x2+32,y2+32);
              if(i.r != 1){x2 = x ; y2 = y;}
              Troca_mapa(&mapa_atual, &x2, &y2);


                Desenha_fundo(&mapa_atual, fundo);
                Desenha_personagem(&x, &y, prota);
                Desenha_ov(&mapa_atual, over);
                printf("\n posx %d  posy %d", x2, y2);
              }
            if(count == 27){
              count = 0;
            }
            x = x2; y = y2;
            al_flip_display();
            }
    }
 
   
 al_destroy_bitmap(prota);
 return 0;
}