#include <stdio.h>
// function prototype
size_t linearSearch(const int array[], int key, size_t size);
// function main begins program execution
int main(void)
{
	int size, array[5];
  printf("Enter the number of elements in the array\n");
  scanf("%d", &size);
  size_t x;

 printf("Enter %d integers \n", size ); 

 for (x = 0; x < size; x++){
 	scanf("%d", &array[x]);
 }

printf("Enter integer search key: ");
int searchKey; // value to locate in array a
scanf("%d", &searchKey);
// attempt to locate searchKey in array a
size_t index = linearSearch(array, searchKey, size);
// display results
if (index != -1) {
printf("Found value at index %d\n", index);
}
else {
puts("Value not found");
}
}

size_t linearSearch(const int array[], int key, size_t size)
{ 
	int location;
if (array[size] == key) {
return size; // return location of key
}  
else if (size == -1){
  return -1;
}
else{
	return (location = linearSearch(array, key, size-1));
 }

}
