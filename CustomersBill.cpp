#include <stdio.h>

int main(){
const float TV = 400.00, VCR = 220.00, RemoteCtrlr = 35.20, CDPlyr = 300.00, TapeRcrdr = 150.00, SalesTax = 0.0825;
int quanTV, quanVCR, quanRC, quanCDP, quanTR;
float p1, p2, p3, p4, p5, slstx, subtotal, total;

printf("How many TVs were sold? ");
scanf("%d", &quanTV);
printf("How many VCRs were sold? ");
scanf("%d", &quanVCR);
printf("How many remote controllers were sold? ");
scanf("%d", &quanRC);
printf("How many CD players were sold? ");
scanf("%d", &quanCDP);
printf("How many tape recorders were sold? ");
scanf("%d", &quanTR);

p1 = quanTV*TV;
p2 = quanVCR*VCR;
p3 = quanRC*RemoteCtrlr;
p4 = quanCDP*CDPlyr;
p5 = quanTR*TapeRcrdr;
subtotal = p1+p2+p3+p4+p5;
slstx = subtotal*SalesTax;
total = subtotal+slstx;

printf("\nQTY     DESCRIPTION     UNIT PRICE     TOTAL PRICE");
printf("\n---     -----------     ----------     -----------");
printf("\n %d      TV              $%0.2f         $%0.2f", quanTV, TV, p1);
printf("\n %d      VCR             $%0.2f         $%0.2f", quanVCR, VCR, p2);
printf("\n %d      REMOTE CTRLR    $%0.2f          $%0.2f", quanRC, RemoteCtrlr, p3);
printf("\n %d      CD PLAYER       $%0.2f         $%0.2f", quanCDP, CDPlyr, p4);
printf("\n %d      TAPE RECORDER   $%0.2f         $%0.2f", quanTR, TapeRcrdr, p5);
printf("\n                                        __________");
printf("\n                              Subtotal: $%0.2f", subtotal);
printf("\n                        Sales Tax 8.25: $%0.2f", SalesTax);
printf("\n                                 Total: $%0.2f", total);

return 0;
}

