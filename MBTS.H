#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
template <class t>
class Mathematics
{

  public:


	double area_of_circle(t r)	//r is radius
	{
	 double res;
	 res=(3.14*r*r);
	 return res;
	}



	double perimeter_of_circle(t r)		//r is radius
	{
	 return (2*3.14*r);
	}



	t sum_of_two(t a,t b)
	{
	 return (a+b);
	}



	t sub_of_two(t a,t b)
	{
	 return (a-b);
	}



	long mod_of_two(long a,long b)
	{
	 return (a%b);
	}



	t max_of_two(t a,t b)
	{
	 if(a>b)
	 return a;
	 else
	 return b;
	}



	t max_of_three(t a,t b,t c)
	{
	 if(a>b)
	 return a;
	 else if(b>c)
	 return b;
	 else
	 return c;
	}



	t min_of_two(t a,t b)
	{
	 if(a<b)
	 return a;
	 else
	 return b;
	}



	t min_of_three(t a,t b,t c)
	{
	 if(a<b)
	 return a;
	 else if(b<c)
	 return b;
	 else
	 return c;
	}



	long power(int x,int y)
	{
	 long res=1;
	 for(int i=1;i<=y;i++)
	 {
	  res=res*x;
	 }
	 return res;
	}




	void roots_of_quadratic(int a,int b,int c)
	{
	 int d;
	 float r1,r2,t1;
	 d=((b*b)-(4*a*c));
	 if(d==0)
	 {
	  cout<<"roots are real and equal"<<endl;
	  r1=r2=-b/(2*a);
	  cout<<r1<<endl<<r2<<endl;
	 }
	 else if(d>0)
	 {
	  cout<<"roots are real and unequal"<<endl;
	  r1=(-b+sqrt(d))/(2.0*a);
	  r2=(-b-sqrt(d))/(2.0*a);
	  cout<<r1<<endl<<r2<<endl;
	 }
	 else
	 {
	 cout<<"roots are imaginary"<<endl;
	 r1=-b/(2*a);
	 t1=sqrt(-d)/(2.0*a);
	 cout<<r1<<"+i"<<t1<<endl;
	 cout<<r2<<"-i"<<t1<<endl;
	 }
	}





	long sum_of_natural(int n)	//n  is number given by the user
	{
	 return ((n*(n+1))/2);
	}





	long sum_of_squares_ofNatural(int n)	//n  is number given by the user
	{
	 return (((n*(n+1))*((2*n)+1))/6);
	}


	long sum_of_cubes_ofNatural(int n)	//n  is number given by the user
	{
	 return (((n*n)*((n+1)*(n+1)))/4);
	}




	long sum_of_evenNatural(int n)		//n  is number given by the user
	{
	 return (2*n);
	}



	long sum_of_oddNatural(int n)

	{
	 return ((2*n)-1);
	}



	float ap_of_three(int a,int b,int c)
	{
	 b=(a+c)/2;
	 return b;
	}



	float gp_of_three(int a,int b,int c)
	{
	 float res;
	 res=a*c;

	 res=sqrt(res);
	}




	float hp_of_three(int a,int b,int c)
	{
	 return ((2*a*c)/(a+c));
	}




	double circumference_of_circle(t r)	//r is radius
	{
	 return (2*3.14*r);
	}



	double vol_of_cube(t x)		//x is side of cube
	{
	 return(x*x*x);
	}



	double surfaceArea_of_cube(t x)		//x is side of cube
	{
	 return (6*x*x);
	}



	double vol_of_cylinder(t r,t h)
	{
	 return(3.14*r*r*h);
	}



	double lateralsurface_of_cylinder(t r,t h)
	{
	 return(2*3.14*r*h);
	}


	double surfacearea_of_cylinder(t r,t h)
	{
	 return ((3.14*r*r*h)+(2*3.14*r*h));
	}





	double vol_of_sphere(t r)
	{
	 return ((4/3)*3.14*r*r*r);
	}



	double surfacearea_of_sphere(t r)
	{
	 return (4*3.14*r*r);
	}
	



	double vol_of_cone(t r,t h)
	{
	 return ((1/3)*3.14*r*r*h);
	}



	double lateralSurfaceArea_of_cone(t r,t h)
	{
	 return (3.14*r*h);
	}



	double area_of_triangle(t base,t height)
	{
	 return ((0.5)*base*height);
	}
         



	double area_of_square(t s)	//s is side of square
	{
  	 return (s*s);
	}
	



	double perimeter_of_square(t s)		//s is side of square
	{
	 return (4*s);
	}




	double area_of_rectangle(t l,t b)	//l is length,b is breadth
	{
	 return (l*b);
	}



	double perimeter_of_rectangle(t l,t b)
	{
	 return (2*(l+b));
	}



	double find_ncr(int n,int r)
	{
	 double res=0,res1=0,res3=0,res4=0;
	 res=factorial(r);
	 double res2;


	 res3=factorial(n-r);

	 res4=res*res3;

	 res1=factorial(n);

	 res2=(res1/res4);

	 return res2;
	}




	double find_npr(int n,int r)
	{
	 double res;
 	 res=(factorial(n)/factorial(n-r));
 	 return res;
	}





	inline long factorial(int n)
	{
	 int i;
	 long res;


	  for(i=1,res=1;i<=n;i++)
	  {
	   res=res*i;
	  }

	 return res;

	}





	int gcd_of_2(int x,int y)
	{
	 int n,r,result,i;
 	 n=x;
 	 r=y;
 	 while(r!=0)
  	 {
  	  i=r;
  	  r=n%r;
  	  n=i;
 	 }
 	 result=n;
 	 return result;
	}



	int lcm_of_2(int x,int y)
	{
	 int n,result;
 	 n=gcd_of_2(x,y);
 	 result=(x*y)/n;
 	 return result;
	}






	long square(t n)
	{
	 return (n*n);
	}



	long cube(t n)
	{
	 return (n*n*n);	
	}



	void print_multiplicationTable(int n,int n1)
	{
	 int i;
	 for(i=1;i<=n1;i++)
	 {
	  cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	 }
	}




	t sum_of_userNumbers(int n)		//n is no of numbers user want to enter
	{
	 t a,sum=0;
	 int i;
	 for(i=1;i<=n;i++)
	 {
	  cout<<"enter number "<<endl;
	  cin>>a;
	  sum+=a;
	 }
	 return sum;
	}



	t avg_of_usersNumbers(int n)		//n is no of numbers user want to enter
	{
	 t a,sum=0,avg;
	 int i;
	 for(i=1;i<=n;i++)
	 {
	  cout<<"enter number"<<endl;
	  cin>>a;
	  sum+=a;
	 }
	 avg=sum/n;
	 return avg;
	}



	double div_of_two(t a,t b)
	{
	 if(b==0)
	 cout<<"divide by zero not possible"<<endl;
	 else
	 return (a/b);
	}	

};




    template <class t1>
class General
{



    public:

	  void swap_of_2(t1 a,t1 b)	// a,b variables are template variables
	  {
	   t1 temp;	// t is a template variable
	   temp=a;
	   a=b;
	   b=temp;
	   cout<<a<<"\t"<<b<<endl;
	  }


	void pos_neg_zero(int a)	//a is number
	{
	 if(a>0)
	 cout<<"Given number is positive"<<endl;
	 else if(a<0)
	 cout<<"Given number is negative"<<endl;
	 else
	 cout<<"Given number is zero"<<endl;
	}



	void even_odd(int a)	//a is number
	{
	 if(a==0)
	 cout<<"neither even nor odd"<<endl;

	 else if(a%2==0)
	 cout<<"Given number is even"<<endl;
	 else
	 cout<<"Given number is odd"<<endl;
	}


	
	void check_leap_year(int a)
	{
	 if(a%4==0)
	 cout<<"Given year is leap year"<<endl;
	 else
	 cout<<"Given year is not a leap year"<<endl;
	}





	void vowel_consonent(char c)	//c is character 
	{
	 switch(c)
	 {
	  case 'a':
	  case 'e':
	  case 'i':
	  case 'o':
	  case 'u':
		   cout<<"given character is vowel"<<endl;
		   break;
	  default:
		  cout<<"given character is consonent"<<endl;
		  break;
	 }

	}		





	void printNatural_num(int n)	//natural numbers between 1 to n
	{
	 int i;
	 for(i=1;i<=n;i++)
	 {
	 cout<<i<<endl;
	 }
	}




