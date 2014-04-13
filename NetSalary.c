#include<stdio.h>
int main()
{
float bs,hra,da,cca,insurance,pf,gs,deductions;
printf("Enter Basic Salary \n");
scanf("%f",&bs);
da = 0.88*bs;
hra = 0.08*bs;
cca = 1000.0;
insurance = 2000.0;
pf = 0.1*bs;
gs = bs + da + hra + cca;
deductions = insurance + pf;
printf("DA = Rs.%f\n",da);
printf("HRA = Rs.%f\n",hra);
printf("CCA = Rs.%f\n",cca);
printf("Insurance = Rs.%f\n",insurance);
printf("PF = Rs.%f\n",pf);
printf("Gross Salary = Rs.%f\n",gs);
printf("Deductions = Rs.%f\n",deductions);
printf("Net Salary = Rs.%f\n",gs-deductions);
}
