#include <stdio.h>
#include <stdint.h>

struct chessboard
{
    int whoesTurn;
};
struct piece
{
    int color;
};



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
enum {
    pawn, knight, 
    bishop, rook, 
    queen, king
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



int main() {
    return 0;
}