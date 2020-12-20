#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define gfxblt {\
	if(num[i] == '0'){\
	og = 0;\
	ot = 0;\
	printf("\n%s", ngfx);\
	}\
	else\
	if(num[i] == dnum[0]){\
	og = group[0];\
	ot = third[0];\
	printf("\n%s", ngfx1);\
	}\
	else\
	if(num[i] == dnum[1]){\
	og = group[1];\
	ot = third[1];\
	printf("\n%s", ngfx2);\
	}\
	else\
	if(num[i] == dnum[2]){\
	og = group[2];\
	ot = third[2];\
	printf("\n%s", ngfx3);\
	}\
	else\
	if(num[i] == dnum[3]){\
	og = group[3];\
	ot = third[3];\
	printf("\n%s", ngfx4);\
	}\
	else\
	if(num[i] == dnum[4]){\
	og = group[4];\
	ot = third[4];\
	printf("\n%s", ngfx5);\
	}\
	else\
	if(num[i] == dnum[5]){\
	og = group[5];\
	ot = third[5];\
	printf("\n%s", ngfx6);\
	}\
	else\
	if(num[i] == dnum[6]){\
	og = group[6];\
	ot = third[6];\
	printf("\n%s", ngfx7);\
	}\
	else\
	if(num[i] == dnum[7]){\
	og = group[7];\
	ot = third[7];\
	printf("\n%s", ngfx8);\
	}\
	else\
	if(num[i] == dnum[8]){\
	og = group[8];\
	ot = third[8];\
	printf("\n%s", ngfx9);\
	}\
	else\
	if(num[i] == dnum[9]){\
	og = group[9];\
	ot = third[9];\
	printf("\n%s", ngfxx);\
	}\
	else\
	if(num[i] == dnum[10]){\
	og = group[10];\
	ot = third[10];\
	printf("\n%s", ngfxe);\
	}\
	else\
	if(num[i] == dnum[11]){\
	og = group[11];\
	ot = third[11];\
	printf("\n%s", ngfxd);\
	}\
}

