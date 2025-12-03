#include "Board.hpp"
#include <iostream>

void PlayBitBoard(uint64_t BB) {
	uint64_t ShiftPoint;

	int rank = 0;
	int file = 0;
	int sqr = 0;
	int sqr64 = 0;
	

	std::cout << std::endl;

	for (rank = RANK_8; rank >= RANK_1; --rank) {
		for (file = FILE_A; file <= FILE_H; file++) {
			sqr = FR2SQ(file, rank); // Gives out 120 based Index
			sqr64 =  SQ64(sqr) ;
				
			if ((ShiftPoint << sqr64) & BB) {
				std::cout << " X ";
			}
			else {
				std::cout << " - ";
			}

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
