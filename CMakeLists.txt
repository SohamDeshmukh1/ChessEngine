cmake_minimum_required(VERSION 3.31)
project(ChessEngine)

add_library(
Core ChessEngine/Library/BitBoard.cpp
ChessEngine/Library/Board.cpp                     
ChessEngine/Library/ChessEngine.cpp
# Library/Pieces.cpp
    )

target_include_directories(Core PUBLIC ${CMAKE_SOURCE_DIR}/ChessEngine/Includes)

add_executable(ChessE ChessEngine/Main.cpp)
target_link_libraries(ChessE Core) 