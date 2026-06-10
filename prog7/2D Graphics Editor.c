#define ROWs 20
#define COLS 40
char canvas[ROWS][COLS];

void initializeCanvas()
{
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS; i++){
            canvas[i][j]='_';
        }
    }
}

void displayCanvas()
{
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            printf("%c",canvas[i][j]);

        }
        printf("\n");
    }
}

void drawLine(int x1, int y1, int x2, int y2){
    if(x1==x2){
        for(int i=y1; i<=y2;i++)
            canvas[i][j]='*';
        }
        else if(y1==y2){
            for(int i=x1; i<=x2; i++)
            canvas[y1][i]='*';
    }
}