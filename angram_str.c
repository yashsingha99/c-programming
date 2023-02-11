#include <stdio.h>
int main () {
char a [ 100 ]  , b [ 100 ] , t;
gets ( a ) ;
gets ( b ) ;
int i ,  j , flag=0 ,c;
for ( i = 0 ; a[i] ; i++ );
for ( j = 0 ; a[j] ; j++ );
//check weather length is equal orn't.....
if ( i == j ){
   c=i;
   //for bubble sorting.........
for ( i = 0 ; a[i] ; i++ ) {
    for ( j = 0 ;j<c-1;j++ ) {
    //sorting in array of b........
    if ( b [j] > b [j + 1] ){
       t = b [j] ;
       b[j] = b[j + 1];
       b[j + 1] = t ;
    }
    }
}
for ( i = 0 ; a [i] ; i++ ) {
     for ( j = 0 ; j < c - 1 ; j++ ){
     	//sorting in array of a..........
    if ( a [j]  > a [j + 1] ){
       t = a [j] ;
       a [j] = a [j + 1] ;
       a [j + 1] = t ;
    }
     }
}
// print both arrays after sorting.........
puts ( a ) ;
puts ( b ) ;
//this is for check weather anagram or not 
for ( i = 0 ; a[i] ; i++ ) {
    if ( a [i] == b [i] ) {
        flag++ ;
}

}
if( flag == c )
printf( " this is an anagram " );
else
printf( " length is equal but this isn't an anagram: " );
}
else
printf( " lenght isn't equal and not an alagram also: " );

}
//