	void printOdd_num(int n)	//print odd numbers between 1 to n
	{
	 int i;
  	 for(i=1;i<=n;i+=2)
	 {
	  cout<<i<<endl;
	 }
	}





	void printEven_num(int n)	//print even numbers between 2 to n
	{
	 int i;
	 for(i=2;i<=n;i+=2)
	 {
	  cout<<i<<endl;
	 }
	}



	void printNatural_num_rev(int n)	//print natural numbers between n to 1
	{
	 int i;
	 for(i=n;i>=1;i--)
	 {
	  cout<<i<<endl;
	 }
	}
	


	void printOdd_num_rev(int n)	//print odd natural numbers between n to 1
	{
	 int i;
	 if(n%2==1)
	 i=n;
	 else
	 i=n-1;
	 while(i>=1)
	 {
	  cout<<i<<endl;
	  i-=2;  
	 }
	}




	void printEven_num_rev(int n)	//print even natural numbers between n to 2
	{
	 int i;
	 if(n%2==0)
	 i=n;
	 else
	 i=n-1;
	 while(i>=2)
	 {
	  cout<<i<<endl;
	  i-=2;
	 }
	}




	inline long reverse(long n)
	{
	 int r;
	 long rev=0;
	 while(n!=0)
	 {
	  r=n%10;
	  rev=rev*10+r;
	  n=n/10;
         }
         return rev;
	}





	void check_palindrome(long n)
	{
         int r;
	 long rev=0,temp=0;
	 temp=n;
	 while(n!=0)
         {
	  r=n%10;
	  rev=rev*10+r;
	  n=n/10;
         }
         if(rev==temp)
	 cout<<temp<<" is palindrome"<<endl;
	 else
	 cout<<temp<<" is not a palindrome"<<endl;
	}








	void check_armstrong(int n)
	{
	 int temp,r,res;
	 temp=n;
	 res=0;
	 while(n!=0)
	 {
	  r=n%10;
	  res=res+r*r*r;
	  n=n/10;
	 }
	 if(temp==res)
	 cout<<temp<<" is armstrong number"<<endl;
	 else
	 cout<<temp<<" is not a armstrong number"<<endl;	 
	}





	void check_prime(int n)
	{
	 int i,count;
	 for(i=1,count=0;i<=n;i++)
	 {
	  if(n%i==0)
	  count++;
	 }
	 if(count==2)
	 cout<<n<<" is prime number"<<endl;
	 else
	 cout<<n<<" is not a prime number"<<endl;
	}







	void generateFibon_series(int n)
	{
	 int f1,f2,f3,i;
	 f1=0;
	 f2=1;
	 cout<<f1<<"\t"<<f2<<"\t";
	 for(i=1;i<=n;i++)
	 {
	  f3=f1+f2;
	  cout<<f3<<"\t";
	  f1=f2;
	  f2=f3;
	 }
	}




	void printPrime_num(int n)	//print prime numbers between 1 to n
	{
	 int i,j,count
	 for(i=1;i<=n;i++)
	 {
	  for(j=1,count=0;j<=i;j++)
	  {
	   if(i%j==0)
	   count++;
	   if(count==3)
	   break;
	  }
	  if(count==2)
	  cout<<i<<"is prime"<<endl;
	 }
	}




	void print_uppercase()
	{
	 char i;
 	 for(i=65;i<=90;i++)
 	 {
          cout<<i<<endl;
    	 }
    	}





	void print_lowercase()
	{
	 char i;
 	 for(i=97;i<=122;i++)
 	 {
    	  cout<<i<<endl;
    	 }
    	}





	void printUpper_consonents()
	{
	 int i;
	 char c;
	 for(i=65;i<=90;i++)
	 {
	  if(i==65||i==69||i==73||i=79||i==85)
	  {
	  continue;
	  }
          c=i; 
	  cout<<c<<endl;
	 }
	}





	void printUpper_vowels()
	{
	 char c;
	 int i;
	 for(i=65;i<=90;i++)
	 {
	  if((i==65)||(i==69)||(i==73)||(i==79)||(i==85))
	  {
	   c=i;
	   cout<<c<<endl;
	  }
	 }
	}





	void check_perfect(int n)
	{
	 int i,result;
 	 for(i=1,result=0;i<n;i++)
 	 {
   	  if(n%i==0)
    	  result=result+i;
 	 }
	 if(result==n)
	 cout<<n<<" is a perfect number "<<endl;
 	 else
 	 cout<<n<<" is not a perfect number"<<endl;
	}




	void printLower_vowels()
	{
	 char c;
	 int i;
	 for(i=97;i<=122;i++)
	 {
	  if((i=97)||(i==101)||(i==105)||(i==111)||(i==117))
	  {
	   c=i;
	   cout<<c<<endl;
	  }
	 }
	}




	void printLower_consonents()
	{
	 int i;
	 char c;
	 for(i=97;i<=122;i++)
	 {
	  if((i==97)||(i==101)||(i==105)||(i==111)||(i==117))
	  {
	  continue;
	  }
          c=i; 
	  cout<<c<<endl;
	 }
	}

};



	template <class t3>
class Arrays
{
   public:

	int i,j;	
	t3 ele;
	void createArray_1D(t3 a[50],int size)
	{

	 for(i=0;i<size;i++)
	 {
	  cin>>ele;
	  a[i]=ele;
	 }
	}



	void displayArray_1D(t3 a[50],int size)
	{

	 for(i=0;i<size;i++)
	 {
	  cout<<a[i]<<endl;
	 }
	}