int main(int argc, char *argv[]){
	//initializers
	int i, i2, i3, c, acnt, bcnt, hcnt, ocnt, abdif = 0, m, tn1, tn2, gn1, gn2, tsum, gsum, overd, overg, og, og1, ot, ot1;
	char *a = (char*)malloc(sizeof(char)), *ac = (char*)malloc(sizeof(char)), *b = (char*)malloc(sizeof(char)), *bc = (char*)malloc(sizeof(char)), *output = (char*)malloc(sizeof(char)), outputc[] = {}, *num = (char*)malloc(sizeof(char));
	char const dnum[] = {'1','2','3','4','5','6','7','8','9','x','e','d'};
	int const group[] = {1,1,1,2,2,2,3,3,3,4,4,4}, third[] = {1,2,3,1,2,3,1,2,3,1,2,3}, nums[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//gfxsetup
	//layout
	char const ggfx[] = "   Group[1]    Group[2]    Group[3]    Group[4]";
	char const dgfx[] = " ___________ ___________ ___________ ___________";
	char const tgfx[] = " [1] [2] [3] [1] [2] [3] [1] [2] [3] [1] [2] [3]";
	char const lgfx[] = "  |   |   |   |   |   |   |   |   |   |   |   |";
	char const cgfx[] = " (1) (2) (3) (4) (5) (6) (7) (8) (9) (x) (e) (d)";
	//bullets
	char const ngfx[] = "  .   .   .   .   .   .   .   .   .   .   .   .";
	char const ngfx1[] = " (*)  .   .   .   .   .   .   .   .   .   .   .";
	char const ngfx2[] = "  .  (*)  .   .   .   .   .   .   .   .   .   .";
	char const ngfx3[] = "  .   .  (*)  .   .   .   .   .   .   .   .   .";
	char const ngfx4[] = "  .   .   .  (*)  .   .   .   .   .   .   .   .";
	char const ngfx5[] = "  .   .   .   .  (*)  .   .   .   .   .   .   .";
	char const ngfx6[] = "  .   .   .   .   .  (*)  .   .   .   .   .   .";
	char const ngfx7[] = "  .   .   .   .   .   .  (*)  .   .   .   .   .";
	char const ngfx8[] = "  .   .   .   .   .   .   .  (*)  .   .   .   .";
	char const ngfx9[] = "  .   .   .   .   .   .   .   .  (*)  .   .   .";
	char const ngfxx[] = "  .   .   .   .   .   .   .   .   .  (*)  .   .";
	char const ngfxe[] = "  .   .   .   .   .   .   .   .   .   .  (*)  .";
	char const ngfxd[] = "  .   .   .   .   .   .   .   .   .   .   .  (*)";
	
	//get user inputs
	for(i = 0; output[i] != '\0'; i++){
		a[i] = 0;
		b[i] = 0;
		output[i] = 0;
		outputc[i] = 0;
		}
	printf("\n  First Number: ");
	scanf("%s", &*a);
	acnt = strlen(a);
	printf("\n  Second Number: ");
	scanf("%s", &*b);
	bcnt = strlen(b);
	hcnt = acnt;
	if(acnt > bcnt){
		strcpy(bc, b);
		abdif = acnt - bcnt;
		hcnt = acnt;
	}
		else
	if(acnt < bcnt){
		strcpy(ac, a);
		abdif = bcnt - acnt;
		hcnt = bcnt;
	}
	//reorder chars
	//1st num acnt > bcnt
	if(acnt > bcnt){
	for (i = 0; i != abdif; i++){
		b[i] = '0';
    }
	for(i = abdif; i != acnt; i++){
		b[i] = bc[i-abdif];
	}
	}
	else
	//2nd num acnt < bcnt
	if(acnt < bcnt){
	for (i = 0; i != abdif; i++){
		a[i] = '0';
    }
	for(i = abdif; i != bcnt; i++){
		a[i] = ac[i-abdif];
	}
	}
	
	
	//**************
	//MAIN BODY LOOP
	//**************
	for(m = 0; m != hcnt; m++){
		overd = 0;
		overg = 0;
	//1st num loop setup
		for(i = 0; dnum != '\0'; i++){
			if(a[m] == dnum[i]){
				gn1 = group[i];
				tn1 = third[i];
				break;
			}
		}
		//2nd num loop setup
		for(i = 0; dnum != '\0'; i++){
			if(b[m] == dnum[i]){
				gn2 = group[i];
				tn2 = third[i];
				break;
			}
			else
			if(a[m] == '0'){
				gn1 = gn2;
				tn1 = 0;
				break;
			}
			else
			if(b[m] == '0'){
				gn2 = gn1;
				tn2 = 0;
				break;
			}
		}
	
	//logic
	tsum = tn1 + tn2;
	gsum = gn1 + gn2;
	if(tsum > 3){
		tsum = tsum - 3;
		overg = 1;
	}
	else
	if(tsum < 4){
		gsum = gsum - 1;
	}
	if(gsum > 4){
		overd = 1;
		gsum = gsum - 4;
	}
	else
	if(gsum < 1){
		gsum = 4;
	}
	
	//output setup
	for(i = 0; dnum[i] != '\0'; i++){
		if(gsum == group[i] && tsum == third[i]){
			output[m] = dnum[i];
		if(a[m-1] == '0' && b[m-1] == '0'){
			output[m-1] = dnum[1];
		}
		else
		if(m == 0 && overd == 1){
			printf("Attempting number shift overd");
			for(i2; i2 != 1;){
				outputc[0] = '2';
				outputc[1] = output[m];
				output[0] = '2';
				output[1] = outputc[1];
				break;
			}
		}
		
		if(m > 0 && overd == 0) if(a[m-1] != '0' && b[m-1] != '0'){
			for(i3 = 0; dnum[i3] != '\0'; i3++){
				if(output[m-1] == dnum[i3]){
				output[m-1] = dnum[i3-1];
				break;
				}
			}
		}
		break;
		}
	}
	}
	//*********************
	//END OF MAIN BODY LOOP
	//*********************
	
	//output/answer
	for(i = 0; i != hcnt; i++){
		strcpy(num, a);
		printf("\n                                                    [POSITION %d]", i);
		printf("\n%s\n%s\n%s\n%s\n%s\n%s", ggfx, dgfx, tgfx, lgfx, lgfx, cgfx);
		printf("\n%s", lgfx);
		printf("\n  |   |   |   |   |   |   |   |   |   |   |   |  %c  (1st number)", a[i]);
		gfxblt;
		printf("\n  ---------   ---------   ---------   ---------  --------------");
		og1 = og;
		ot1 = ot;
		strcpy(num, b);
		printf("\n%s", lgfx);
		printf("\n  |   |   |   |   |   |   |   |   |   |   |   |  %c  (2nd number)", b[i]);
		gfxblt;
		printf("\n  ---------   ---------   ---------   ---------  --------------");
		printf("\n\n  Groups : %d + %d  Thirds : %d + %d                %c  (Position %d Sum)", og1, og, ot1, ot, output[i], i); 
	}
	printf("\n\n  Total: %s", output); 
	
	free(a);
	free(b);
	free(ac);
	free(bc);
	free(num);
	free(output);
	return 0;
}