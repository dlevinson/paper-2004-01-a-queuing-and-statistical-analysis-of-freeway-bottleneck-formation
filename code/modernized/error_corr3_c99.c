/*This program is written be Shantanu Das. It's purpose is to calibrate the detector counts on a freeway section*/
/*First successful run was achieved on 4th December, 2001*/

# define maxarray_size 20 /*The maximum array size is the max number of detector combination sums and will be changed as need be*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int a,counts[maxarray_size], diff[maxarray_size],array_size; /*Dynamic memory allocation will be done for diff[]*/
	
/*Several user-defined functions have been used to ease program logic flow and debugging*/
void read_counts(void);
void find_diff();
void least_pos(void);
void truth_couplet_adjust(void);
void calibrate_counts(void);
void calibrate_left(void);
void calibrate_right(void);
void calibrate_left_two(void);
void calibrate_left_three(void);
void calibrate_right_two(void);
void calibrate_right_three(void);

int main(void)
{				/*Get the number of sums of detector combinations*/
	do
			{ 
				printf("How many detector combination sums are there?" );
				scanf("%d", &array_size);
			}
	while (array_size<1 || array_size>maxarray_size);

read_counts();
find_diff();
least_pos();
calibrate_counts();

return 0;
}

 
	
void read_counts() /*Get the sums of detector combinations*/
	{
		int i;
		
		printf("Enter the sums of the detector combination counts: \n");
		for (i=0; i<array_size; i++)
			scanf("%d", &counts[i]);
	}
	
void find_diff() /*Find the differences between alternately successive detector combination sums and print them out*/

	{ 
		int i,sub;
			
		printf("The differences are:\n");
		
		for(i=0,a=0;i<array_size; i=i+2,a++)
			{	
				sub=(counts[i]-counts[i+1]);
				diff[a]=abs(sub);
				printf("%d\n", diff[a]);
			}
	}

void least_pos() /*Show the position where the least difference and thus the truth couplet occurs*/
{ 
	int i,n,min=diff[0];
	int *val;
	val=(int *)malloc(sizeof(int));
	
	for (i=0; i<a; i++)
		
		{
			if (diff[i]<min)
				{
					min=diff[i];
				}
		}
	for (i=0;i<a;i++)
		{
			if (min==diff[i])
		  	n=i+1;
		 }
			
	printf("The minimum difference between detector combination counts is found in\n");
	printf("section %d of the freeway, where one section is defined as lying between \n", n);
	printf("two consecutive detector combinations.\n\n");
	printf("So this couple of detector sum combinations is labeled as the truth couplet.\n\n");
	
	free(val);
	
	truth_couplet_adjust();
}

// Adjust the values in the truth couplet
	
void truth_couplet_adjust()

{   
	int p,q,c,n1,n2,n3,n4;
	float r1, r2;
	
	printf("Enter the upstream and downstream sums of the detector combinations (truth couplet)  respectively:\n");
	scanf("%d %d", &p, &q);
		
	printf("Enter the upstream freeway and ramp counts respectively:\n");
	scanf("%d %d", &n1, &n2);
	
	printf("Enter the downstream freeway and ramp counts respectively:\n");
	scanf("%d %d", &n3, &n4);
	
	c=p-q;
	
	r1=n1/(n1+n2);
	r2=n3/(n3+n4);
	
	printf("\n%f%3f\n\n",r1,r2);
	
	if(c>0)
		{	n1=n1-((c/2)*r1);
			n2=n2-((c/2)*(1-r1));
			
			n3=n3+((c/2)*r2);
			n4=n4+((c/2)*(1-r2));
			
		}
	else
		{
			c=-c;
			n1=n1+((c/2)*r1);
			n2=n2+((c/2)*(1-r1));
			
			n3=n3-((c/2)*r2);
			n4=n4-((c/2)*(1-r2));
		}
	
	printf("The adjusted upstream freeway and ramp counts of the truth couplet are %d and %d respectively.\n", n1, n2);
	printf("The adjusted downstream freeway and ramp counts of the truth couplet are %d and %d respectively.\n", n3, n4);
}

void calibrate_counts() /*Calibration of detector combination counts start*/
{
	
	int a, b, i;
	
	printf("How many sections are there to the left and right of the truth couplet respectively ? \n");
	scanf("%d%d", &a, &b);
	
	printf("The case where two detector combinations are involved in calibration immediately toward the\n");
	printf("left is labelled as case 1\n");
	printf("Case 2 is where three detector combinations are involved\n");

	for (i=1; i==a; i++)	
		calibrate_left();
		
	printf("The rightward calibration involves the same two cases talked about for leftward calibration.\n");
	
	for (i=1; i==b; i++)
		calibrate_right();
}

