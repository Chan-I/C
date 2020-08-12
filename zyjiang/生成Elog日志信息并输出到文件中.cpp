#include <sys/time.h>
#include <stdio.h>
#include <time.h>
 
/* debug level define */
//int g_dbg_level;
//FILE *g_log_fp;
 
/* debug level */
#define DBG_INFOR       0x01  // call information
#define DBG_WARNING     0x02  // paramters invalid,  
#define DBG_ERROR       0x04  // process error, leading to one call fails
#define DBG_CRITICAL    0x08  // process error, leading to voip process can't run exactly or exit
 
/* debug macro */
#define DBG(level, fmt, para...)    do \
    { \
    	int g_dbg_level;\
		FILE *g_log_fp;\
    	g_dbg_level = 15;\
    	g_log_fp = fopen("my_program.log","a+");\
    	if (g_log_fp == NULL)\
        	printf("open log file error\n");\
        time_t t = time(NULL);  \
        struct tm *tmm = localtime(&t); \
        if(g_dbg_level & level)     \
        {\
        	switch(level){case 0x01:printf("INFOR    ");break;case 0x02:printf("WARNING  ");break;case 0x04:printf("ERROR    ");break;default:printf("CRITICAL ");break;}	\
            printf("[%d-%02d-%02d %02d:%02d:%02d][%s][%s:%d]" fmt "\n",tmm->tm_year+1900,tmm->tm_mon+1,tmm->tm_mday,tmm->tm_hour,tmm->tm_min,tmm->tm_sec,__FUNCTION__,__FILE__,__LINE__,##para); \
            fprintf(g_log_fp, "[%d-%02d-%02d %02d:%02d:%02d][%s][%s:%d]" fmt "\n",tmm->tm_year+1900,tmm->tm_mon+1,tmm->tm_mday,tmm->tm_hour,tmm->tm_min,tmm->tm_sec,__FUNCTION__,__FILE__,__LINE__,##para); \
        }\
    } while(0)
    
int main()
{
    
    DBG(DBG_INFOR,"INFOR");
    DBG(DBG_WARNING,"WARNING");
    DBG(DBG_ERROR,"ERROR");
    DBG(DBG_CRITICAL,"CRITICAL");
}

