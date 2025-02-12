#include <stdio.h>
char echiquier[64];

void initialisation(char echiquier[]) {
    for (int i=16; i<48; i++) {
        echiquier[i] = 'O';
    }
    echiquier[0] = echiquier[7] = 'r';
    echiquier[1] = echiquier[6] = 'n';
    echiquier[2] = echiquier[5] = 'b';
    echiquier[3] = 'q';
    echiquier[4] = 'k';
    for (int i=8; i<16; i++) {
        echiquier[i] = 'p';
    }

    echiquier[56] = echiquier[63] = 'R';
    echiquier[57] = echiquier[62] = 'N';
    echiquier[58] = echiquier[61] = 'B';
    echiquier[59] = 'Q';
    echiquier[60] = 'K';

    for (int i=48; i<56; i++) {
        echiquier[i] = 'P';
    }
}

void chessboard_state(char echiquier[]) {
    for (int i=0; i<64; i++) {
        printf("%c ", echiquier[i]);
        if ((i+1)%8==0) {
            printf("\n");
        }
    }
}

int main() {
    initialisation(echiquier);
    chessboard_state(echiquier);
    return 0;
}
