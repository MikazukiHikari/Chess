#ifndef PIECES_H
#define PIECES_H

#include <avr/pgmspace.h>
#include <stdint.h>

#define RED2      0xd020
#define RED3       0xdaed
#define RED      0xe4d3
#define WHITE     0xFFFF
#define BLACK     0x0000
#define GRAY      0XAD55	
#define DARKGRAY  0X8410

const uint16_t RedPawn[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED3,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED3,RED2,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED2,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED3,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED2,RED,0,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,RED,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0},
};
const uint16_t RedKnight[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,RED,RED,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,RED,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED2,RED2,RED2,RED3,RED,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED,RED,RED3,RED2,RED3,RED,0,0,0},
  {0,0,0,0,0,RED,RED,0,RED,RED3,RED2,RED3,RED,0,0,0},
  {0,0,0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,0,0,0,RED,RED2,RED3,RED2,RED,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,0,RED,RED,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,RED,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,RED,0,0,0},
  {0,0,0,RED,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0},
};
const uint16_t RedBishop[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,RED,RED,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED3,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED2,RED3,RED3,RED,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED2,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,RED,RED,RED2,RED2,RED3,RED3,RED2,RED3,RED,RED,0,0,0},
  {0,0,0,RED,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0},
};
const uint16_t RedRook[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,RED,RED,RED,0,RED,RED,0,RED,RED,RED,0,0,0},
  {0,0,0,RED,RED2,RED3,RED,RED2,RED3,RED,RED2,RED3,RED,0,0,0},
  {0,0,0,RED,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0},
  {0,0,0,RED,RED,RED2,RED2,RED3,RED3,RED2,RED3,RED,RED,0,0,0},
  {0,0,0,0,0,RED,RED,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED3,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,RED,RED,RED,RED2,RED2,RED3,RED,RED,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,RED,RED,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,RED,0,0},
  {0,0,RED,RED2,RED2,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0},
};
const uint16_t RedQueen[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,RED,RED,0,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED,RED2,RED3,RED,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,0,RED,RED,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED3,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED3,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED2,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED2,RED2,RED3,RED3,RED,0,0,0,0},
  {0,0,0,0,0,RED,RED,RED2,RED3,RED2,RED,0,0,0,0,0},
  {0,0,0,0,RED,RED,RED2,RED2,RED2,RED3,RED,RED,0,0,0,0},
  {0,0,RED,RED,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED2,RED,RED,0,0},
  {0,0,RED,RED2,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED3,RED,0,0},
};
const uint16_t RedKing[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,RED,RED,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,RED,RED2,RED2,RED,RED2,RED2,RED3,RED,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED3,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED2,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED2,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,0,RED,RED2,RED2,RED2,RED3,RED,0,0,0,0,0},
  {0,0,0,0,0,0,RED,RED,RED3,RED,0,0,0,0,0,0},
  {0,0,0,0,RED,RED,RED2,RED2,RED2,RED3,RED,RED,0,0,0,0},
  {0,0,RED,RED,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED2,RED,RED,0,0},
  {0,0,RED,RED2,RED2,RED2,RED2,RED2,RED2,RED3,RED2,RED3,RED3,RED,0,0},
};
const uint16_t BlackPawn[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,WHITE,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,BLACK,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,BLACK,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,BLACK,WHITE,0,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
};
const uint16_t BlackKnight[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,WHITE,WHITE,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,WHITE,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,WHITE,WHITE,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,0,WHITE,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
  {0,0,0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,BLACK,WHITE,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,WHITE,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,WHITE,0,0,0},
  {0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
};
const uint16_t BlackBishop[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,WHITE,WHITE,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,DARKGRAY,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,BLACK,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,WHITE,WHITE,BLACK,BLACK,DARKGRAY,DARKGRAY,BLACK,DARKGRAY,WHITE,WHITE,0,0,0},
  {0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
};
const uint16_t BlackRook[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,WHITE,WHITE,WHITE,0,WHITE,WHITE,0,WHITE,WHITE,WHITE,0,0,0},
  {0,0,0,WHITE,BLACK,DARKGRAY,WHITE,BLACK,DARKGRAY,WHITE,BLACK,DARKGRAY,WHITE,0,0,0},
  {0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0},
  {0,0,0,WHITE,WHITE,BLACK,BLACK,DARKGRAY,DARKGRAY,BLACK,DARKGRAY,WHITE,WHITE,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,DARKGRAY,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,WHITE,WHITE,WHITE,BLACK,BLACK,DARKGRAY,WHITE,WHITE,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,WHITE,0,0},
  {0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0},
};
const uint16_t BlackQueen[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,WHITE,WHITE,0,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,BLACK,DARKGRAY,WHITE,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,BLACK,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,BLACK,BLACK,DARKGRAY,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,WHITE,WHITE,BLACK,DARKGRAY,BLACK,WHITE,0,0,0,0,0},
  {0,0,0,0,WHITE,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,WHITE,0,0,0,0},
  {0,0,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,BLACK,WHITE,WHITE,0,0},
  {0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,DARKGRAY,WHITE,0,0},
};
const uint16_t BlackKing[16][16] PROGMEM = {
  {0,0,0,0,0,0,0,WHITE,WHITE,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,WHITE,BLACK,BLACK,WHITE,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,DARKGRAY,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,BLACK,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,BLACK,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,0,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,0,0,0,0,0},
  {0,0,0,0,0,0,WHITE,WHITE,DARKGRAY,WHITE,0,0,0,0,0,0},
  {0,0,0,0,WHITE,WHITE,BLACK,BLACK,BLACK,DARKGRAY,WHITE,WHITE,0,0,0,0},
  {0,0,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,BLACK,WHITE,WHITE,0,0},
  {0,0,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,DARKGRAY,BLACK,DARKGRAY,DARKGRAY,WHITE,0,0},
};

const uint16_t Return[16][16] PROGMEM = {
  {0,0,0,0,WHITE,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,WHITE,WHITE,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,WHITE,WHITE,WHITE,0,0,0,0,0,0,0,0,0,0,0},
  {0,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,0,0},
  {WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,0},
  {0,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE},
  {0,0,WHITE,WHITE,WHITE,0,0,0,0,0,0,0,WHITE,WHITE,WHITE,WHITE},
  {0,0,0,WHITE,WHITE,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE},
  {0,0,0,0,WHITE,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE},
  {0,0,0,0,0,0,0,0,0,0,0,0,WHITE,WHITE,WHITE,WHITE},
  {0,0,0,0,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE},
  {0,0,0,0,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,0},
  {0,0,0,0,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,0,0},
};

#endif