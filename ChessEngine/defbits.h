#pragma once
#include<cstdint> //stdint.h is for c, cstdint this one is made for cpp 
#define TOTAL_SQ 120

// I Hope i learn Stuff while Doing this

/* ENUMS : Also enums like uhhh i cant seem to explain my self but it hold value for our
  like White = 0 Black = 1 So we dont forget what we need were talking
  as Computers dont understand any Letters like we do they understand positions or
  to differentitate between elements like we do in different names
  which needs to be a number to represent them*/ 

std::uint64_t;

class BOARD {
public:
	enum class SQUARE{
		//Square Locations Present in the Board
		A1 = 21, B1, C1, D1, E1, F1, G1, H1,
		A2 = 31, B2, C2, D2, E2, F2, G2, H2,
		A3 = 41, B3, C3, D3, E3, F3, G3, H3,
		A4 = 51, B4, C4, D4, E4, F4, G4, H4,
		A5 = 61, B5, C5, D5, E5, F5, G5, H5,
		A6 = 71, B6, C6, D6, E6, F6, G6, H6,
		A7 = 81, B7, C7, D7, E7, F7, G7, H7,
		A8 = 91, B8, C8, D8, E8, F8, G8, H8
	};
	enum class RANK {
		// The Rank numbering of the board
		RANK_1, RANK_2, RANK_3, RANK_4, RANK_5,
		RANK_6, RANK_7, RANK_8, RANK_NONE
	};
	enum class PIECE{ // All The Pieces of thge Board 	
		Wp, Wr, Wb, Wn, Wk, Wq,
		Bp, Br, Bb, Bn, Bk, Bq, EMPTY 
	};
	enum class FILE{ // Similar to the Ranks but The Alphabets 
		FILE_A, FILE_B, FILE_C,
		FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE };
	enum class TEAM { // Idk to keep the Count of the Teams maybe?
		BLACK, WHITE, BOTH
	};
	bool state = true;
};
