#include <stdio.h>
int main()
{
//Mp is Magic power in solo leveling to determine rank and dungeuns for hunters
int mp;
printf("Enter The magic power of the person: ");
scanf("%d",&mp);
if(mp>=10000)
{
	printf("Hunter with %d mp is S rank",mp);
}
else if(mp>=8000&&mp<10000)
{
	printf("Hunter with %d mp is A rank",mp);
}
else if(mp>=6000&&mp<8000)
{
	printf("Hunter with %d mp is B rank",mp);
}	

else if(mp>=4000&&mp<6000)
{
	printf("Hunter with %d mp is C rank",mp);
}
else if(mp>=2000&&mp<4000)
{
	printf("Hunter with %d mp is D rank",mp);
}

else if(mp<=0)
{
	printf("This is a Normal Human!");

}
else
{
	printf("Hunter with %d mp is E rank",mp);
}
return 0;
} 
