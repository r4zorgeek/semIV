/* Time Complexity Analysis */

#include<stdio.h>

//Single For loop
// void main(){
// 	int init=1;
// 	int count=0;
// 	int forloop=1;
// 	for(int i=0;i<5;i++){
// 		printf("* ");forloop+=1;count+=1;
// 	}
// 	printf("\ninit = %d forloop body = %d printing counter = %d\nTotal actual time : %d\n",init,forloop,count,(init+forloop+count));
// }

//Dobule for loop
void main(){
int innerinit = 0;
int outerinit = 0;
int innerforbody=0;
int outerforbody=0;
int innerforexit=0;
int outerforexit=0;
int forbodyoutercompare,forbodyinnercompare=0;
outerinit+=1;
for(int i=0;i<8;i++){
	innerinit+=1;
	forbodyoutercompare+=1;
	for(int j=0;j<8;j++){
		innerforbody+=1;
		printf("* ");
		forbodyinnercompare+=1;
	}
	printf("\n");
	innerforexit+=1;
	outerforbody+=1;
}
outerforexit+=1;
int actual = outerinit + innerinit + (innerforbody*outerforbody) + (forbodyinnercompare*forbodyoutercompare)+ innerforexit + outerforexit;
printf("\napprox running time = %d",(innerforbody*outerforbody));
printf("\nactual running time = %d\n",actual);
}

//Dobule for loop with if else

// void main(){
// int innerinit = 0;
// int outerinit = 0;
// int innerforbody=0;
// int outerforbody=0;
// int innerforexit=0;
// int outerforexit=0;
// int forbodyoutercompare,forbodyinnercompare=0;
// outerinit+=1;
// for(int i=0;i<5;i++){
// 	innerinit+=1;
// 	forbodyoutercompare+=1;
// 	for(int j=i+1;j<5;j++){
// 		innerforbody+=1;
// 		printf("* ");
// 		forbodyinnercompare+=1;
// 	}
// 	innerforexit+=1;
// 	outerforbody+=1;
// }
// outerforexit+=1;
// int actual = outerinit + innerinit + (innerforbody*outerforbody) + (forbodyinnercompare*forbodyoutercompare)+ innerforexit + outerforexit;
// printf("\napprox running time = %d",(innerforbody*outerforbody));
// printf("\nactual running time = %d\n",actual);
// }

