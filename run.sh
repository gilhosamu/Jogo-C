#!/bin/bash

echo "Compilando arquivo main.c"

gcc main.c -o main $(pkg-config allegro-5 allegro_main-5 allegro_font-5 allegro_primitives-5 allegro_image-5 allegro_audio-5 allegro_acodec-5  --libs --cflags)

./main