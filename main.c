#include <stdio.h>
#include <stdint.h>
#include <assert.h>

int numberOfMoves = 0;
int whoesTurn = 0;
uint64_t allPieces = 0xFFFF00000000FFFF;
uint64_t whitePieces = 0x000000000000FFFF;
uint64_t blackPieces = 0xFFFF000000000000;

uint64_t whitePawns = 0x000000000000FF00;
uint64_t whiteKnights = 0x0000000000000042;
uint64_t whiteBishops = 0x0000000000000024;
uint64_t whiteRooks = 0x0000000000000081;
uint64_t whiteQueens = 0x0000000000000008;
uint64_t whiteKing = 0x0000000000000010; 

uint64_t blackPawns = 0x00FF000000000000;
uint64_t blackKnights = 0x4200000000000000;
uint64_t blackBishops = 0x2400000000000000;
uint64_t blackRooks = 0x8100000000000000;
uint64_t blackQueens = 0x0800000000000000;
uint64_t blackKing = 0x1000000000000000; 

enum {
    a1, b1, c1, d1, e1, f1, g1, h1, 
    a2, b2, c2, d2, e2, f2, g2, h2,
    a3, b3, c3, d3, e3, f3, g3, h3, 
    a4, b4, c4, d4, e4, f4, g4, h4,
    a5, b5, c5, d5, e5, f5, g5, h5, 
    a6, b6, c6, d6, e6, f6, g6, h6,
    a7, b7, c7, d7, e7, f7, g7, h7, 
    a8, b8, c8, d8, e8, f8, g8, h8
};


void printBitboard(uint64_t bitboard) {
    for (int rank=7; rank >=0; rank--) {
        for (int file=0; file<8; file++) {
            int square = rank*8+file;
            printf("%d", (bitboard >> square) & 1);
        }
        printf("\n");
    }
    printf("\n");
}

int makeMove(int startingSquare, int targetSquare) {
    if((allPieces >> startingSquare)&1!=1) {
        printf("Il n'y a pas de pièce sur cette case");
    }
    else{
        uint64_t mask = (1ULL << startingSquare);

        if (mask&whitePawns){
            return 1;
        }
        else if (mask&whiteKnights){
            return 2;
        }
        else if (mask&whiteBishops){
            return 3;
        }
        else if (mask&whiteRooks){
            return 4;
        }
        else if (mask&whiteQueens){
            return 5;
        }
        else if (mask&whiteKing){
            return 6;
        }
        else if (mask&blackPawns){
            return 7;
        }
        else if (mask&blackKnights){
            return 8;
        }
        else if (mask&blackBishops){
            return 9;
        }
        else if (mask&blackRooks){
            return 10;
        }
        else if (mask&blackQueens){
            return 11;
        }
        else if (mask&blackKing){
            return 12;
        }
        else{
            return 0;
        }
        
        
    }
}

int main() {
    printf("%d \n",makeMove(e8,e4));
    return 0;
}