void calibrate_left() /*Calibration of detector combinations toward the left of the truth couplet starts*/
{
	int z;
	
	printf("What is the case here and now (Type '1' or '2') ?\n");
	scanf("%d", &z);
	
	if (z==1)
		calibrate_left_two();
	else 
		calibrate_left_three();
}

void calibrate_left_two()
	{
		int m, c1, c2, d;
		float r1, r2;
		
		printf("Now whats the true count ?\n");
		scanf("%d", &m);
		
		printf("Enter the freeway and off-ramp counts to be calibrated respectively.\n\n");
		scanf("%d %d", &c1, &c2);
		
		d=m-(c1-c2);
		
		r1=c1/(c1+c2);
		
		r2=1-r1;
		
		if(d<0)
			{
				c1=c1-abs(d)*r1;
				c2=c2-abs(d)*r2;
			}
		else
			{
				c1=c1+abs(d)*r1;
				c2=c2+abs(d)*r2;
			}
		printf("The new, calibrated values of freeway and ramp counts are %d and %d respectively.\n", c1, c2);
	}

void calibrate_left_three()
	{
		int m, c1, c2, c3, d;
		float r1, r2, r3;
		
		printf("Now whats the true count ?\n");
		scanf("%d", &m);
		
		printf("Enter the freeway count to be calibrated:\n");
		scanf("%d", &c1);
		
		printf("Enter the on ramp count to be calibrated:\n");
		scanf("%d", &c2);
		
		printf("Enter the on ramp count to be calibrated:\n");
		scanf("%d", &c3);
		
		d=m-(c1+c2-c3);
		
		r1=c1/(c1+c2+c3);
		r2=c2/(c1+c2+c3);
		r3=1-(r1+r2);
			
		if(d<0)
			{
				c1=c1-abs(d)*r1;
				c2=c2-abs(d)*r2;
				c3=c3-abs(d)*r3;
			}
		else
			{
				c1=c1+abs(d)*r1;
				c2=c2+abs(d)*r2;
				c3=c3+abs(d)*r3;
			}
		printf("The new calibrated values of the freeway and ramp counts, respectively, are:\n");
		printf("%d %3d %3d", c1, c2, c3);
	}
	
void calibrate_right() /*Calibration of detector combinations toward the right of the truth couplet starts*/
	{
	int z;
	
	printf("What is the case here and now (Type '1' or '2') ?\n");
	scanf("%d", &z);
	
	if (z==1)
		calibrate_right_two();
	else 
		calibrate_right_three();
	}
	
void calibrate_right_two()
	{
		int m, c1, c2, d;
		float r1, r2;
		
		printf("Now whats the true count ?\n");
		scanf("%d", &m);
		
		printf("Enter the freeway and on-ramp counts to be calibrated respectively.\n");
		scanf("%d %d", &c1, &c2);
		
		d=m-(c1-c2);
		
		r1=c1/(c1+c2);
		
		r2=1-r1;
		
		if(d<0)
			{
				c1=c1-abs(d)*r1;
				c2=c2-abs(d)*r2;
			}
		else
			{
				c1=c1+abs(d)*r1;
				c2=c2+abs(d)*r2;
			}
		printf("The new, calibrated values of freeway and ramp counts are %d and %d respectively.\n", c1, c2);
	}			
			
void calibrate_right_three()
	{
		int m, c1, c2, c3, d;
		float r1, r2, r3;
		
		printf("Now whats the true count ?\n");
		scanf("%d", &m);
		
		printf("Enter the freeway count to be calibrated:\n");
		scanf("%d", &c1);
		
		printf("Enter the off ramp count to be calibrated:\n");
		scanf("%d", &c2);
		
		printf("Enter the on ramp count to be calibrated:\n");
		scanf("%d", &c3);
		
		d=m-(c1+c2-c3);
		
		r1=c1/(c1+c2+c3);
		r2=c2/(c1+c2+c3);
		r3=1-(r1+r2);
			
		if(d<0)
			{
				c1=c1-abs(d)*r1;
				c2=c2-abs(d)*r2;
				c3=c3-abs(d)*r3;
			}
		else
			{
				c1=c1+abs(d)*r1;
				c2=c2+abs(d)*r2;
				c3=c3+abs(d)*r3;
			}
		printf("The new calibrated values of the freeway and ramp counts, respectively, are:\n");
		printf("%d %3d %3d", c1, c2, c3);
	}		
