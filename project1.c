#include<stdio.h>
#include<math.h>
int main(){
	int age,days,hours,minutes;
	printf("Enter the age in years:");
	scanf("%d",&age);
	days=age*365;
	hours=days*24;
	minutes=days*60*24;
	printf("You have been alive for:%d days,%d hours,%d minutes. ",days,hours,minutes);
	return 0;
}