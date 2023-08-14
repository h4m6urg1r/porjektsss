#include <iostream>

#define ROW 9
#define COL 9
//eat shit
int display(int mat[ROW][COL]);

int main() {
    int mat[ROW][COL] = {0};
    display(mat);
    return 0;
}

int display(int mat[ROW][COL]) {
    std::string start;
    std::string end;
    std::string sep;
    std::string filler;
    for (int i=0; i<(ROW*2)+1; i++) {
        if (i%2) {
            start = "┃ ";
            end = " ┃";
            std::cout << start;
            for (int j=0; j<COL; j++) {
                std::cout << mat[(i-1)/2][j];
                if (j!=COL-1) {
                    if ((j+1)%3) { sep = " │ "; }
                    else { sep = " ┃ "; }
                    std::cout << sep;
                }
            }
            std::cout << end << std::endl;
        }
        else {
            if (i==0) {
                start = "┏";
                filler = "━━━";
                end = "┓";
            }
            else if (i==ROW*2) {
                start = "┗";
                filler = "━━━";
                end = "┛";
            }
            else {
                if (i%6) {
                    start = "┠";
                    filler = "───";
                    end = "┨";
                }
                else {
                    start = "┣";
                    filler = "━━━";
                    end = "┫";
                }
            }
            std::cout << start;
            for (int j=0; j<COL; j++) {
                std::cout << filler;
                if (j!=COL-1) {
                    if ((j+1)%3) {
                        if (i==0) { sep = "┯"; }
                        else if (i==ROW*2) { sep = "┷"; }
                        else {
                            if (i%6) { sep = "┼"; }
                            else { sep = "┿"; }
                        }
                    }
                    else {
                        if(i==0) { sep = "┳"; }
                        else if (i==ROW*2) { sep = "┻"; }
                        else {
                            if (i%6) { sep = "╂"; }
                            else { sep = "╋"; }
                        }
                    }
                    std::cout << sep;
                }
            }
            std::cout << end << std::endl;
        }
    }
        return 0;
}
