//#include <stdio.h>
//int main()
//{
//   int n,p,i;
//   float m,x,profit=0,loss=0,total;
//   printf("Enter no of available item for sale : ");
//   scanf("%d", &n);
//   float item[n];
//   printf("\n******Enter price of each item******\n");
//   for(i=0;i<n;i++)
//   {
//       printf("%d : ",i+1);
//       scanf("%f",&item[i]);
//   }
//   printf("\nEnter the no of items sold in the profit : ");
//   scanf("%d",&p);
//   printf("Enter the percentage of profit : ");
//   scanf("%f",&m);
//   printf("\nEnter the percentage of loss in remaining item : ");
//   scanf("%f",&x);
//   //to cal total profit
//   for(i=0;i<p;i++)
//   {
//       profit+=(m*item[i])/100;  //((100+m)*item[i])/100 - item[i]
//   }
//   //to cal total loss
//   for(i=p;i<n;i++)
//   {
//       loss+=(x*item[i])/100;    //item[i] - ((100-x)*item[i])/100
//   }
//   total=profit-loss;
//   printf("\n*****************************************\n");
//   if(total>0)
//       printf("Salesman get Rs. %.2f profit",total);
//   else if (total<0)
//       printf("Salesman get Rs. %.2f loss",total*-1);
//   else
//       printf("salesman got neither profit nor loss");
//   return 0;
//}
//
#include<stdio.h>
int main()
{
int n, i=0,max=0,counter=0,l[2],m=0;
int frequency[4]={0,0,0,0};
printf("Hello Sir/Ma'am\n This survey is regarding the common issue we all face,\n Many a times we get late reaching the railway station\n And face a dilemma deciding whether to get ticket first or rush to train\n So, below given are some options please fill most preferable");
char a='a', ch, ar[][60]={"Rush to train to catch it and inform T.T at next stop",
"Catch the train and perform journey without ticket",
"Purchase ticket first otherwise wait for next train",
"Miss the train and take ticket for next train"};
printf("\n\n Enter the no of people to take survey from:");
scanf("%d", &n);
for(i=0;i<4;i++){
printf("%c. %s\n", a, ar[i]);
a++;
}
i=0;
do{
printf("enter your choice: ");
scanf("\n%c", &ch);
if(ch=='a'){
frequency[0]++;
}
else if(ch=='b'){
frequency[1]++;
}
else if(ch=='c'){
frequency[2]++;
}
else if(ch=='d'){
frequency[3]++;
}
else{
printf("invalid choice");
}
i++;
      }while(i<n);
printf("\nFrequencies of option a,b,c,d are:");
for(i=0;i<4;i++){
printf("%d ",frequency[i],ch);
}
for(i=0;i<4;i++){
if(max<frequency[i]){
max=frequency[i];
}
}
for(i=0;i<4;i++){
if(frequency[i]%max<1&&frequency[i]!=0){
++counter;
}
}
if(counter==1){
for(i=0;i<4;i++){
if(max==frequency[i]){
printf("\nMost of the people will %s",ar[i]);
}         
}
}
else if(counter==2){
for(i=0;i<4;i++){
if(max==frequency[i]){
l[m]=i;
m++;
}
}
printf("\npeople will either %s or %s",ar[l[0]],ar[l[1]]);
}
else{
printf("\nNo conclusion");
}
return 0;
}

