#include <iostream>
#include "Board/Board.h"
#include <iomanip> // Used for setw(5) used for perfect spacing in the Printing

void ChessEngine() {
  
	AllInit();
	
	//int index = 0;
	//for (index = 0; index < 120; index++) {
	//	if (index % 10 == 0) std::cout << std::endl;
	//	std::cout << std::setw(5) << Sqr120to64[index];
	//}
	//std::cout << std::endl;

	//for (index = 0; index < 64; index++) {
	//	if (index % 8 == 0) std::cout << std::endl;
	//	std::cout << std::setw(5) <<Sqr64to120[index];
	//} 

	uint64_t playbitBoard = 0ULL;

	std::cout << "STARTED : \n" << std::endl;

	PlayBitBoard(playbitBoard);

	playbitBoard |= (1ULL << SQ64(D4)); 
	std::cout << "D4 added : ";
	PlayBitBoard(playbitBoard);

 
}