
#include <stdio.h>



int main() {
    int aa[100];
    int n,i,f,k,b=0,t;
    
    int s=0,e,mid;
    
    printf("Enter the range:\n");
    scanf("%d",&n);//We mainly get the size of array by using this..

    
      printf("Enter the Array Element\n");
    for(i=0;i<n;i++){
         printf("Enter the Array Element of %d \n",i);
        scanf("%d",&aa[i]);// Enter the array element
    }


    printf("Target :\n");
    scanf("%d",&t);    // We get terget thhis will search from there
    
    

    
    
 while(s<=n){   // it will work untill search is less then or equal to last value
      

    /*  we find the element in from  mid. we deviede our 1st element and last element for finding
      mid possition. if we find terget then using mid==t(terget) then print it either */
mid=(s+n)/2;
if(aa[mid]==t){
    printf("Matched index %d",mid);
    return 0;// stop code in here
}
/*If we not find first time the use this logic for finding where is the our target (t) is it left? then...*/
else if(aa[mid]<t){
    s=mid+1;
    // if it is ture , we asing our start == mid+1
       // note: we only change  frist, not last in here
}

/*If we not find first time the use this logic for finding where is the our target (t) is it right(means less then mid)? then...*/
else if(aa[mid]>t){
    n=mid-1;
    // if it is ture we assing our last is mid-1, cause we already search in mid.. and not find this ,so we in here
    // note: we only change last, not frist in here
    
}
//goes to loop
}
// if we not found the element then our code come in here and print it
   printf("hay man,, this element Not found"); 



    return 0;
}
