#include<stdio.h>
#include<string.h>
typedef struct player{
	char name[30];
	int Runs;
	int Wickets;
	int Matches;
}player;

void addPlayer();
void sortPlayer();
void displayPlayer();

player arr[10];
int playerCount=0;

int main()
{
	while(1)
	{
		int ch;
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		printf("1.Add Player\n2.Sort Player\n3.Display Players\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:addPlayer();
					break;
			case 2:sortPlayer();
					break;
			case 3:displayPlayer();
					break;
			case 4: return 0;
			default:printf("INVALID CHOICE\n");
		}
	}

}

void addPlayer()
{
	if(playerCount>=11)
	{
		printf("Players are full.\n");
		return;
	}
	fflush(stdin);
	player p;
	printf("Enter Player name:");
	fgets(p.name,sizeof(p.name),stdin);
	p.name[strcspn(p.name, "\n")] = '\0';
	printf("Enter runs:");
	scanf("%d",&p.Runs);
	printf("Enter wickets:");
	scanf("%d",&p.Wickets);
	printf("Enter number of matches he played:");
	scanf("%d",&p.Matches);
	printf("Added successfully\n");
	arr[playerCount] = p;
	playerCount++;
}

void sortPlayer()
{
	player brr[11];
	player temp;
	for(int i=0;i<playerCount;i++)
		brr[i]=arr[i];
	for(int i=0;i<playerCount;i++)
	{
		for(int j=0;j<playerCount;j++)
		{
			if(brr[i].Runs>brr[j].Runs)
			{
				temp=brr[j];
				brr[j]=brr[i];
				brr[i]=temp;
			}
		}
	}
	printf("Player Name\tRuns\tWickets\tMatches Played");
	for(int i=0;i<playerCount;i++)
	{
		printf("\n%s\t",brr[i].name);
		printf("%d\t",brr[i].Runs);
		printf("%d\t",brr[i].Wickets);
		printf("%d\t\n",brr[i].Matches);
	}
}

void displayPlayer()
{
	if(playerCount<=0)
	{
		printf("No player Record to display.\n");
		return;
	}
	printf("Player Name\tRuns\tWickets\tMatches Played");
	for(int i=0;i<playerCount;i++)
	{
		printf("\n%s\t\t",arr[i].name);
		printf("%d\t",arr[i].Runs);
		printf("%d\t",arr[i].Wickets);
		printf("%d\t\n",arr[i].Matches);
	}
}
