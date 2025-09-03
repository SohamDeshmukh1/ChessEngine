#pragma once
#include<cstdint> //stdint.h is for c, cstdint this one is made for cpp used for uint stuff
#include<cstdlib>
#include<assert.h>
#include<iostream>
#define TOTAL_SQ 120
#define MAXMOVES 2048

// I Hope i learn Stuff while Doing this

	enum {
		
		A1 = 21, B1, C1, D1, E1, F1, G1, H1,
		A2 = 31, B2, C2, D2, E2, F2, G2, H2,
		A3 = 41, B3, C3, D3, E3, F3, G3, H3,
		A4 = 51, B4, C4, D4, E4, F4, G4, H4,
		A5 = 61, B5, C5, D5, E5, F5, G5, H5,
		A6 = 71, B6, C6, D6, E6, F6, G6, H6,
		A7 = 81, B7, C7, D7, E7, F7, G7, H7,
		A8 = 91, B8, C8, D8, E8, F8, G8, H8
	};
	enum { 
		// The Rank numbering of the board
		RANK_1, RANK_2, RANK_3, RANK_4, RANK_5,
		RANK_6, RANK_7, RANK_8, RANK_NONE
	};
	enum {EMPTY, // All The Pieces of thge Board 	
		Wp, Wr, Wb, Wn, Wk, Wq,
		Bp, Br, Bb, Bn, Bk, Bq
	};
	enum { // Similar to the Ranks but The Alphabets 
		FILE_A, FILE_B, FILE_C,
		FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE
	};
	enum  { // Idk to keep the Count of the Teams maybe?
		BLACK, WHITE, BOTH
	};
	enum  { // Defining Castling perm white king/queen and Smiliary for Black too
		WKCA = 1 , WQCA = 2 , BKCA = 4 , BQCA = 8
	};
	extern bool State;

typedef struct {

	
	int piece[TOTAL_SQ];
	std::uint64_t Pawn[3]; //To track Pawns
	
	int KingSq[2]; // identify King square
	int EnPas;
	int Side;		// Whos side or turn it is
	int FiftyMov; 

	int ply; //Current half-move number within the current search 
	int hisply; // history

	int CastlPerm;

	/* Below Are More of the Granular Control Variables */

	std::uint64_t PceNum[13]; // 0-12 for all pieces and an Empty place reserved
	
	int BigPce[3]; // 1 for Black 1 for White 1 for Total of them except Pawns
	
	int MajPce[3]; // Rooks and Queen Similar to above
	int MinPce[3]; // Bishop and Knight

	int pList[13][10];

} S_Board ;

typedef struct {
	int Move;
	int FiftyMov;
	int CastlPerm;
	int EnPas;
	std::uint64_t PosKey;
} S_Undo;
extern S_Undo History[MAXMOVES];
/*  ---------- GLOBALS -----------  */

extern int Sqr120to64[TOTAL_SQ];
extern int Sqr64to120[64];  
/*  ---------- Macros  -----------  */

#define FR2SQ(f, r) ( (21 + (f)) + ((r) * 10) )
// Returns 120 SQ value

/*  ---------- Functions -----------  */

extern void AllInit();