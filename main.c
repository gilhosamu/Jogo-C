#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include "Movimentos_personagem.h"

    int x=10,y=10, count=0, mapa_atual=0;
    const float FPS = 60;
    int width = 800; int height = 600;
    int key_down=0, key_up=0, key_left=0, key_right=0;
  
int main(){ 

 al_init(); al_init_image_addon();
 bool done=false; bool col = false;
  
 ALLEGRO_BITMAP *prota  = al_load_bitmap("Personagens/Protagonista.bmp");
 al_convert_mask_to_alpha(prota, al_map_rgb(255,0,255));
 ALLEGRO_BITMAP *fundo  = al_load_bitmap("bosque/1.bmp");
 ALLEGRO_TIMER *timer = NULL;
 ALLEGRO_DISPLAY *display = NULL;
 ALLEGRO_EVENT_QUEUE *event_queue = NULL;

 timer = al_create_timer(1.0/FPS); if(!timer){return -1;}
 display = al_create_display(width, height);	
 if(!al_init()){return -1;}
 if(!display){return -1;}

  al_init_primitives_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();

  al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));

  al_start_timer(timer);
 // al_draw_scaled_bitmap(fundo, 0,0,432,272,0,0,800,600, 0); al_flip_display();

 while (!done){ 
          ALLEGRO_EVENT ev;
		  al_wait_for_event(event_queue, &ev);
      if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE){done = true;}

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
            if(ev.type == ALLEGRO_EVENT_TIMER){
              count++;
            if((key_up!=0 || key_down!=0 || key_right!=0 || key_left!=0) && (al_is_event_queue_empty(event_queue))){
                //Desenha_fundo(&mapa_atual);
                Desenha_personagem(key_up, key_down, key_right, key_left, &x, &y, prota, &count, fundo);
              }
            if(count == 27){
              count = 0;
            }
            al_flip_display();
           }
          //limites 
            if ( x < 0 ) x = 0;
            if ( x > 800 ) x = 800;
            if ( y < 0 ) y = 0;
            if ( y > 600 ) y = 600;
  
        
    }
 
   
 al_destroy_bitmap(prota);  
 return 0;
}

