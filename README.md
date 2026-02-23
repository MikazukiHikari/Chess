# Arduino Chess Game
**Embedded System Chess / Board Game Project**

A chess-like board game implemented on an Arduino embedded system, supporting both **Player vs Player** and **Player vs Computer** modes, with real-time TFT display, touchscreen control, sound effects, and decorative animations.

## Features

- **Game Modes**:  
  - Player vs Player (PvP)  
  - Player vs Computer (PvC, simple AI)

- **Embedded System**:  
  - Runs on Arduino, handling input, game logic, and output  
  - Efficient C++ implementation for resource-limited hardware

- **Display & Input**:  
  - TFT display shows board and pieces in real-time  
  - Touchscreen allows selecting and moving pieces

- **Audio & Animations**:  
  - Buzzer for sound effects
  - Meteor animations for decorative UI effect

- **Chess Logic**:  
  - Move validation, captures, pawn promotion, castling  
  - Check and checkmate detection

## Hardware Requirements

- Arduino board (Mega2560, UNO will be overflow)  
- TFT display with touchscreen  
- Optional buzzer for audio feedback  
- Optional LEDs for turn indicators  

## Software Requirements

- Arduino IDE  
- [LCDWIKI GUI libraries](https://github.com/lcdwiki/LCDWIKI_gui)
- [LCDWIKI KBV libraries](https://github.com/lcdwiki/LCDWIKI_kbv)  
- [TouchScreen library](https://github.com/adafruit/Adafruit_TouchScreen)  
- Standard C++ libraries (stdlib, etc.)

