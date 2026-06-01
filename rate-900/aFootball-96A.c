#include <stdio.h>
#include <string.h>

int main(){
	
	char word[101];
	int sumOfZeros = 0;
	int sumOfOnes = 0;
	int i = 0;
	if(fgets(word,101,stdin) == NULL)
		return 1;

	for (char c = word[0]; c != '\0'; c = word[i]){
		if (c == '1'){
			sumOfZeros = 0;
			sumOfOnes++;
		}
		if (c == '0'){
			sumOfZeros++;
			sumOfOnes = 0;
		}

		if (sumOfZeros == 7 || sumOfOnes == 7){
			break;
			printf("YES");}
				

		i++;
	}

	printf("%d\n%d\n",sumOfOnes, sumOfZeros); 
	
	



	return 0;

}
