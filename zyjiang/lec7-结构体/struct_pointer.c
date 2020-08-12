#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}point_t;

int main(){
	point_t *pt=(point_t *)malloc(sizeof(point_t));

	(*pt).x=10;
	(*pt).y=10;
	printf("pt : (%d,%d)\n",(*pt).x,(*pt).y);
	pt->x=20;
	pt->y=20;
	printf("pt : (%d,%d)\n",pt->x,pt->y);
	free(pt);
    system("pause");
	return 0;
}
