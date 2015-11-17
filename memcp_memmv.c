#include <stdio.h>
#include<string.h>
#include<math.h>
void * memcpy(void * dst, const void * src, size_t num);
void* memove(void* dest, void* source, size_t n);
int main(void) {
	char csrc[] = "ABCDEFGHIJ";
   //char cdest[100];
   //memove(csrc+3, csrc, strlen(csrc)+1);
   memcpy(csrc+3, csrc, strlen(csrc)+1);
   printf("Copied string is %s", csrc+3);
 
   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   memcpy(idest, isrc,  sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   return 0;
}
void * memcpy(void * destination, const void * source, size_t num){
	char* src=(char*)source;
	char* dst=(char*)destination;
	//if ()
	char tmp[num];
	int i;
	for(i=0;i<num;i++)
		tmp[i]=src[i];
	for(i=0;i<num;i++)
		dst[i]=tmp[i];
}
void* memove(void* dest, void* source, size_t n){
	char* dst=(char*)dest;
	char* src=(char*)source;
	int i,j=0;
	if(dest==source)
		return;
	if(source<dest){
		for(i=n-1;i>=0;i--){
			dst[i]=src[i];
			}
		return;}
	if(source>dest)
		for(i=0;i<n;i++)
			dst[i]=src[i];
}
