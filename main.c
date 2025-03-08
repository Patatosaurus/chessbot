#include <stdio.h>
#include <stdint.h>


uint64_t whitePawns = 0x000000000000FF00;
uint64_t whiteKnights = 0x0000000000000042;
uint64_t whiteBishops = 0x0000000000000024;
uint64_t whiteRooks = 0x0000000000000081;
uint64_t whiteQueen = 0x0000000000000008;
uint64_t whiteKing = 0x0000000000000010; 


uint64_t blackPawns = 0x00FF000000000000;
uint64_t blackKnights = 0x4200000000000000;
uint64_t blackBishops = 0x2400000000000000;
uint64_t blackRooks = 0x8100000000000000;
uint64_t blackQueen = 0x0800000000000000;
uint64_t blackKing = 0x1000000000000000; 

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

int main() {
    printBitboard(whiteKing);
    return 0;
}