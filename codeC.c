
#include <stdlib.h>
#include <stdio.h>

 

int N=0;
int arr[10];

void createArray();
void traverseArray();
void insertElement();
void deleteElement();
void sortArray();
void searchElement();
int main() {
    int select;
    int again;
    
    do{
    system("cls");
    printf("\n**Choose Operation ** \n\n 1.Create an Array \n 2. Traverse on Array \n 3. Insert a element in Array \n 4.Delete a element of Array\n 5.Sort the array element in assending order \n 6. Search the given element of Array");
    printf("\n\nEnter the index of choice:");
    scanf("%d",&select);
    system("cls");
    switch(select){
        case 1:
            createArray();
            break;
        case 2:
            traverseArray();
            break; 
        case 3:
            insertElement();
            break;
        case 4:
            deleteElement();
            break;         
        case 5:
            sortArray();
            break;
        case 6:
            searchElement();
            break; 
        default:
        printf("invalid choice");
    } 
   
    printf("Press 1: to perform again\n Press any number: To exit ");
    scanf("%d",&again);
     system("cls");
    }while(again==1);
    return 0;
}
void createArray(){
    printf("*** Create Array***\n\n");
    printf("Enter number of element you want to enter: ");
    scanf("%d",&N);
    printf("***Enter element of array***\n");
    for(int i=0;i<N;i++){
        printf("Enter [%d] element :",i+1);
        scanf("%d",&arr[i]);
    }
     printf("\n\n ");
}
void traverseArray(){
    printf("*** Array Traverse***\n\n");

    printf("\n Array: ");
    for(int i=0;i<N;i++){
        printf("%d,",arr[i]);
    }
     printf("\n\n ");
}
void insertElement(){
    printf("*** Inserting Element in Array***\n\n");

    int e,pos;
    printf("Enter Element:");
    scanf("%d",&e);
    printf("\nEnter Position of Element:");
    scanf("%d",&pos);
    int index=(pos-1);
    if(N==10){
        printf("\nArray is Full: Can't insert more element.\n");
        return;
    }else if(pos>10||pos<0){
        return;
    }else{
        for(int i=N-1;i>=index;i--){
        arr[i+1]=arr[i];
         }
        arr[index]=e;
        N++;
         printf("Element inserted at %d position in array Successfully\n",pos);
     }
      printf("\n\n ");
}
void deleteElement(){
    printf("*** Opration Delete Element of Array***\n\n");
    
    int pos;
    printf("\nEnter position of Element:");
    scanf("%d",&pos);
   int  index=pos-1;
    for(int i=index;i<N;i++ ){
        arr[i]=arr[i+1];
    }
    N--;
       printf("\nElement deleted at %d position in array Successfully\n",pos);
        printf("\n\n ");
}
void searchElement(){
    printf("*** Opration search Element of Array***\n\n");

    int target;
    printf("\nEnter Target Element:");
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("\nFound Element at %d position and %d index in array.",i+1,i);
            return;
        }
    }
     printf("\nElement not Found");
      printf("\n\n ");
}
void sortArray(){
    // bubble sort ::: Time Complaxity{O(n2)}
    int temp;
     for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array Sorted Successfully");

    /*//Selection Sort
       int j,i,min,index;
    for(i=0;i<N-1;i++){
         min=arr[i];
         index=i;
        for(j=i+1;j<N;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;            
            }
        }
        arr[index]=arr[i];
        arr[i]=min;
    }*/
   /*//Insertion sort
   for(int i=1;i<N;i++){
    for(int j=i-1;j>=0;j--){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
   }*/
}
    
    


