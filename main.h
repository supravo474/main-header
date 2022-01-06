//main.h header file made for number problems in c/c++ by Supravo
//For any enquiry or issue feel free to contact us  @supravo.saha.09@gmail.com
#include<stdio.h>

int checkPalindrome(int number)
{
  int temp, remainder, rev=0;
  temp = number;

  while( number!=0 )  
  {
     remainder = number % 10;
     rev = rev*10 + remainder;
     number /= 10;
  }

  if ( rev == temp ){
      printf("%d is a Palindrome Number\n",temp);
      
  } 
  else{
      printf("%d is not a Palindrome Number\n",temp);
      
  } 

  return 0;
}
int checkPrime(int n){
    int c;
    int d = n;
    for ( c = 2 ; c <= n - 1 ; c++ )  
    { 
        if ( n%c == 0 ){
            printf("%d is not a prime number\n", d);
            
            return 0;
        }
        else{
            printf("%d is a prime number\n", d);
            return 1;
        }
   }
   
     return 0;
	}
	


int isEven(int n){
   int temp = n;
    if(n%2==0){
        printf("%d is an Even Number\n",temp);
        return 1;
    }
    else{
        printf("%d is an Odd Number\n",temp);
        return 0;

    }
         
}

int factif(int n)
{
    int temp =n;
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d\n",temp,f);
    return f;
    
}
int fibonacciSeries(int n)
{
   int a=0, b=1, c;
   int m = n;
   printf("Fibonacci series of %d is \n",m);
   while (a<=n)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
return a;
}

int rev(int n)
{   int num;
 while(n!=0)
 {
  int r=n%10;
  num=num*10+r;
  n=n/10;
 }
 return(num);
}

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int isArmstrong(int number) 
{

  
  int lastDigit = 0;
  int power = 0;
  int sum = 0;

  
  int n = number;

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

     // find power of digit (order = 3)
     power = lastDigit*lastDigit*lastDigit;

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}

int nsum(int num){

	int i;
	int sum =0;

	//Loop through from 1 to num e.g.
	//if number is 3 so index will start from
	// 1 to 3 and sum will be as = 1+2+3 = 6
	for(i=1; i<=num; ++i){
		sum += i; // Also, this can be written as sum = sum +i;
	}
	return sum;
}

int perf(int numbr){
          int a=1, sum=0;

          while(a< numbr){
            if(numbr % a == 0)
                sum=sum+a;
            a++;
          }
          return(sum);
}

int factorial(int);
int kris(int num)
{
    int digit,sum=0,temp;
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+factorial(digit);
        num=num/10;
    }
    if(sum==temp)
    {
        printf("%d is a Krishnamurti Number",temp);
    }
    else
    {
        printf("%d is Not a Krishnamurti Number",temp);
    }
    return 0;
}
int factorial(int num)
{
    int fact=1;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    return (fact);
}

int strong(int m,int n){
    int i, num, j, fact, sum;


     printf("Strong numbers are:\n");

     for(i=m; i<=n; i++)
     {
         num = i;
         sum = 0;

         while(num!=0)
         {
             fact=1;

             for(j=1;j<=(num%10);j++)
             {
                 fact *= j;
             }

             sum += fact; //sum=sum+fact
             num /= 10; //num=num/10
         }

         if(sum==i)
           printf("%d\n",i);
     }

     return 0;
}

int neon(int n ){
    int sqr, rem, sum=0;


    sqr = n*n; 

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; //sum = sum + rem
        sqr /= 10;  //sqr = sqr / 10
    }

    if(sum==n)
        printf("%d is a Neon number.\n",n);
    else
        printf("%d is NOT a Neon number.\n",n);

    return 0;


}

int facto(int num){
    printf("Factors of %d are:\n", num);

  for(int i=1; i<=num/2; i++)
  {
    if(num%i==0)
    printf("%d\t", i);
  }

  return 0;
}

int gdc(int num1,int num2){
    while(num1 != num2)
     {
         if( num1 > num2 )
             num1 -= num2; // num1= num1 - num2
         else
             num2 -= num1; //num2= num2 - num1
     }

     printf("GCD = %d\n",num1);

     return 0;
}

