 #include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3;
  printf("Enter x1\n");
  scanf("%d",&x1);
  printf("Enter y1\n");
  scanf("%d",&y1);
  printf("Enter x2\n");
  scanf("%d",&x2);
  printf("Enter y2\n");
  scanf("%d",&y2);
  printf("Enter x3\n");
  scanf("%d",&x3);
  printf("Enter y3\n");
  scanf("%d",&y3);
  printf("Dinesh's house is located at (%.1f , %.1f)",(float)(x1+x2+x3)/3,(float)(y1+y2+y3)/3);
  return 0;
}