	void displayArray_2D(t3 a[50][50],int r,int c)	//r is row size,c is column size
	{

	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   cout<<a[i][j]<<"\t";
	  }
	  cout<<endl;
	 }
	}





	void createArray_2d(t3 a[50][50],int r,int c)	//r is row size,c is column size
	{
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   cin>>ele;
	   a[i][j]=ele;
	  }
	 }
	}





	t3 sumOf_Array2D(t3 a[50][50],int r,int c)
	{
	 t3 sum=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   sum+=a[i][j];
	  }
	 }
	 return sum;
	}




	t3 sum_of_Array1D(t3 a[50],int size)
	{
	 t3 sum=0;
	 for(i=0;i<size;i++)
	 {
	  sum+=a[i];
	 }
	 return sum;
	}



	t3 avg_of_Array1D(t3 a[50],int size)
	{
	 t3 sum=0,avg;
	 sum=sum_of_Array1D(a,size);
	 avg=sum/size;
	 return avg;
	}



	t3 avg_of_Array2D(t3 a[50][50],int r,int c)
	{
	 t3 sum,avg;
	 sum=sumOf_Array2D(a,r,c);
	 avg=sum/(r+c);
	 return avg;
	}




	t3 max_of_Array1D(t3 a[50],int size)
	{
	 t3 max=a[0];
	 for(i=0;i<size;i++)
	 {
	  if(max<a[i])
	  max=a[i];
	 }
	 return max;
	}



	t3 max_of_Array2D(t3 a[50][50],int r,int c)	//r is row size,c is column size
	{
	 t3 max=a[0][0];
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(max<a[i][j])
	   max=a[i][j];
	  }
	 }
	 return max;
	}





	t3 min_of_Array1D(t3 a[50],int size)
	{
	 t3 min=a[0];
	 for(i=0;i<size;i++)
	 {
	  if(min>a[i])
	  min=a[i];
	 }
	 return min;
	}



	t3 min_of_Array2D(t3 a[50][50],int r,int c)	//r is row size,c is column size
	{
	 t3 min=a[0][0];
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(min>a[i][j])
	   min=a[i][j];
	  }
	 }
	 return min;
	}





	int no_of_posArray1D(t3 a[50],int size)
	{
	 int c=0;
	 for(i=0;i<size;i++)
	 {
	  if(a[i]>0)
	  c++;
	 }
	 return c;
	}



	int no_of_posArray2D(t3 a[50][50],int r,int c)		//r is rows,c is columns
	{
	 int c=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(a[i][j]>0)
	   c++;
	  }
	 }
	 return c;
	}




	int no_of_negArray1D(t3 a[50],int size)
	{
	 int c=0;
	 for(i=0;i<size;i++)
	 {
	  if(a[i]<0)
	  c++;
	 }
	 return c;
	}



	int no_of_negArray2D(t3 a[50][50],int r,int c)	 	//r is rows,c is columns
	{
	 int c=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(a[i][j]<0)
	   c++;
	  }
	 }
	 return c;
	}




	int no_of_zeroesArray1D(t3 a[50],int size)
	{
	 int c=0;
	 for(i=0;i<size;i++)
	 {
	  if(a[i]==0)
	  c++;
	 }
	 return c;
	}



	int no_of_zeroesArray2D(t3 a[50][50],int r,int c)	////r is rows,c is columns
	{
	 int c=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(a[i][j]==0)
	   c++;
	  }
	 }
	 return c;
	}




	void reverse_of_Array(t3 a[50],int size)
	{
	 int temp;
	 for(i=0,j=size-1;i<=j;i++,j--)
	 {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	 }
	}



	void sum_of_Array(t3 a[50],t3 b[50],t3 c[50],int size)
	{
	 for(i=0;i<size;i++)
	 {
	  c[i]=a[i]+b[i];
	 }
	}




	void sub_of_Array(t3 a[50],t3 b[50],t3 c[50],int size)
	{
	 for(i=0;i<size;i++)
	 {
	  c[i]=a[i]-b[i];
	 }
	}




	void mul_of_Array(t3 a[50],t3 b[50],t3 c[50],int size)
	{
	 for(i=0;i<size;i++)
	 {
	  c[i]=a[i]*b[i];
	 }
	}



	void mulArray_withEle(t3 a[50],int size,int ele)
	{
	 for(i=0;i<size;i++)
	 {
	  a[i]=a[i]*ele;
	 }
	}


	void gen_UnitMat(t3 a[50][50],int size)
	{
	 for(i=0;i<size;i++)
	 {
	  for(j=0;j<size;j++)
	  {
	   if(i==j)
	   a[i][j]=1;
	   else
	   a[i][j]=0;
	  }
	 }
	}






	void addOf_twoMat(t3 a[50][50],t3 b[50][50],t3 c[50][50],int r,int c1)	//r is rows,c is columns
	{
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c1;j++)
	  {
	   c[i][j]=a[i][j]+b[i][j];
	  }
	 }
	}




	void mulOf_twoMat(t3 a[50][50],t3 b[50][50],t3 c[50][50],int r1,int c1,int r2,int c2)
	{
	 int k;
	 if(c1!=r2)
	 cout<<"Matrix multiplication not possible"<<endl;
	 else
	 {
	  for(i=0;i<r1;i++)
	  {
	   for(j=0;j<c2;j++)
	   {
	    c[i][j=0;
	    for(k=0;k<c1;k++)
	    {
	     c[i][j]=c[i][j]+a[i][k]*b[k][j];
	    }
	   }
	  }
	 }
	}




	void transposeOf_mat(t3 a[50][50],int r,int c)
	{
	 int temp;
	 for(i=0;i<c;i++)
	 {
	  for(j=0;j<r;j++)
	  {
	   temp=a[j][i];
	   a[i][j]=temp;
	  }
	 }
	}





	t3 sum_diagonalEle(t3 a[50][50],int r,int c)		//r is rows,c is columns
	{
	 t3 sum=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(i==j)
	   sum+=a[i][j];
	  }
	 }
	 return sum;
	}




	void subOf_twoMat(t3 a[50][50],t3 b[50][50],t3 c[50][50],int r,int c1)	//r is rows,c1 is columns
	{
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c1;j++)
	  {
	   c[i][j]=a[i][j]-b[i][j];
	  }
	 }
	}





	t3 sum_nondiagonalEle(t3 a[50][50],int r,int c)
	{
	 t3 sum=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(i!=j)
	   sum+=a[i][j];
	  }
	 }
	 return sum;
	}




	int no_of_Even1D(t3 a[50],int size)
	{
	 int c=0;
	 for(i=0;i<size;i++)
	 {
	  if(a[i]%2==0)
	  c++;
	 }
	 return c;
	}



	int no_of_Odd1D(t3 a[50],int size)
	{
	 int c=0;
	 for(i=0;i<sizee;i++)
	 {
	  if(a[i]%2==1)
	  c++;
	 }
	 return c;
	}



	int no_of_Even2D(t3 a[50][50],int r,int c)	//r is rows,c is columns
	{
	 int c=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(a[i][j]%2==0)
	   c++;
	  }
	 }
	 return c;
	}





	int no_of_Odd2D(t3 a[50][50],int r,int c)
	{
	 int c=0;
	 for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
	   if(a[i][j]%2==1)
	   c++;
	  }
	 }
	 return c;
	}



};

       template <class t4>
class search_sortArray
{
 public:

	int i,j;

	void linearSearch_Array(t4 a[100],int size,t4 ele)
	{
	 int f=0;
	 for(i=0;i<size;i++)
	 {

	  if(ele==a[i])
	  {
	   cout<<"element found"<<endl;
	   f=1;
	   break;
	  }

	 }
	 if(f==0)
	 cout<<"element not found"<<endl;
	}





	void sortUsing_selection(t4 a[100],int size)
	{
	 t4 temp;
	 int ch;


	  cout<<"enter the choice in which way you want to change the order of the list"<<endl;
	  cout<<"1.ascending"<<endl<<"2.descending"<<endl;
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
			for(i=0;i<size-1;i++)
			{
			 for(j=i+1;j<size;j++)
			 {
			  if(a[i]>a[j])
			  {
			   temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
			  }
			 }
			}
			break;
	    case 2:

			for(i=0;i<size-1;i++)
			{
			 for(j=i+1;j<size;j++)
			 {
			  if(a[i]<a[j])
			  {
			   temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
			  }
			 }
			}
			break;

	   default:
		  cout<<"invalid choice yoou entered"<<endl;
	  }

	}


	void sortUsing_bubble(t4 a[100],int size)
	{
	 t4 temp;
	 int ch;

	  cout<<"enter the choice in which way you want to change the order of the list"<<endl;
	  cout<<"1.ascending"<<endl<<"2.descending"<<endl;
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
			for(i=0;i<size-1;i++)
			{
			 for(j=0;j<size-1-i;j++)
			 {
			  if(a[j]>a[j+1])
			  {
			   temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			  }
			 }
			}
			break;
	    case 2:
			for(i=0;i<size-1;i++)
			{
			 for(j=0;j<size-1-i;j++)
			 {
			  if(a[j]>a[j+1])
			  {
			   temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			  }
			 }
			}
			break;

	    default:
		cout<<"invalid choice you entered"<<endl;
	  }

	}









	void sortUsing_insertion(t4 a[100],int size)
	{
	 t4 ele;
	 int ch;

	  cout<<"enter the choice in which way you want to change the order of the list"<<endl;
	  cout<<"1.ascending"<<endl<<"2.descending"<<endl;
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
			for(i=0;i<size-1;i++)
			{
			 ele=a[i+1];
			 for(j=i;j>=0&&ele<a[j];j--)
			 {
			  a[j+1]=a[j];
			 }
			 a[j+1]=ele;
			}
			break;
	   case 2:

			for(i=0;i<size-1;i++)
			{
			 ele=a[i+1];
			 for(j=i;j>=0&&ele>a[j];j--)
			 {
			  a[j+1]=a[j];
			 }
			 a[j+1]=ele;
			}
			break;
	   case 3:
		exit(0);
	   case 4:
		 break;
	   default:
		cout<<"invalid choice you entered"<<endl;
	  }

	}






	void binarySearch_Array(t4 a[100],int size,t4 ele)
	{
	 int ele1,mid,low=0,up=size-1;
	 for(i=0;i<size-1;i++)
	 {
	  ele1=a[i+1];
	  for(j=1;j>=0&&ele<a[j];j--)
	  {
	   a[j+1]=a[j];
	  }
	  a[j+1]=ele1;
	 }
	 while(low<=up)
	 {
	  mid=(low+up)/2;
	  if(a[mid]==ele)
	  {
	   cout<<"element found"<<endl;
	   break;
	  }
	  else if(ele<a[mid])
	  up=mid-1;
	  else
	  low=mid+1;
	 }
	 if(low>up)
	 cout<<"element not found"<<endl;
	}






};
		       template<class T>
class Conversions:public General<T>
{
   public:


	int bin_to_dec(long n1)
	{
	 int i,n=0;
	 int result=0;
	 while(n1!=0)
	 {
	  i=n1%10;
	  result+=i*pow(2,n);
	  n++;
	  n1=n1/10;
	 }
	 return result;
	}







	void dec_to_bin(int n1)
	{
	 int r;
	 if(n1<=1)
	 {
	  cout<<n1;
	  return;
	 }
	 r=n1%2;
	 dec_to_bin(n1/2);
	 cout<<r;
	}






