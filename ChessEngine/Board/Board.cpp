#include "Board.h"

int Sqr120to64[TOTAL_SQ];
int Sqr64to120[64];

void InitSQ120to64() {

	bool State = true;
	 // Due to Linking issue we cant Make a Stroage in Headers
	// Lesson Leanred

	int rank = RANK_1;
	int file = FILE_A;
	int index = 0;
	int sqr = A1;
	int sqr64 = 0;  

	for (index = 0; index < TOTAL_SQ; ++index) {
		Sqr120to64[index] = 65;
	}
	for (index = 0; index < 64; ++index) {
		Sqr64to120[index] = 120;
	}

	for (rank = RANK_1; rank <= RANK_8; ++rank) {
		for (file = FILE_A; file <= FILE_H; ++file) {
			sqr = FR2SQ(file, rank);
			Sqr64to120[sqr64] = sqr;
			Sqr120to64[sqr] = sqr64;
			sqr64++;
		}
	}
}
void AllInit() {
	InitSQ120to64();
};