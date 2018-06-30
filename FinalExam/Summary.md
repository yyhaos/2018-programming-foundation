#Qusetions:
#1	static
	int f(int n)    //with static
	{
 	   static int ff=1;    //static not only work in this .cpp file , see static_2 for extral example
 	   ff=n*ff;
 	   return ff;
	}
        int main ()
        {
            int f(int n);
            for(int i=1;i<=4;i++)
            {
                printf("%d ",f(i));
            }
            //  result  :   1 2 6 24
            return 0;
        }

#2	which is the correct character constant
	'\010'	or "A"	or D	or -285
	'A' == '\001' == '\x41' == 65
#3	printf("%f", 0.5)==> 0.500000
	there are always 6 digits behind the decimal point	
#Ans:
1	static.cpp	static_2.cpp	static_ff.cpp
2	character constant.cpp
3	test%f.cpp