#include<stdio.h>
void entermatrix(int r, int c, int arr[r][c]){
    int i,j;
    printf("Enter Elements \n" ) ;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) {
        scanf("%d", &arr[i][j]) ;
        }
    }
}
void displaymatrix(int r, int c, int arr[r][c]){
    int i, j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) {
        printf(" %d", arr[i][j]) ;
        }
        printf("\n") ;
    }
}
void addition (int r, int c,int arr[r][c],int brr[r][c]) {
    int i, j;
    int res[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) {
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("\nResult-\n") ;
    displaymatrix(r, c, res) ;
}
void multiplication(int r1, int c1, int r2, int c2,int arr[r1][c1],int brr[r2][c2]) {
    int i, j, k;
    int res[r1][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++) {
            res[i][j]=0;
            for(k=0;k<c1;k++) {
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    printf("\nResult-\n") ;
    displaymatrix(r1, c2, res) ;
}
void transpose(int r, int c,int arr[r][c]) {
    int i, j;
    int res[c][r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) {
            res[j][i]=arr[i][j];
        }
    }
    printf("\nResult-\n") ;
    displaymatrix(c, r, res) ;
}
int main() {
    int choice,r1, c1;
    printf("Click 1 For Addition \nClick 2 For Multiplication\nClick 3 For Transpose\n\n") ;
    printf("Enter : ") ;
    scanf("%d", &choice) ;
    if (choice>=4||choice<=0){
        printf(" Invalid Choice ") ;
        return 0;
    }
    printf("Size of matrix\nEnter Rows : ") ;
    scanf("%d",&r1) ;
    printf("Enter Columns : ") ;
    scanf("%d", &c1) ;
    int arr[r1][c1];
    entermatrix(r1, c1, arr) ;
    if(choice==1){
        printf("\nEnter 2nd matrix\n") ;
        int brr[r1][c1];
        entermatrix(r1, c1, brr) ;
        addition (r1, c1, arr, brr) ;
    }
    else if(choice==2){
        printf("\nEnter 2nd matrix\n") ;
        int r2, c2;
        printf("Enter size of another matrix\nEnter Rows : ") ;
        scanf("%d",&r2) ;
        printf("Enter Columns : ") ;
        scanf("%d", &c2) ;
        int brr[r2][c2];
        if(c1==r2) {
            entermatrix(r2, c2, brr) ;
            multiplication(r1, c1, r2, c2, arr, brr);
        }
        else printf("\nMultiplication is not possible ") ;
    }     
    else if(choice==3) transpose(r1, c1, arr) ;
    
    return 0;
}