#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	typedef enum {false, true} bool;
	
	bool pass1 = false;
	bool pass2 = false;
	bool pass3 = false;
	bool check = true;
	
	int pin = 0;
	while (pass1 == false)
	{
		printf("Please Enter 4 Digit PIN: ");
		scanf("%d", &pin);
		if(pin == 9865){
			pass1 = true;
		} else {
			printf("INCORRECT\n");
		}
	}
	printf("ACCEPTED\n\n");
	
	
	char food[13];
	char answer[13] = {'P', 'e', 'a', 'c', 'h', 'C', 'o', 'b', 'b', 'l', 'e', 'r', '\0'};
	printf("What is you favorite food?\n");
	while (pass2 == false)
	{
	    check = true;
		printf("Answer: ");
		scanf("%s", food);
		food[13] = '\0';
		for (int i = 1; i <= 13; i = i + 1){
	    	if(food[i] != answer[i]){
		    	check = false;
	    	}
		}
	   	if(check){
	    	pass2 = true;
	   	} else {
	    	printf("INCORRECT\n");
	   	}
	}
	printf("ACCEPTED\n\n");
	
	char password[7];
	char correct[7] = {'f', 'i', 'z', 'z', 'l', 'e', '\0'};
	while (pass3 == false)
	{
	    check = true;
		printf("Please Enter Password: ");
		scanf("%s", password);
		password[7] = '\0';
		for (int i = 1; i <= 7; i = i + 1){
	    	if(password[i] != correct[i]){
		    	check = false;
	    	}
		}
	   	if(check){
			pass3 = true;
		} else {
			printf("INCORRECT\n");
		}
	}
	printf("ACCEPTED\n\n");
	
	printf("Welcom back, Mr. Wright!\n");
	
	return 0;
}