int lcm(int num1,int num2){
    int  minmultiple;

     // minmultiple will be equal to smaller number
     minmultiple= (num1<num2) ? num1:num2 ;

     while(1) // always true
     {
         if( minmultiple % num1 == 0 && minmultiple % num2 == 0 )
         {
             printf("LCM = %d\n", minmultiple);
             break;
         }
         minmultiple++;
     }

     return 0;
}
int powerfo(int base,int exp){
    long double result = 1.0;

    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int squaro(float n){
	double start,end,mid;
	
	
	start = 0, end = n;
	
	while((end - start)>=0.000001){
		
		mid = (start + end)/2;
		
		if(mid*mid < n)
			start = mid;
		if(mid*mid >= n)
			end = mid;
		
	}
	
	printf("Square Root of %d is %f \n",n,mid);
    return 0;
}

double diff(double n,double mid)
{
    if (n > (mid*mid*mid))
        return (n-(mid*mid*mid));
    else
        return ((mid*mid*mid) - n);
}
 
// Returns cube root of a no n
double cubicRoot(double n)
{
    // Set start and end for binary search
    double start = 0, end = n;
 
    // Set precision
    double e = 0.0000001;
 
    while (true)
    {
        double mid = (start + end)/2;
        double error = diff(n, mid);
 
        // If error is less than e then mid is
        // our answer so return mid
        if (error <= e)
            return mid;
 
        // If mid*mid*mid is greater than n set
        // end = mid
        if ((mid*mid*mid) > n)
            end = mid;
 
        // If mid*mid*mid is less than n set
        // start = mid
        else
            start = mid;
    }
}
 

int cubor(double n)
{
    double a = n;
    printf("Cubic root of %lf is %lf\n",a, cubicRoot(a));

    return 0;
}

int sumodd(int n,int d){
      int i, start = n, end = d, sum=0;

    /* If lower limit is even then make it odd */
    if(start % 2 == 0)
    {
        start++;
    }
    
    /* Iterate from start to end and find sum */
    for(i=start; i<=end; i+=2)
    {
        sum += i;
    }

    printf("Sum of Odd Numbers between %d to %d = %d", start, end, sum);

    return 0;
}

int sumsqar(int number,int number2){
    int i,n = number2,sum=0;
    printf("The Numbers are \n");
   for(i=number;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);

   return 0;
}

int sumeven(int start, int end){
    int i, sum=0;
    int may = start,june = end;
    /* Input lower and upper limit from user */


    /* If start is not even then make it even */
    if(may%2!=0)
    {
        may++;
    }

    for(i=may; i<=june; i+=2)
    {
        /* Add current even number to sum */
        sum += i;
    }

    printf("Sum of all Even Numbers between %d to %d = %d", may, june, sum);

    return 0;
}

int sumcube(int number,int number2){ 
    int n = number2;
    int f = number;
    int sum = 0;
   for (int i = f; i <= n; i++) {
      sum += i * i * i;
   }
   printf("Sum of all Cubes between %d to %d is: %d\n",f,n,sum);
   return 0;
}

int primeo(int num,int num4){
    int  flag_var, i, j;
    int num1 = num;
    int num2 = num = num4;
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
      flag_var=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
         printf("%d\n",i);
  }
  return 0;
}

int armo(int a,int b){
    int low = a, high = b, number, originalNumber, rem, count = 0;
    double result = 0.0;
 

  // swap numbers if high < low
  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
   
  // iterate number from (low + 1) to (high - 1)
  // In each iteration, check if number is Armstrong
  for (number = low + 1; number < high; ++number) {
    originalNumber = number;

    // number of digits calculation
    while (originalNumber != 0) {
      originalNumber /= 10;
      ++count;
    }

    originalNumber = number;

    // result contains sum of nth power of individual digits
    while (originalNumber != 0) {
      rem = originalNumber % 10;
      result += powerfo(rem, count);
      originalNumber /= 10;
    }

    // check if number is equal to the sum of nth power of individual digits
    if ((int)result == number) {
      printf("%d ", number);
    }

    // resetting the values
    count = 0;
    result = 0;
  }

  return 0;

 }

int permi(int a,int b){
    int n,i,sum;
    int mn = a,mx = b;
  
  printf("The Perfect numbers within the given range : ");
  for(n=mn;n<=mx;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");

return 0;
}
int neonb(int a ,int b ){
     int m=a, n=b, i, sqr, j, sum;

    printf("Neon Number from %d to %d are:\n",m,n);

    for(i=m;i<=n;i++)
    {
       sum = 0;
       sqr = i*i;

       for( j=sqr ;j>0 ;j/=10 )
       {
           sum += (j%10);
       }

       if(sum == i)
       printf("%d\t",i);
    }

    return 0;

}

int palermo(int a ,int b){
    int num, rem, reverse_num, temp, start= a, end= b;

   printf("Palindrome numbers between %d and %d are: ",start,end);
   for(num=start;num<=end;num++){
      temp=num;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
         printf("%d ",num);
   }
   return 0;
}

int Powif(int m,int n) {

    int num = n;
    int d = m;
    int tempNum,flag;


    tempNum=num;
    flag=0;
    /*check power of two*/
    while(tempNum!=1)
    {
        if(tempNum%m!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/m;
    }

    if(flag==0)
        printf("%d is a number that is the power of %d.\n",num,d);
    else
        printf("%d is not the power of %d.\n",num,d);

    return 0;
}
