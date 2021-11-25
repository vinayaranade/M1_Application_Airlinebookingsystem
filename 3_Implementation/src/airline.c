void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); fflush(stdin);
}



void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct mufti_airline*)malloc(sizeof(struct mufti_airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct mufti_airline *)malloc(sizeof(struct mufti_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
} 



void savefile()
{
	FILE *fpointer = fopen("mufti records", "w");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800);
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);
		fprintf(fpointer, "%-15s", stream->name);
		fprintf(fpointer, "%-15s", stream->email);
        fprintf(fpointer, "%-15s", stream->destination);
        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file (mufti records)");
	fclose(fpointer);
}


void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;
	}

}


void cancel()
{
	stream = begin;
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:");
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");

}