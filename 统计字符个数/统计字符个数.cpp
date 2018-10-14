#include <stdio.h> 
int letter,number,empty,others;
void funcount(char str[])
{
     int i;
	 for(i=0;str[i]!='\0';i++)
	 {
	 if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
     letter++;
	 else if(str[i]>='0'&&str[i]<='9')
		 number++;
     else if(str[i]==' ')
		 empty++;
	 else 
		 others++;
	 }
	 return;
}
void main()
{
	char string[80];
        
     letter=0;number=0;empty=0;others=0;
gets(string);
	    puts(string);
	 funcount(string);
		
		printf("letter=%d\n",letter);
	    printf("number=%d\n",number);
	    printf("empty=%d\n",empty);
	    printf("others=%d\n",others);
		return;
}

