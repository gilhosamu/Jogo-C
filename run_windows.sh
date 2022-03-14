#!/usr/bin/env bash

gcc main.c funcoes/escreve_texto.c funcoes/Colisao.c funcoes/Desenha_fundo.c funcoes/Movimentos_personagens.c funcoes/NPCs.c -o main.exe -lallegro -lallegro_font -lallegro_main -lallegro_ttf -lallegro_primitives -lallegro_image -lallegro_audio -lallegro_acodec

main.exe