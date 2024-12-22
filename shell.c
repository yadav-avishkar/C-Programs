#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
//#include<sys/wait.h>

void count(char option[],char fname[])
{
	int handle,ccnt=0,wcnt=0,lcnt=0;
	char ch;

	if(handle==-1)
	{
		printf("Unable open the file\n",fname);
		return;
	}
	while(read(handle,&ch,1))
	{
		ccnt++;
		if(ch==' '||ch=='\t')
		{
			wcnt++;
		}
		else if(ch=='\n')
		{
			lcnt++;
			wcnt++;
		}
	}
	close(handle);

	if(strcmp(option,"C")==0)
	{
		printf("\nTotal no. of char in file=%d\n",ccnt);
	}
	else if(strcmp(option,"W")==0)
	{
		printf("\nTotal no. of words in file=%d\n",wcnt);
	}
	else if(strcmp(option,"W")==0)
	{
		printf("\nTotal no. of Line in file=%d\n",lcnt);
	}
	else
	{
		printf("Invalid option !!!!\n");
	}
}

int main()
{
	char cmd[40],tok1[20],tok2[40],tok3[20],tok4[20];
	int n;

	while(1)
	{
		printf("\nMYSHELL$]");
		fgets(cmd,40,stdin);

		n=sscanf(cmd,"%s%s%s%s",tok1,tok2,tok3,tok4);

		switch(n)
		{
			case 1:
				if(fork()==0)
				{
					execlp(tok1,tok1,NULL);
				}
				wait(0);
				break;

			case 2:
				if(fork()==0)
				{
					execlp(tok1,tok1,tok2,NULL);
				}
				wait(0);
				break;
			case 3:
				if(strcmp(tok1,"count")==0)
				{
					count(tok2,tok3);
				}
				else
				{
					if(fork()==0)
					{
						execlp(tok1,tok1,tok2,tok3,NULL);
					}
					wait(0);
				}
				break;
			case 4:
				if(fork()==0)
				{
					execlp(tok1,tok1,tok2,tok3,tok4,NULL);
				}
				wait(0);
				break;
		}
	}

}