	long dec_to_oct(int n1)
	{
	 long result=0,result1;
	 int r;
	 while(n1!=0)
	 {
	 r=n1%8;
	 result=result*10+r;
	 n1=n1/8;
	 }
	 result1=reverse(result);
	 return result1;
	}







	int oct_to_dec(int n1)
	{
	 int r,result=0,n=0;
	 while(n1!=0)
	 {
	  r=n1%10;
	  result+=r*pow(8,n);
	  n++;
	  n1=n1/10;
	 }
	 return result;
	}








	long bin_to_oct(long n)
	{
	 int res=0,res1=0;
	 res1=bin_to_dec(n);
	 res=dec_to_oct(res1);
	 return res;
	}







	void oct_to_bin(int n)
	{
	 long res,res1;
	 res1=oct_to_dec(n);
	 dec_to_bin(res1);

	}





	float fahrenheit_to_celsius(float f)
	{
	 float res;
	 res=((5*f)-160)/9.0;
	 return res;
	}




	float celsius_to_fahrenheit(float c)
	{
	 float res;
	 res=((9*c)+160)/5;
	 return res;
	}











};
 template <class T1>
class Formats :public Mathematics<T1>
{
   public:



	void str1(int n)	//n is rows
	{
	  int i,j;
	  for(i=1;i<=n;i++)
	  {
	   for(j=1;j<=i;j++)
	   {
	    cout<<"*";
	   }
	   cout<<endl;
	  }
	}



	void str2(int n)	//n is rows
	{
	 int i,j;
	 for(i=n;i>=1;i--)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<"*";
	  }
	 cout<<endl;
	 }
	}



	void num2(int n)	//n is rows
	{
	 int i,j;
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<i;
	  }
	 cout<<endl;
	 }
	}


	void num4(int n)	//n is rows
	{
	 int i,j;
	 for(i=n;i>=1;i--)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<j;
	  }
	  cout<<endl;
	 }
	}




	void num1(int n)	//n is rows
	{
	 int i,j;
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<j;
	  }
	  cout<<endl;
	 }
	}




	void num5(int n)	//n is rows
	{
	 int i,j;
	 for(i=n;i>=1;i--)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<j;
	  }
	 cout<<endl;
	 }
	}





	void num6(int n)	//n is rows
	{
	 int i,j;
	 for(i=n;i>=1;i--)
	 {
	  for(j=i;j>=1;j--)
	  {
	  cout<<j;
	  }
	 cout<<endl;
	 }
	}




	void flodys_triangle(int n)	//n is rows
	{
	 int i,j;
	 int res=1;
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   cout<<res;
	   res++;
	  }
	  cout<<endl;
	 }
	}







	void pyramid(int n)	//n is rows
	{
	 int i,j;
	 int result=n;
	 for(i=1;i<=n;i++)
	 {
	  for(j=1;j<result;j++)
	   cout<<" ";
	  result--;
	  for(j=1;j<=2*i-1;j++)
	   cout<<"*";
	  cout<<endl;
	 }
	}








	void pascal_triangle(int n)	//n is rows
	{
	 int i,j;
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n-1-i;j++)
	  {
	   cout<<" ";
	  }
	  for(j=0;j<=i;j++)
	  {
	  cout<<((factorial(i)/(factorial(j))*factorial(i-j)));
	  }
	  cout<<endl;
	 }
	}


};

			   template<class S>
class mbts : public Arrays<S>,public search_sortArray<S>,public Formats<S>,public Conversions<S>
{
 public:


