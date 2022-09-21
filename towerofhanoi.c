#include<stdio.h>
void towerOfHanoi(int ,char ,char ,char );
int main()
{
    int N;
 
    printf("Enter the number of disks : ");
    scanf("%d", &N);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
void towerOfHanoi(int N,char S,char A,char D)
{
  if(N==1)
  {
    printf("Move from tower %c to tower %c\n",S,D);
  }
  else
  {
    towerOfHanoi(N-1,S,D,A);
    printf("Move from tower %c to tower %c\n",S,D);
    towerOfHanoi(N-1,A,S,D);
  }
}
