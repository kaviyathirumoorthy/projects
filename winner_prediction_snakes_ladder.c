#include<stdio.h>
int checkup(int a){
if(a==3) return 22;
if(a==5) return 8;
if(a==11) return 26;
if(a==20) return 29;
}
int checkdown(int a){
if(a==17) return 4;
if(a==19) return 7;
if(a==27) return 1;
}

void failure(int num_count,char members[],char strt_member,int value_count,int values[]){
//condition1-->CHECK THE POSITION OF FIRST MEMBER TO ROLL THE DICE
int strt=0;
for(int i=0;i<num_count;i++) {
if(strt_member-'A' == (members[i]-'A')){ strt=i; break;}
}
// MAKE THE POSITION OF FIRST PLAYER TO ROLL THE DICE AS STARTING POINT-ROT
int rot=strt,count[num_count],check[num_count];
int sum[num_count];

for(int i=0;i<num_count;i++){ sum[i]=0; count[i]=0; check[i]=0;}
//MAKE ALL THE VALUES INSIDE SUM,COUNT(USED TO CHECK WHETHER THE PLAYER PUT 1 OR NOT),
//CHECK-TO CHECK THE SUM VALUE BEFORE ASSIGNING IT IT IS LIKE TEMPORARY SUM ARRAY)
int k=0;
// CONDITION 2
for(int i=0;i<value_count;i++){
if(rot==num_count) rot=0;
if(count[rot]==0 && values[i]==1) {count[rot]=1;}
if(count[rot]==1){
check[rot]+=values[i];
if(check[rot]<=30) sum[rot]+=values[i];
if(check[rot]==3||check[rot]==5||check[rot]==11||check[rot]==20) sum[rot]=checkup(check[rot]);
if(check[rot]==17||check[rot]==19||check[rot]==27) sum[rot]=checkdown(check[rot]);
}
// IT IS USED TO UPDATE THE POSITION OF ELEMENT WHEN ITS VALUE COUNT IN LAST AND THE SUM IS APPLICABLE TO CHECKUP OR CHECKDOWN
if(sum[rot]==3||sum[rot]==5||sum[rot]==11||sum[rot]==20) sum[rot]=checkup(check[rot]);
if(sum[rot]==17||sum[rot]==19 || sum[rot]==27) sum[rot]=checkdown(check[rot]);

// IT PRINTS THE SUM OF EACH ELEMENT AT EACH ROLLS
printf("\n%d-->",k++);

for(int m=0;m<num_count;m++) printf("%d ",sum[m]);
rot++;

}

int min=0;
for(int i=0;i<num_count;i++){
if(sum[min]>sum[i]) min=i;
}
printf("final position of all members->");
for(int i=0;i<num_count;i++) printf("%d ",sum[i]);

printf("\nplayer name to be loose the game->");
printf("%c",members[min]);

}


int main(){
int num_count;
printf("enter the count of players->");
scanf("%d",&num_count);

char members[num_count];
printf("\nenter the players name->");
for(int i=0;i<num_count;i++) scanf(" %c",&members[i]);
char strt_member;
printf("\nenter the player name who rolls the dice first->");
scanf(" %c",&strt_member);
int value_count;
printf("\nenter the number of rolls in this play->");
scanf(" %d",&value_count);

int values[value_count];
printf("\nenter the dice value of each roll->");
for(int i=0;i<value_count;i++) scanf(" %d",&values[i]);

failure(num_count,members,strt_member,value_count,values);
return 0;
}
