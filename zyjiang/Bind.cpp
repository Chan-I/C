#include <windows.h>
#include <sqlext.h>
#include <stdio.h>
#include <time.h>
 
SQLHENV henv = NULL;
SQLHDBC hdbc = NULL;
SQLHSTMT hstmt = NULL;
 
SQLRETURN retcode;
#define COUNT  (100000)
 
#define ROW_ARRAY_SIZE 1000
 
typedef struct{
	SQLINTEGER rec_num;
	SQLINTEGER rec_numInd;
	SQLCHAR date[9];
	SQLINTEGER dateInd;
	SQLCHAR time[9];
	SQLINTEGER timeInd;
	SQLCHAR reff[11];
	SQLINTEGER reffInd;
	SQLCHAR acc[11];
	SQLINTEGER accInd;
	SQLCHAR stock[7];
	SQLINTEGER stockInd;
	SQLCHAR bs[2];
	SQLINTEGER bsInd;
	SQLCHAR price[9];
	SQLINTEGER priceInd;
	SQLCHAR qty[9];
	SQLINTEGER qtyInd;
	SQLCHAR status[2];
	SQLINTEGER statusInd;
	SQLCHAR owflag[4];
	SQLINTEGER owflagInd;
	SQLCHAR ordrec[9];
	SQLINTEGER ordrecInd;
	SQLCHAR firmid[6];
	SQLINTEGER firmidInd;
	SQLCHAR branchid[6];
	SQLINTEGER branchidInd;
	SQLSCHAR checkord[16];
	SQLINTEGER checkordInd;
} ORDWTH;
 
typedef struct{
	SQLINTEGER id;
	SQLCHAR date[20];
	SQLCHAR abbr[10];
	//
	SQLINTEGER idInd;
	SQLINTEGER dateInd;
	SQLLEN abbrInd;
} Test;
 
Test test_array[ROW_ARRAY_SIZE];
 
ORDWTH  ordwth_array[ROW_ARRAY_SIZE];
 
int rec_num = 1;
 
