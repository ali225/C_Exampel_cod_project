sum += 1 ;
sum += 2 ;
sum += 3 ;
sum += 4 ;
sum += 5 ;

num = sum = 0;
while (num < 6 )
{
 sum +=num;
 num++;
}

for (;;expr3){

}

for (;expr2;){ // while (expr2)

}

for (expr1;;){

}
for (;;){ // while (1)

}
for (expr1 ; expr2 ; expr3){
    Body
}
expr1;
while (expr2){
    Bady
    expr3;
}
do {
    Body
} while (expr);

Body;
//////////////////////
while(expr){
    Bady;
}
/////////////////////
switch(x)
{
   case 0: /*Body1 */
       break;
   case 1: /*Body2 */
       break;
   case 2: /*Body3 */
       break;
   default: /*Body4 */
       break;
}
///////////////////////
if (x == 0){
    /*Body1 */
} else if (x == 1){
  /*Body2*/
}else if (x == 2){
 /*Body 3 */
}else {
/*Body 4 */
}
/////////////////////////
start:
{ if (cond){
   goto outside;
}
    goto start;
}
outside:

/////////////////////
start:
do {

}while (!cond);
outside:

