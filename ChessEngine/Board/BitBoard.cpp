#include "Board.h"
#include <iostream>

void PrintBitBoard(uint64_t BB) {
	uint64_t ShiftPoint = NULL;

	int rank = 0;
	int file = 0;
	int sqr = 0;
	int srq64 = 0;
	
	std::cout << std::endl;

	for (rank = RANK_8; rank >= RANK_1; --rank) {
		for (file = FILE_A; file <= FILE_H; file++) {
			sqr = FR2SQ(file, rank); // Gives out 120 based Index
			srq64 =  SQ64(sqr) ;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