	mbts()
	{
	 clrscr();
	 cout<<"HEADER FILE DETAILS"<<endl<<"FUNCTION PROTOTYPES:"<<endl;

	 cout<<"1. int bin_to_dec(long n1);"<<endl;

	 cout<<"2. void dec_to_bin(int n1);"<<endl;

	 cout<<"3. long dec_to_oct(int n1);"<<endl;

	 cout<<"4. int oct_to_dec(int n1);"<<endl;

	 cout<<"5. long bin_to_oct(long n);"<<endl;

	 cout<<"6. void oct_to_bin(int n);"<<endl;

	 cout<<"7. float fahrenheit_to_celsius(float f);"<<endl;

	 cout<<"8. float celsius_to_fahrenheit(float f);"<<endl;

	 cout<<"9. double area_of_circle(t r);"<<endl;

	 cout<<"10. double primeter_of_circle(t r);"<<endl;


	 cout<<"11. templateType sum_of_two(templateType a,templateType b);"<<endl;

	 cout<<"12. templateType sub_of_two(templateType a,templateType b);"<<endl;

	 cout<<"13. long mod_of_two(long a,long b);"<<endl;

	 cout<<"14. double div_of_two(templateType a,templateType b);"<<endl;

	 cout<<"15. templateType max_of_two(templateType a,templateType b);"<<endl;

	 cout<<"16. templateType max_of_three(templateType a,templateType b,templateType c);"<<endl;

	 cout<<"17. templateType min_of_two(templateType a,templateType b);"<<endl;

	 cout<<"18. templateType min_of_three(templateType a,templateType b,templateType c);"<<endl;

	 cout<<"19. long power(int x,int y);"<<endl;

	 cout<<"20. void roots_of_quadtratic(int a,int b.int c);"<<endl;

	 cout<<"21. long sum_of_natural(int n);"<<endl;
		     getch();
	 cout<<"22. long sum_of_squares_ofNatural(int n);"<<endl;

	 cout<<"23. long sum_of_cubes_ofNatural(int n);"<<endl;

	 cout<<"24. long sum_of_evenNatural(int n);"<<endl;

	 cout<<"25. long sum_of_oddNatural(int n);"<<endl;

	 cout<<"26. int ap_of_three(int a,int b,int c);"<<endl;
			     getch();
	 cout<<"27. int gp_of_three(int a,int b,int c);"<<endl;

	 cout<<"28. int hp_of_three(int a,int b,int c);"<<endl;

	 cout<<"29. double circumference_of_circle(templateType r);"<<endl;

	 cout<<"30. double vol_of_cube(templateType x);"<<endl;

	 cout<<"31. double surfaceArea_of_cube(templateType x);"<<endl;

	 cout<<"32. double vol_of_cylinder(templateType r,templateType h);"<<endl;

	 cout<<"33. double lateralsurface_of_cylinder(templateType r,templateType h);"<<endl;

	 cout<<"34. double surfacearea_of_cylinder(templateType r,templateType h);"<<endl;

	 cout<<"35. double vol_of_sphere(templateType r);"<<endl;

	 cout<<"36. double surfacearea_of_sphere(templateType r);"<<endl;

	 cout<<"37. double vol_of_cone(templateType r,templateType h);"<<endl;

	 cout<<"38. double lateralSurfaceArea_of_cone(templateType r,templateType h);"<<endl;

	 cout<<"39. double area_of_triangle(templateType base,templateType height);"<<endl;

	 cout<<"40. double area_of_square(templateType s)"<<endl;

	 cout<<"41. double perimeter_of_square(templateType s);"<<endl;

	 cout<<"42. double area_of_rectangle(templateType l,templateType b);"<<endl;
			     getch();
	 cout<<"43. double perimeter_of_rectangle(templateType l,templateType b);"<<endl;

	 cout<<"44. double find_ncr( int n,int r);"<<endl;

	 cout<<"45. double find_npr(int n,int r);"<<endl;

	 cout<<"46. long factorial(int n);"<<endl;

	 cout<<"47. int gcd_of_2(int x,int y);"<<endl;

	 cout<<"48. int lcm_of_2(int x,int y);"<<endl;

	 cout<<"49. long square(templateType n);"<<endl;

	 cout<<"50. long cube(templateType n);"<<endl;

	 cout<<"51. void print_multiplicationTable(int n,int n1);"<<endl;

	 cout<<"52. templateType sum_of_userNumbers(int n);"<<endl;

	 cout<<"53. templateType avg_of_usersNumbers(int n);"<<endl;

	 cout<<"54. void swap_of_2(templateType a,templateType b);"<<endl;

	 cout<<"55. void pos_neg_zero(int a);"<<endl;

	 cout<<"56. void even_odd(int a);"<<endl;

	 cout<<"57. void check_leap_year(int a);"<<endl;

	 cout<<"58. void vowel_consonent(char c);"<<endl;

	 cout<<"59. void printNatural_num(int n);"<<endl;

	 cout<<"60. void printOdd_num(int n);"<<endl;

	 cout<<"61. void printEven_num(int n);"<<endl;

	 cout<<"62. void printNatural_num_rev(int n);"<<endl;
				     getch();
	 cout<<"63. void printOdd_num_rev(int n);"<<endl;

	 cout<<"64. void printEven_num_rev(int n);"<<endl;

	 cout<<"65. long reverse(long n);"<<endl;

	 cout<<"66. void check_palindrome(long n);"<<endl;

	 cout<<"67. void check_armstrong(int n);"<<endl;

	 cout<<"68. void check_prime(int n);"<<endl;

	 cout<<"69. void generateFibon_series(int n);"<<endl;

	 cout<<"70. void printPrime_num(int n);"<<endl;

	 cout<<"71. void print_uppercase();"<<endl;

	 cout<<"72. void print_lowercase();"<<endl;

	 cout<<"73. void printUpper_consonents();"<<endl;

	 cout<<"74. void printUpper_vowels();"<<endl;

	 cout<<"75. void check_perfect(int n);"<<endl;

	 cout<<"76. void printLower_vowels();"<<endl;

	 cout<<"77. void printLower_consonents();"<<endl;

	 cout<<"78. void str1(int n);"<<endl;

	 cout<<"79. void str2(int n);"<<endl;

	 cout<<"80. void num2(int n);"<<endl;

	 cout<<"81. void num4(int n);"<<endl;

	 cout<<"82. void num1(int n);"<<endl;

	 cout<<"83. void num5(int n);"<<endl;
					     getch();
	 cout<<"84. void num6(int n);"<<endl;

	 cout<<"85. void flodys_triangle(int n);"<<endl;



	 cout<<"86. void pyramid(int n);"<<endl;



	 cout<<"87. void pascal_triangle(int n);"<<endl;

	 cout<<"88. void createArray_1D(templateType a[50],int size);"<<endl;

	 cout<<"89. void displayArray_1D(templateType a[50],int size);"<<endl;

	 cout<<"90. void displayArray_2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"91. void createArray_2d(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"92. templateType sumOf_Array2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"93. templateType sum_of_Array1D(templateType a[50],int size);"<<endl;

	 cout<<"94. templateType avg_of_Array1D(templateType a[50],int size);"<<endl;

	 cout<<"95. templateType avg_of_Array2D(templateType a[50][50],int int r,int c);"<<endl;

	 cout<<"96. templateType max_of_Array1D(templateType a[50],int size);"<<endl;

	 cout<<"97. templateType max_of_Array2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"98. templateType min_of_Array1D(templateType a[50],int size);"<<endl;

	 cout<<"99. templateType min_of_Array2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"100. int no_of_posArray1D(templateType a[50],int size);"<<endl;

	 cout<<"101. int no_of_posArray2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"102. int no_of_negArray1D(templateType a[50],int size);"<<endl;
						     getch();
	 cout<<"103. int no_of_negArray2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"104. int no_of_zeroesArray1D(templateType a[50],int size);"<<endl;

	 cout<<"105. int no_of_zeroesArray2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"106. void reverse_of_Array(templateType a[50],int size);"<<endl;

	 cout<<"107. void sum_of_Array(templateType a[50],templateType b[50],templateType c[50],int size);"<<endl;

	 cout<<"108 void sub_of_Array(templateType a[50],templateType b[50],templateType c[50],int size);"<<endl;

	 cout<<"109. void mul_of_Array(templateType a[50],templateType b[50],templateType c[50],int size);"<<endl;

	 cout<<"110. void mulArray_withEle(templateType a[50],int size,int ele);"<<endl;

	 cout<<"111. void gen_UnitMat(templateType a[50][50],int size);"<<endl;

	 cout<<"112. void addOf_twoMat(templateType a[50][50],templateType b[50][50],templateType c50][50],int r,int c);"<<endl;

	 cout<<"113. void mulOf_twoMat(templateType a[50][50],templateType b[50][50],templateType c[50][50],int r1,int c1,int r2,int c2);"<<endl;

	 cout<<"114. void transposeOf_mat(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"115. templateType sum_diagonalEle(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"116. void subOf_twoMat(templateType a[50][50],templateType b[50][50],templateType c[50][50],int r,int c);"<<endl;

	 cout<<"117. templateType sum_nondiagonalEle(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"118. int no_of_Even1D(templateType a[50],int size);"<<endl;

	 cout<<"119. int no_of_Odd1D(templateType a[50],int size);"<<endl;
							      getch();
	 cout<<"120. int no_of_Even2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"121. int no_of_Odd2D(templateType a[50][50],int r,int c);"<<endl;

	 cout<<"122. void linearSearch_Array(templateType a[50],int size,templateType ele);"<<endl;

	 cout<<"123. void sortUsing_selection(templateType a[50],int size);"<<endl;

	 cout<<"124. void sortUsing_bubble(templateType a[50],int size);"<<endl;

	 cout<<"125. void sortUsing_insertion(templateType a[50],int size);"<<endl;

	 cout<<"126. void binarySearch_Array(templateType a[50],int size,templateType ele);"<<endl;
		 getch();
	}
	~mbts()
	{
	 cout<<"IF ANY QUERIES "<<endl<<"CONTACT:"<<endl<<"\t"<<"NAME: SRINIVAS.KANDUKURI"<<endl<<"\t"<<"MOBILE: 8978792330"<<endl<<"\t"<<"NAME: TAHIR ALI.SHAIK"<<endl<<"\t"<<"MOBILE: 8790945129"<<endl;
	}

	friend void details(mbts m,int ch)
	{
	 switch(ch)
	 {
	  case 1:
		 cout<<"FUNCTION NAME: bin_to_dec "<<endl<<"PURPOSE: it takes binary number and convert into decimal,return that decimal value"<<endl<<"function parameter is in long type,return type is integer "<<endl;
		 break;
	 case 2:
		 cout<<"FUNCTION NAME: dec_to_bin "<<endl<<"PURPOSE: it takes decimal number and convert into binary,print it"<<endl<<"function parameter is in integer type,return type is void"<<endl;
		 break;
	 case 3:
		 cout<<"FUNCTION NAME: dec_to_oct"<<endl<<"PURPOSE: it takes decimal value and convert into octal,return that octal value "<<endl<<"function parameter is in integer type,return type is long"<<endl;
		 break;
	 case 4:
		 cout<<"FUNCTION NAME: oct_to_dec"<<endl<<"PURPOSE: it takes octal value and convert into decimal,return that decimal value "<<endl<<"function parameter is in integer type,return type is integer"<<endl;
		 break;
	 case 5:
		 cout<<"FUNCTION NAME: bin_to_oct"<<endl<<"PURPOSE: it takes binary value and convert into octal,return that octal value "<<endl<<"function parameter is in long type,return type is long"<<endl;
		 break;
	 case 6:
		 cout<<"FUNCTION NAME: oct_to_bin"<<endl<<"PURPOSE: it takes octal value and convert into binary,print it "<<endl<<"function parameter is in integer type,return type is void"<<endl;
		 break;
	 case 7:
		 cout<<"FUNCTION NAME: fahrenheit_to_celsius"<<endl<<"PURPOSE: it takes fahrenheit value and convert into celsius,return that celsiuis value "<<endl<<"function parameter is in float type,return type is float"<<endl;
		 break;
	 case 8:
		 cout<<"FUNCTION NAME: celsius_to_fahrenheit"<<endl<<"PURPOSE: it takes celsius value and convert into fahrenheit,return that fahrenheit value "<<endl<<"function parameter is in float type,return type is float"<<endl;
		 break;
	
	 case 9:
		  cout<<"FUNCTION NAME: area_of_circle"<<endl<<"PURPOSE: it takes radius in the form of generic type,calculate area and return that area"<<endl<<"function parameter is in template type and return type is double"<<endl;
		  break;
	 case 10:
		  cout<<"FUNCTION NAME: perimeter_of_circle"<<endl<<"PURPOSE: it takes radius in the form of generic type,calculate perimeter and return that perimeter"<<endl<<"function parameter is in template type and return type is double"<<endl;
		  break;
	 case 11:
		  cout<<"FUNCTION NAME: sum_of_two"<<endl<<"PURPOSE: it takes two values in the form of generic type,calculates sum of given two and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 12:
		  cout<<"FUNCTION NAME: sub_of_two"<<endl<<"PURPOSE: it takes two values in the form of generic type,calculates difference of given two and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 13:
		  cout<<"FUNCTION NAME: mod_of_two"<<endl<<"PURPOSE: it takes two values in the form of long type,calculates modulos of given two and return that value"<<endl<<"function parameters are in long type and return type is long type"<<endl;
		  break;
	 case 14:
		  cout<<"FUNCTION NAME: div_of_two"<<endl<<"PURPOSE: it takes two values in the form of generic type,calculates division of given two and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 15:
		  cout<<"FUNCTION NAME: max_of_two"<<endl<<"PURPOSE: it takes two values in the form of generic type,calculates maximum of given two and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 16:
		  cout<<"FUNCTION NAME: max_of_three"<<endl<<"PURPOSE: it takes three values in the form of generic type,calculates maximum of given three and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 17:
		  cout<<"FUNCTION NAME: min_of_two"<<endl<<"PURPOSE: it takes two values in the form of generic type,calculates minimum of given two and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 18:
		  cout<<"FUNCTION NAME: min_of_three"<<endl<<"PURPOSE: it takes three values in the form of generic type,calculates minimum of given three and return that value"<<endl<<"function parameters are in template type and return type is template type"<<endl;
		  break;
	 case 19:
		  cout<<"FUNCTION NAME: power"<<endl<<"PURPOSE: it calculates power of given two values and return that value"<<endl<<"function parameters are in integer types and return type is long"<<endl;
		  break;
	 case 20:
		  cout<<"FUNCTION NAME: roots_of_quadtratic"<<endl<<"PURPOSE: it takes three values i.e.,coefficents of degree 2,degree 1 and constant,calculate roots and print it"<<"function parameters are in integer types and there is no return type"<<endl;
		  break;
	 case 21:
		  cout<<"FUNCTION NAME: sum_of_natural"<<endl<<"PURPOSE: it takes integer value,calculate sum of natural numbers from 1 to given value and return that value"<<"function parameter is in ineteger type and return type is long"<<endl;
		  break;
	 case 22:
		  cout<<"FUNCTION NAME: sum_of_squares_ofNatural"<<endl<<"PURPOSE: it takes integer value,caculate sum of squares of natural numbers from 1 to given value and return that value"<<"funaction parameter is in integer type and return type is long"<<endl;
		  break;
	 case 23:
		  cout<<"FUNCTION NAME: sum_of_cubes_ofNatural"<<endl<<"PURPOSE: it takes integer value,calculate sum of cubes of natural numbers from 1 to given value and return that value"<<"function parameter is in integer type and return type is long"<<endl;
		  break;
	 case 24:
		  cout<<"FUNCTION NAME: sum_of_evenNatural"<<endl<<"PURPOSE: it takes integer value,calculate sum of even natural numbers from 1 to given value and retrun that value"<<"function parameter is in integer type and return type is long "<<endl;
		  break;
	 case 25:
		  cout<<"FUNCTION NAME: sum_of_oddNatural"<<endl<<"PURPOSE: it takes integer value,calculate sum of odd natural numbers from 1 to given value and retrun that value"<<"function parameter is in integer type and return type is long "<<endl;
		  break;
	 case 26:
		  cout<<"FUNCTION NAME: ap_of_three"<<endl<<"PURPOSE: it takes three values,calculates arithmetic progression of given values and return that value"<<endl<<"function parameters are in integer types and return type is float"<<endl;
		  break;
	 case 27:
		  cout<<"FUNCTION NAME: gp_of_three"<<endl<<"PURPOSE: it takes three values,calculates geometric progression of given values and return that value"<<endl<<"function parameters are in integer types and return type is float"<<endl;
		  break;
	 case 28:
		  cout<<"FUNCTION NAME: hp_of_three"<<endl<<"PURPOSE: it takes three values,calculates harmonic progression of given values and return that value"<<endl<<"function parameters are in integer types and return type is float"<<endl;
		  break;
	 case 29:
		  cout<<"FUNCTION NAME: circumference_of_circle"<<endl<<"PURPOSE: it takes radius in the form of generic type,calculates circumference of given radius and return that value"<<endl<<"function parameter is in tamplate type and return type is double"<<endl;
		  break;
	 case 30:
		  cout<<"FUNCTION NAME: vol_of_cube"<<endl<<"PURPOSE: it takes side in the form of generic type,calculates volume of given side and return that value"<<endl<<"function parameter is in tamplate type and return type is double"<<endl;
		  break;
	 case 31:
		  cout<<"FUNCTION NAME: surfaceArea_of_cube"<<endl<<"PURPOSE: it takes side in the form of generic type,calculates surface area of given side and return that value"<<endl<<"function parameter is in tamplate type and return type is double"<<endl;
		  break;
	 case 32:
		  cout<<"FUNCTION NAME: vol_of_cylinder"<<endl<<"PURPOSE: it takes radius,height in the form of generic type,claculates volume and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 33:
		  cout<<"FUNCTION NAME: lateralsurface_of_cylinder"<<endl<<"PURPOSE: it takes radius,height in the form of generic type,claculates lateral surface area and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 34:
		  cout<<"FUNCTION NAME: surfacearea_of_cylinder"<<endl<<"PURPOSE: it takes radius,height in the form of generic type,claculates surface area and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 35:
		  cout<<"FUNCTION NAME: vol_of_sphere"<<endl<<"PURPOSE: it takes radius in the form of generic type,calculates volume and return that value"<<endl<<"function parameter is in the form of template type and return type is double"<<endl;
		  break;
	 case 36:
		  cout<<"FUNCTION NAME: surfacearea_of_sphere"<<endl<<"PURPOSE: it takes radius in the form of generic type,calculates surface area and return that value"<<endl<<"function parameter is in the form of template type and return type is double"<<endl;
		  break;
	 case 37:
		  cout<<"FUNCTION NAME: vol_of_cone"<<endl<<"PURPOSE: it takes radius,height in the form of generic type,claculates volume and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 38:
		  cout<<"FUNCTION NAME: lateralSurfaceArea_of_cone"<<endl<<"PURPOSE: it takes radius,height in the form of generic type,claculates lateral surface area and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 39:
		  cout<<"FUNCTION NAME: area_of_triangle"<<endl<<"PURPOSE: it takes base and height in the form of generic type,calculates the area and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 40:
		  cout<<"FUNCTION NAME: area_of_square"<<endl<<"PURPOSE: it takes side of square in generic type,calculates the area and return that value"<<endl<<"function parameter is in template type and the retrun type is double"<<endl;
		  break;
	 case 41:
		  cout<<"FUNCTION NAME: perimeter_of_square"<<endl<<"PURPOSE: it takes side of square in generic type,calculates the perimeter and return that value"<<endl<<"function parameter is in template type and the retrun type is double"<<endl;
		  break;
	 case 42:
		  cout<<"FUNCTION NAME: area_of_rectangle"<<endl<<"PURPOSE: it takes length,breadth in the form of generic type,calculates the area and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 43:
		  cout<<"FUNCTION NAME: perimeter_of_rectangle"<<endl<<"PURPOSE: it takes length,breadth in the form of generic type,calculates the perimeter and return that value"<<endl<<"function parameters are in template type and return type is double"<<endl;
		  break;
	 case 44:
		  cout<<"FUNCTION NAME: find_ncr"<<endl<<"PURPOSE: it takes n,r values in the form of integers,calculate the ncr value and return that value"<<endl<<"function parameters are in the form of integer types and return type is double"<<endl;
		  break;
	 case 45:
		  cout<<"FUNCTION NAME: find_npr"<<endl<<"PURPOSE: it takes n,r values in the form of integers,calculate the npr value and return that value"<<endl<<"function parameters are in the form of integer types and return type is double"<<endl;
		  break;
	 case 46:
		  cout<<"FUNCTION NAME: factorial"<<endl<<"PURPOSE: it takes value in the form of integer types and claculate factorial value and return that value"<<endl<<"function parameter in the form of integer type and return type is long"<<endl;
		  break;
	 case 47:
		  cout<<"FUNCTION NAME: gcd_of_2"<<endl<<"PURPOSE: it takes two values in the form of integer  types,calculate gcd value and return that value"<<endl<<"function parameters are in the form of integer type and retrun type is integer"<<endl;
		  break;

	 case 48:
		  cout<<"FUNCTION NAME: lcm_of_2"<<endl<<"PURPOSE: it takes two values in the form of integer  types,calculate lcm value and return that value"<<endl<<"function parameters are in the form of integer type and retrun type is integer"<<endl;
		  break;

	 case 49:
		cout<<"FUNCTION NAME: square"<<endl<<"PURPOSE: it takes value in the form of generic type,calculate square of given value and return that value"<<endl<<"function parameters is in the form of TemplateType and retrun type is long"<<endl;
		  break;

	 case 50:
		cout<<"FUNCTION NAME: cube"<<endl<<"PURPOSE: it takes value in the form of generic type,calculate cube of given value and return that value"<<endl<<"function parameters is in the form of TemplateType and retrun type is long"<<endl;
		  break;

	 case 51:
		cout<<"FUNCTION NAME: print_multiplicationTable`"<<endl<<"PURPOSE: it takes two values,one is value which number multiplication table do you want and another value is last value of multiplier and finally it prints multiplication table"<<endl<<"Both parameters are in the form of integer types and the return type is void"<<endl;
		  break;

	 case 52:
		cout<<"FUNCTION NAME: sum_of_userNumbers"<<endl<<"PURPOSE: it takes value in the form of integer type,calculates the sum of values enter by the user until it cross the limit given by the user return that value"<<endl<<"function parameter is in the form of integer type and retrun type is TemplteType"<<endl;
		   break;

	 case 53:
		cout<<"FUNCTION NAME: avg_of_usersNumbers"<<endl<<"PURPOSE: it takes value in the form of integer type,calculates the average of values enter by the user until it cross the limit given by the user return that value"<<endl<<"function parameter is in the form of integer type and retrun type is TemplateType"<<endl;
		   break;

	 case 54:
		cout<<"FUNCTION NAME: swap_of_2"<<endl<<"PURPOSE: it takes two values in the form of generic type and interchange that values,print it"<<"both parameters are in the form of TemplateType and the retrun type is void"<<endl;
		   break;

	 case 55:
		cout<<"FUNCTION NAME: pos_neg_zero"<<endl<<"PURPOSE: it takes value in the form of ineteger type,check given value is positive or negative or zero and print it"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		   break;

	 case 56:
	 	cout<<"FUNCTION NAME: even_odd"<<endl<<"PURPOSE: it takes value in the form of integer type,check given value is even or odd and print it"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
	  	   break;

	 case 57:
		cout<<"FUNCTION NAME: check_leap_year"<<endl<<"PURPOSE: it takes value in the form of integer type,check given value is leap year or not and print it"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		   break;

	 case 58:
		cout<<"FUNCTION NAME: vowel_consonent"<<endl<<"PURPOSE: it takes in the form of character type,check given character is vowel or consonent and print it"<<endl<<"function parameter is in the form of character type and return type is void"<<endl;
		   break;

	 case 59:
		cout<<"FUNCTION NAME: printNatural_num"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints natural numbers from 1 to given value"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		   break;

	 case 60:
		cout<<"FUNCTION NAME: printOdd_num"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints odd natural numbers from 1 to given value"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		  break;

	 case 61:
		cout<<"FUNCTION NAME: printEven_num"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints even natural numbers from 2 to given value "<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
	          break;

	 case 62:
        	cout<<"FUNCTION NAME: printNatural_num_rev"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints natural numbers from  given value to 1"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
                  break;

	 case 63:
        	cout<<"FUNCTION NAME: printOdd_num_rev"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints odd natural numbers from given value to 1"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
   	 	  break;

	 case 64:
    		cout<<"FUNCTION NAME: printEven_num_rev"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints even natural numbers from given value to 2"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		 break;

	 case 65:
	 	cout<<"FUNCTION NAME: reverse"<<endl<<"PURPOSE: it takes value in the form of long type,it return reverse value of given number"<<endl<<"function parameter is in the form of long type and return type is long"<<endl;
		 break;

	 case 66:
		cout<<"FUNCTION NAME: check_palindrome"<<endl<<"PURPOSE: it takes value in the form of long type,it checks weather the given number is palindrome or not"<<endl<<"function parameter is in the form of long type and return type is void"<<endl; 
                 break;  
                                     
	 case 67:
		cout<<"FUNCTION NAME: check_armstrong"<<endl<<"PURPOSE: it takes value in the form of integer type,it checks weather the given number is armstrong or not"<<endl<<"function parameter is in the form of int type and return type is void"<<endl; 
		 break;


	 case 68:
		cout<<"FUNCTION NAME: Check_prime"<<endl<<"PURPOSE: it takes value in the form of integer type,it checks weather the given number is prime number or not"<<endl<<"function parameter is in the form of int type and return type is void"<<endl; 
                 break; 
                                      
                                                         
	 case 69:
		cout<<"FUNCTION NAME: generateFibon_series"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints fibonacci series"<<endl<<"function parameter is in the form of int type and return type is void"<<endl; 
                 break;                                       

	 case 70:
		cout<<"FUNCTION NAME: printPrime_num"<<endl<<"PURPOSE: it takes value in the form of integer type,it prints prime number from 2 to given value"<<endl<<"function parameter is in the form of int type and return type is void"<<endl; 
                 break;                                       

	 case 71:
		cout<<"FUNCTION NAME: print_uppercase"<<endl<<"PURPOSE: it did not takes any value,it prints upper case alphabets"<<endl<<"there is no function parameter and return type is void"<<endl; 
                 break;                                       

	 case 72:
		cout<<"FUNCTION NAME: print_lowercase"<<endl<<"PURPOSE: it did not takes any value,it prints lower case alphabets"<<endl<<"there is no function parameter and return type is void"<<endl; 
                 break;
                                       
	 case 73:
		cout<<"FUNCTION NAME: printUpper_consonents"<<endl<<"PURPOSE: it did not takes any value,it prints upper consonents"<<endl<<"there is no function parameter and return type is void"<<endl; 
                 break;

                                       
	 case 74:
		cout<<"FUNCTION NAME: printUpper_vowels"<<endl<<"PURPOSE: it did not takes any value,it prints upper vowels"<<endl<<"there is no function parameter and return type is void"<<endl; 
                  break; 

	 case 75:
    		cout<<"FUNCTION NAME: check_perfect"<<endl<<"PURPOSE: it takes value in the form of integer type,it checks weather the given number is perfect or not"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
		 break; 


	 case 76:
		cout<<"FUNCTION NAME: printLower_vowels"<<endl<<"PURPOSE: it did not takes any value,it prints lower vowels"<<endl<<"there is no function parameter and return type is void"<<endl; 
                 break;
  
	 case 77:
		cout<<"FUNCTION NAME: printlower_consonents"<<endl<<"PURPOSE: it did not takes any value,it prints lower consonents"<<endl<<"there is no function parameter and return type is void"<<endl; 
                 break; 
	 case 78:
                 cout<<"FUNCTION NAME: str1"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate * format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
                   break;
      	 case 79:
                 cout<<"FUNCTION NAME: str2"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate * format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
                   break;
	 case 80:
                 cout<<"FUNCTION NAME: num2"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate number format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;
                   break;

	 case 81:
                 cout<<"FUNCTION NAME: num4"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate number format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl; 
                  break;
	 case 82:
                 cout<<"FUNCTION NAME: num1"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate number format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl; 
                   break;
	 case 83:
                 cout<<"FUNCTION NAME: num5"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate number format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl; 
                   break;

	 case 84:
                 cout<<"FUNCTION NAME: num6"<<endl<<"PURPOSE:it takes the row value in form of integer and print appopriate number format"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl; 
                  break;

	 case 85:
                 cout<<"FUNCTION NAME: flodys_triangle"<<endl<<"PURPOSE:it takes the row value in form of integer and print flodys_triangle"<<endl<<"function parameter is in the form of integer type and return type is void"<<endl; 
                  break;

	 
	 case 86:
                 cout<<"FUNCTION NAME: pyramid"<<endl<<"PURPOSE:it takes the row value in form of integer and print pyramid symbol "<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;          
                 break;

	 

	 case 87:
                 cout<<"FUNCTION NAME: pascal_triangle"<<endl<<"PURPOSE:it takes the row value in form of integer and print pascal_triangle "<<endl<<"function parameter is in the form of integer type and return type is void"<<endl;          
                  break;
	 case 88:
		 cout<<"FUNCTION NAME: createArray_1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and create that array with the help of size"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
 		  break;
	 case 89:
		 cout<<"FUNCTION NAME: displayArray_1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and display that array with the help of array size"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
 		 break;

	 case 90:
		 cout<<"FUNCTION NAME: displayArray_2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and display that array with the help of row,column size"<<endl<<"function parameters are in the form of template type,integers and return type is void"<<endl;
                  break;

	 case 91:
		 cout<<"FUNCTION NAME: createArray_2d"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and create that array with the help of row,column size"<<endl<<"function parameters are in the form of template type,integers and return type is void"<<endl;
		  break;

	 case 92:
		 cout<<"FUNCTION NAME: sumOf_Array2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates sum of elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is void"<<endl;
		  break;

	 case 93:
		 cout<<"FUNCTION NAME: sum_of_Array1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate sum of each and every element of the array that array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
 		  break; 
  
	 case 94:
		 cout<<"FUNCTION NAME: avg_of_Array1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate average ofeach and every element of the array that array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
		  break;

	 case 95:
		 cout<<"FUNCTION NAME: avg_of_Array2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates average of elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is void"<<endl;
                  break;

	 case 96:
		  cout<<"FUNCTION NAME: max_of_Array1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate the maximum element of the array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
 		  break;

	 case 97:
		  cout<<"FUNCTION NAME: max_of_Array2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates maximum elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is void"<<endl;
                  break;

	 case 98:
		 cout<<"FUNCTION NAME: min_of_Array1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate the minmum element of the array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is void"<<endl;
    		 break;

	 case 99:
	          cout<<"FUNCTION NAME: min_of_Array2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates minimum elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is template type"<<endl;
                  break;

	 case 100:
		  cout<<"FUNCTION NAME: no_of_posArray1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate the no of positive elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is template type"<<endl;
 		  break;

	 case 101:
	          cout<<"FUNCTION NAME: no_of_posArray2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates no of positive elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is template type"<<endl;
                  break;

	 case 102:
		  cout<<"FUNCTION NAME: no_of_negArray1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate the no of negative elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is template type"<<endl;
		  break;
	 case 103:
		 cout<<"FUNCTION NAME:  no_of_negArray2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates no of negative elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is template type"<<endl;
		 break;

	 case 104:
		  cout<<"FUNCTION NAME: no_of_zeroesArray1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in thre form of integer type and caluclate the no of zero elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integer and return type is template type"<<endl;
		   break;

	 case 105:
		  cout<<"FUNCTION NAME:  no_of_zeroesArray2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column in the form of integer type and calculates no of zero elements in that array and return that value"<<endl<<"function parameters are in the form of template type,integers and return type is template type"<<endl;
                  break;

	 case 106:
		  cout<<"FUNCTION NAME: reverse_of_Array"<<endl<<"PURPOSE: it takes array in the form of generic type,array size in the form of integer and reverse the given array with in that array"<<endl<<"function parameters are in the type of templateType,integer and retrn type is void"<<endl;
	 	  break;
         

	 case 107:
    	          cout<<"FUNCTION NAME: sum_of_Array"<<endl<<"PURPOSE: it takes 3 arrays in the form of generic types,array size in the form of integer and calculates the sum of 2 arrays and place the resultant array in the third array"<<endl<<"function parameters in the form of template types,integer type and return type is void"<<endl;
        	  break;

	 case 108:
	         cout<<"FUNCTION NAME: sub_of_Array"<<endl<<"PURPOSE:  it takes 3 arrays in the form of generic types,array size in the form of integer and calculates the difference of 2 arrays and place the resultant array in the third array"<<endl<<"function parameters in the form of template types,integer type and return type is void"<<endl;
		 break;

	 case 109:
	          cout<<"FUNCTION NAME: mul_of_Array"<<endl<<"PURPOSE:  it takes 3 arrays in the form of generic types,array size in the form of integer and calculates the multiplication of 2 arrays and place the resultant array in the third array"<<endl<<"function parameters in the form of template types,integer type and return type is void"<<endl;
		  break;

	 case 110:
	          cout<<"FUNCTION NAME: mulArray_withEle"<<endl<<"PURPOSE:  it takes matrix in the form of generic type,array size,element in the form of integers and multiply the each and every element with the given element"<<endl<<"function parameters are in the form of template  type , integer types and return type is void"<<endl;
                   break; 

	 case 111:
	          cout<<"FUNCTION NAME: gen_UnitMat"<<endl<<"PURPOSE:  it takes matrix in the form of generic type,array size in the form of integer and create that array as unit matrix"<<endl<<"function parameters are in the form of template  type , integer and return type is void"<<endl;
                   break; 

	 case 112:
	 	  cout<<"FUNCTION NAME: addOf_twoMat"<<endl<<"PURPOSE: it takes 3 matrices in the form of generic types,row,coloumn sizes in the form of integer and calculates the sum of 2 arrays and place the resultant array in the third array"<<endl<<"function parameters in the form of template types,integer types and return type is void"<<endl;
                   break; 

	 case 113:
	          cout<<"FUNCTION NAME: mulOf_twoMat"<<endl<<"PURPOSE: it takes 3 matrices in the form of generic types,row,coloumn sizes in the form of integer and calculates the multiplication of 2 matrices and place the resultant array in the third array"<<endl<<"function parameters in the form of template types,integer types and return type is void"<<endl;
                   break;


	 case 114:
	          cout<<"FUNCTION NAME: transposeOf_mat"<<endl<<"PURPOSE: it takes matrix in the form of generic types,row,coloumn sizes in the form of integer and changes the given matrix in the tranpose form "<<endl<<"function parameters in the form of template types,integer types and return type is void"<<endl;
                   break;

	 case 115: 
                  cout<<"FUNCTION NAME: sum_diagonalEle"<<endl<<"PURPOSE: it takes matrix in the form of generic type,row,column sizes are in the form of integers and calculate sum of the diagnol elements and return that value "<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;

	 case 116:
                  cout<<"FUNCTION NAME: subOf_twoMat"<<endl<<"PURPOSE: it takes three matrices in the form of generic type,row,column sizes are in the form of integers and calculate the difference of first two matrices and place the resultant matrix in third matrix "<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                    break;

	 case 117:
                  cout<<"FUNCTION NAME: sum_nondiagonalEle"<<endl<<"PURPOSE: it takes matrix in the form of generic type,row,column sizes are in the form of integers and calculate the sum of non diagnol elments"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                  break; 


	 case 118:
	          cout<<"FUNCTION NAME: no_of_Even1D"<<endl<<"PURPOSE: it takes array in the form of generic type,array size is in the form of integer and calculate the no of even elements and return that value"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;  

	 case 119:
                  cout<<"FUNCTION NAME: no_of_Odd1D"<<endl<<"PURPOSE: it takes array in the form of generic type, array sizes is in the form of integer and calculate the no of odd elements and return that value"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;

	 case 120:
                  cout<<"FUNCTION NAME: no_of_Even2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column sizes are in the form of integers and calculate the no of even elements and return that value"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;

	 case 121:
                  cout<<"FUNCTION NAME: no_of_Odd2D"<<endl<<"PURPOSE: it takes 2 dimensional array in the form of generic type,row,column sizes are in the form of integers and calculate the no of odd elements and return that value"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                  break;

	 case 122:
                  cout<<"FUNCTION NAME: linearSearch_Array"<<endl<<"PURPOSE:it takes array in the form of genaric type and array size,elements in the form of integers, it searches whether the  given element is in the array or not  with the help of linear search technique"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;

	 case 123:
                   cout<<"FUNCTION NAME: sortUsing_selection"<<endl<<"PURPOSE:it takes array in the form of genaric type and array size,elements in the form of integers, it sorts the given array in proper order "<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                    break;

	 case 124:
                   cout<<"FUNCTION NAME: sortUsing_bubble"<<endl<<"PURPOSE:it takes array in the form of genaric type and array size,elements in the form of integers, it sorts the given array in proper order using bubble sort"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;        
                    break;

	 case 125:
                  cout<<"FUNCTION NAME: sortingUsing_insertion"<<endl<<"PURPOSE:it takes array in the form of genaric type and array size,elements in the form of integers, it sorts the given array in proper order using insertion sort"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;        
                   break;
	 case 126:
                  cout<<"FUNCTION NAME:  binaryseach_Array"<<endl<<"PURPOSE:it takes array in the form of genaric type and array size,elements in the form of integers, it searches whether the  given element is in the array or not  with the help of binary search technique"<<endl<<"function parameter is in the form of tempelete type,integers return type is void"<<endl;
                   break;
           

                                 
          

                                     


	 }
	}
};
