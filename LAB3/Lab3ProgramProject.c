#include <stdio.h> 

int main( void ) { 
 
          int y, m, d, total, leap;
		
		
          printf( "Enter date (dd/mm/yyyy): \n" ); 
		  scanf("%d/%d/%d",&d,&m,&y); 
		  
		 
    
	if (y%100==0 && y%400==0)
		  {
			  leap=1;
			   
		  }
	else if (y%100==0)
		  {
			  leap=0;
			   
		  }
	else if (y%4==0)
		  {
			  leap=1;
			   
		  }
    else
	      { 
              leap=0;
			   
          }
    
   
          
		  if(leap==1)
		  {
			   
			  if(m==1) 
			  {
				  total=d;
			  }
			  if(m==2) //+jan
			  {
				  total=31+d;
			  }
			  else if(m==3) //+feb
			  {
				  total=60+d;
			  }
			  else if(m==4) //+march
			  {
				  total=91+d;
			  }
			  else if(m==5) //+apr
			  {
				  total=121+d;
			  }
			  else if(m==6) //+may
			  {
				  total=152+d;
			  }
			  else if(m==7) //+jun
			  {
				  total=182+d;
			  }
			  else if(m==8) //+july
			  {
				  total=213+d;
			  }
			  else if(m==9) //+aug
			  {
				  total=244+d;
			  }
			  else if(m==10) //+sept
			  {
				  total=274+d;
			  }
			  else if(m==11) //+oct
			  {
				  total=305+d;
			  }
			  else if(m==12) //+nov
			  {
				  total=335+d;
			  }
		  }
		  if(leap==0)
		  {
			  if(m==1) 
			  {
				  total=d;
			  }
			  else if(m==2) //+jan
			  {
				  total=31+d;
			  }
			  else if(m==3) //+feb
			  {
				  total=59+d;
			  }
			  else if(m==4) //+march
			  {
				  total=90+d;
			  }
			  else if(m==5) //+apr
			  {
				  total=120+d;
			  }
			  else if(m==6) //+may
			  {
				  total=151+d;
			  }
			  else if(m==7) //+jun
			  {
				  total=181+d;
			  }
			  else if(m==8) //+july
			  {
				  total=212+d;
			  }
			  else if(m==9) //+aug
			  {
				  total=243+d;
			  }
			  else if(m==10) //+sept
			  {
				  total=273+d;
			  }
			  else if(m==11) //+oct
			  {
				  total=304+d;
			  }
			  else if(m==12) //+nov
			  {
				  total=334+d;
			  }
		  }
	printf( "The day number for that date is: %d \n", total);
			  
    return 0; 
} 