void main()
{
	retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
	retcode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER*)SQL_OV_ODBC3, 0);
 
	retcode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);
	retcode = SQLSetConnectAttr(hdbc, SQL_LOGIN_TIMEOUT, (SQLPOINTER)5, 0);
 
	retcode = SQLConnect(hdbc, (SQLCHAR*) "ctp2_lx", SQL_NTS, (SQLCHAR*)"sa", SQL_NTS, (SQLCHAR*)"123456", SQL_NTS);
	if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO)
	{
 
	}
	else
	{
		SQLCHAR msg[128];
		SQLCHAR state[128];
		SQLINTEGER error_id;
		SQLSMALLINT text;
		SQLGetDiagRec(SQL_HANDLE_DBC, hdbc, 1, state, &error_id, msg, 128, &text);
		printf("db connect fail, sqlstate=%s, errormsg=%s\n", state, msg);
		system("pause");
		return;
	}
 
 
	retcode = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
	printf("Inserting...\n");
 
	time_t begin;
	time(&begin);
 
 
	//�趨SQL_ATTR_ROW_ARRAY_SIZE���ԣ�bulk�ĳ���
	//SQLSetStmtAttr(hstmt, SQL_ATTR_ROW_ARRAY_SIZE, (SQLPOINTER)ROW_ARRAY_SIZE, 0);
 
	SQLSetStmtAttr(hstmt, SQL_ATTR_ROW_BIND_TYPE, (SQLPOINTER)sizeof(ORDWTH), 0);
 
	retcode = SQLSetStmtAttr(hstmt, SQL_ATTR_PARAM_BIND_TYPE, (SQLPOINTER)sizeof(ORDWTH), SQL_IS_INTEGER);
 
	
	retcode = SQLSetStmtAttr(hstmt, SQL_ATTR_PARAMSET_SIZE, (SQLPOINTER)(long)ROW_ARRAY_SIZE, SQL_IS_INTEGER);
 
	SQLUSMALLINT ParamStatusArray[ROW_ARRAY_SIZE] = { 0 };
	
	retcode = SQLSetStmtAttr(hstmt, SQL_ATTR_ROW_STATUS_PTR, ParamStatusArray, 0);
	SQLINTEGER nBindOffset = 0;
	SQLSetStmtAttr(hstmt, SQL_ATTR_ROW_BIND_OFFSET_PTR, (SQLPOINTER)&nBindOffset, 0);
 
	//retcode = SQLSetStmtAttr(hstmt, SQL_ATTR_CONCURRENCY, (SQLPOINTER)SQL_CONCUR_ROWVER, 0);
 
	//retcode = SQLSetStmtAttr(hstmt, SQL_ATTR_CURSOR_TYPE, (SQLPOINTER)SQL_CURSOR_DYNAMIC, 0);
 
	SQLCHAR *sql = (SQLCHAR*)"Insert into ashare_ordwth(rec_num, date, time, reff, acc, stock, bs, price, qty, status, owflag, ordrec, firmid, branchid, checkord) Values(?, ?, ?, ?, ?,?,?, ?, ?, ?, ?, ?, ?, ?, ?)";
	//SQLCHAR *sql = (SQLCHAR*)"Insert into ashare_ordwth(rec_num) Values(?)";
 
	SQLBindParameter(hstmt, 1, SQL_PARAM_INPUT, SQL_C_LONG, SQL_INTEGER, sizeof(ordwth_array[0].rec_num), 0, &ordwth_array[0].rec_num, sizeof(ordwth_array[0].rec_num), &ordwth_array[0].rec_numInd);
    SQLBindParameter(hstmt, 2, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].date) - 1, 0, &ordwth_array[0].date, sizeof(ordwth_array[0].date), &ordwth_array[0].dateInd);
    SQLBindParameter(hstmt, 3, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].time) - 1, 0, &ordwth_array[0].time, sizeof(ordwth_array[0].time), &ordwth_array[0].timeInd);
	SQLBindParameter(hstmt, 4, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].reff) - 1, 0, &ordwth_array[0].reff, sizeof(ordwth_array[0].reff), &ordwth_array[0].reffInd);
	SQLBindParameter(hstmt, 5, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].acc) - 1, 0, &ordwth_array[0].acc, sizeof(ordwth_array[0].acc), &ordwth_array[0].accInd);
	SQLBindParameter(hstmt, 6, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].stock) - 1, 0, &ordwth_array[0].stock, sizeof(ordwth_array[0].stock), &ordwth_array[0].stockInd);
	SQLBindParameter(hstmt, 7, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].bs) - 1, 0, &ordwth_array[0].bs, sizeof(ordwth_array[0].bs), &ordwth_array[0].bsInd);
	SQLBindParameter(hstmt, 8, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].price) - 1, 0, &ordwth_array[0].price, sizeof(ordwth_array[0].price), &ordwth_array[0].priceInd);
	SQLBindParameter(hstmt, 9, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].qty) - 1, 0, &ordwth_array[0].qty, sizeof(ordwth_array[0].qty), &ordwth_array[0].qtyInd);
	SQLBindParameter(hstmt, 10, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].status) - 1, 0, &ordwth_array[0].status, sizeof(ordwth_array[0].status), &ordwth_array[0].statusInd);
	SQLBindParameter(hstmt, 11, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].owflag) - 1, 0, &ordwth_array[0].owflag, sizeof(ordwth_array[0].owflag), &ordwth_array[0].owflagInd);
	SQLBindParameter(hstmt, 12, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].ordrec) - 1, 0, &ordwth_array[0].ordrec, sizeof(ordwth_array[0].ordrec), &ordwth_array[0].ordrecInd);
	SQLBindParameter(hstmt, 13, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].firmid) - 1, 0, &ordwth_array[0].firmid, sizeof(ordwth_array[0].firmid), &ordwth_array[0].firmidInd);
	SQLBindParameter(hstmt, 14, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_CHAR, sizeof(ordwth_array[0].branchid) - 1, 0, &ordwth_array[0].branchid, sizeof(ordwth_array[0].branchid), &ordwth_array[0].branchidInd);
	SQLBindParameter(hstmt, 15, SQL_PARAM_INPUT, SQL_C_BINARY, SQL_BINARY, sizeof(ordwth_array[0].checkord), 0, &ordwth_array[0].checkord, sizeof(ordwth_array[0].checkord), &ordwth_array[0].checkordInd);
 
	SQLSetConnectAttr(hdbc, SQL_ATTR_AUTOCOMMIT, (SQLPOINTER)SQL_AUTOCOMMIT_OFF, 0);
	retcode = SQLPrepare(hstmt, sql, SQL_NTS);
 
	for (int j = 0; j < COUNT / ROW_ARRAY_SIZE; j++)
	{
		for (int i = 0; i < ROW_ARRAY_SIZE; i++)
		{
			ordwth_array[i].rec_num = rec_num++;
			ordwth_array[i].ordrecInd = 0;
			strcpy((char*)ordwth_array[i].date, "20150120");
			ordwth_array[i].dateInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].time, "13:20:10");
			ordwth_array[i].timeInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].reff, "1234567890");
			ordwth_array[i].reffInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].acc, "0000011111");
			ordwth_array[i].accInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].stock, "123456");
			ordwth_array[i].stockInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].bs, "B");
			ordwth_array[i].bsInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].price, "1.000");
			ordwth_array[i].priceInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].qty, "1000");
			ordwth_array[i].qtyInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].status, "R");
			ordwth_array[i].statusInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].owflag, "ORD");
			ordwth_array[i].owflagInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].ordrec, "1");
			ordwth_array[i].ordrecInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].firmid, "123");
			ordwth_array[i].firmidInd = SQL_NTS;
			strcpy((char*)ordwth_array[i].branchid, "20201");
			ordwth_array[i].branchidInd = SQL_NTS;
			::memset(ordwth_array[i].checkord, 0, sizeof(ordwth_array[i].checkord));
			ordwth_array[i].checkordInd = sizeof(ordwth_array[i].checkord);
		}
		//ִ�����
		retcode = SQLExecute(hstmt);
		if (retcode == SQL_ERROR)
		{
			SQLCHAR msg[128];
			SQLCHAR state[128];
			SQLINTEGER error_id;
			SQLSMALLINT text;
			SQLGetDiagRec(SQL_HANDLE_STMT, hstmt, 1, state, &error_id, msg, 128, &text);
			printf("db Insert fail, sqlstate=%s, errormsg=%s\n", state, msg);
			SQLEndTran(SQL_HANDLE_DBC, hdbc, SQL_ROLLBACK);
			system("pause");
			return;
		}
		else if (retcode == SQL_SUCCESS_WITH_INFO)
		{
			SQLCHAR msg[128];
			SQLCHAR state[128];
			SQLINTEGER error_id;
			SQLSMALLINT text;
			SQLGetDiagRec(SQL_HANDLE_STMT, hstmt, 1, state, &error_id, msg, 128, &text);
			printf("warning msg=%s\n", msg);
		}
		SQLEndTran(SQL_HANDLE_DBC, hdbc, SQL_COMMIT);
	}
	time_t end;
	time(&end);
	printf("Insert %d records in %lld seconds, average insert speed: %lld\n", COUNT, end - begin, COUNT / (end - begin));
	//printf("Insert %d records in %lld seconds\n", COUNT, end - begin);
	system("pause");
	return;
} 
