#include <stdio.h>

int main(){
int arr[]={2,7,11,15};
int count= sizeof(arr)/sizeof(arr[0]);
int target = 17;
for(int i=0;i<count;i++){
 for (int j = 0; j < count; j++)
 {
    if(arr[i]+arr[j]==target){
        printf("%d %d",i,j);
        return 0;
    }
 }
 
}
printf("no solution exist");
return 0;

}
