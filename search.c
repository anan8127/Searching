#include <stdio.h>

int arr[5] ={12, 45, 87, 93, 106};
int search(int ele){
    if(ele > arr[4])
    {
        printf("Element greater than last index\n");
        return -1;
    }
    int i;
    for(i=0; i<5; i++){
        if(ele == arr[i]){
            printf("Element found\n");
            return i;
        }
        else if(ele<arr[i]){
            printf("Element not found");
            return -1;
        }
        
    }
    if(i==5){
        printf("Element not found\n");
        return -1;
    }
    
}

int main() {
    int index = search(24);
    if(index != -1){
        printf("The value is at %d", index);
    }
    
    return 0;
}