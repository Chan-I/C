#include <stdio.h>
#include <stdlib.h>

//以下是和图像相关的数据结构
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef unsigned long LONG;
typedef unsigned char BYTE;

typedef struct tagBITMAPFILEHEADER { 
	WORD    bfType; 
	DWORD   bfSize; 
	WORD    bfReserved1; 
	WORD    bfReserved2; 
	DWORD   bfOffBits; 
} BITMAPFILEHEADER, *PBITMAPFILEHEADER; 

typedef struct tagBITMAPINFOHEADER{
	DWORD  biSize; 
	LONG   biWidth; 
	LONG   biHeight; 
	WORD   biPlanes; 
	WORD   biBitCount; 
	DWORD  biCompression; 
	DWORD  biSizeImage; 
	LONG   biXPelsPerMeter; 
	LONG   biYPelsPerMeter; 
	DWORD  biClrUsed; 
	DWORD  biClrImportant; 
} BITMAPINFOHEADER, *PBITMAPINFOHEADER; 

//主程序
int main(){
	FILE *fp=fopen("qianming.bmp","rb");
	BITMAPFILEHEADER bfh;
	BITMAPINFOHEADER bih;
	BYTE *pbits=NULL;
	int widthbytes,i,j;
	BYTE r,g,b,gray;

	fread(&bfh,sizeof(bfh),1,fp);
	fread(&bih,sizeof(bih),1,fp);
	widthbytes=(bih.biWidth*bih.biBitCount+8)/8;
	while(widthbytes%4)widthbytes++;
	pbits=(BYTE *)malloc(widthbytes*bih.biHeight);
	fread(pbits,1,widthbytes*bih.biHeight,fp);
	fclose(fp);
	fp=fopen("gray.bmp","wb");
	fwrite(&bfh,sizeof(bfh),1,fp);
	fwrite(&bih,sizeof(bih),1,fp);
	for(i=0;i<bih.biHeight;i++){
		BYTE *p=pbits+i*widthbytes;
		for(j=0;j<bih.biWidth;j++){
			
			b=*p++;g=*p++;r=*p++;
			gray= (r*30 + r*59 + b*11 + 50) / 100;
			fwrite(&gray,1,1,fp);
			fwrite(&gray,1,1,fp);
			fwrite(&gray,1,1,fp);
		}
		j=bih.biWidth*3;
		while(j++<widthbytes)fwrite(&gray,1,1,fp);
	}
	fclose(fp);
	free(pbits);
	return 0;
}