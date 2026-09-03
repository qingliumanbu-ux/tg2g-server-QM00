/*<remark>=========================================================
/// <summary>
/// 质量模块公共函数
/// <para></para>
/// </summary>
/// <param name=""></param>
/// <returns>无</returns>
/// <para>
/// 版权: Baosight Software LTD.co Copyright (c) 2012
/// 作者: 180458
/// 日期: 2012-03-30
/// 功能: 质量模块公共函数
/// 修改历史：
/// 日期:________；修改人：________; 需求提出人________
/// 变更内容:
/// </para>
===========================================================</remark>*/

#include "stdafx.h"
// #include "qm.h"
#include "tqmtooo.h"
//#include <windows.h>

BM2_FUNCTION_EXPORT
int f_qm00_util()
{
	return 0;
}

// BM2_FUNCTION_EXPORT
// int ZZPrint(int level, const char * msg)
// {
	// int pid = getpid();

	// char sz_pid[13];

	// FILE *fp;

	// char sz_time_buff[15];
	// char sz_time_head[5];
	// char sz_time_tail[7];
	// char sz_logLevel[10];

	// char sz_year[5] = "";
	// char sz_month[3] = "";
	// char sz_day[3] = "";
	// char sz_hour[3] = "";
	// char sz_minite[3] = "";
	// char sz_second[3] = "";
	// char sz_microSecond[4] = "";


	// char sz_trace_file[101];


	// //struct tms tms_now;
	// //clock_t clk_now;

	// //struct timeval tv;

	// gettime(sz_time_buff);

	// //SplitTime(sz_time_buff, sz_time_head, sz_time_tail);

	// strncpy(sz_time_head, sz_time_buff + 4, 4);


	// strncpy(sz_year, sz_time_buff, 4);
	// strncpy(sz_month, sz_time_buff + 4, 2);
	// strncpy(sz_day, sz_time_buff + 6, 2);
	// strncpy(sz_hour, sz_time_buff + 8, 2);
	// strncpy(sz_minite, sz_time_buff + 10, 2);
	// strncpy(sz_second, sz_time_buff + 12, 2);

	// // 记录时间
	// //gettimeofday(&tv, NULL);

	// SYSTEMTIME systime;
	// GetLocalTime(&systime);

	// //sprintf(sz_microSecond, "%03d", (int)(tv.tv_usec*0.001));

	// sprintf(sz_microSecond, "%03d", (int)(systime.wMilliseconds));


	// sprintf(sz_pid, "%d", pid);

	// strcpy(sz_trace_file, "C:\\BSMesWare\\Server\\Build\\dcdora\\Trace\\");
	// strcat(sz_trace_file, s.svc_name);
	// // strcat(sz_trace_file, "_zz"         );
	// strcat(sz_trace_file, ".");
	// strcat(sz_trace_file, sz_time_head);
	// strcat(sz_trace_file, ".");
	// strcat(sz_trace_file, sz_pid);







	// if ((fp = fopen(sz_trace_file, "a")) == NULL)
	// {
		// sz_trace_file[14] = '0';
		// if ((fp = fopen(sz_trace_file, "a")) == NULL)
		// {
			// return 0;
		// }

		// // return -1;
	// }




	// fprintf(fp, "<LOG_START>%s-%s-%s %s:%s:%s.%s\t%s\n",
		// sz_year,
		// sz_month,
		// sz_day,
		// sz_hour,
		// sz_minite,
		// sz_second,
		// sz_microSecond,
		// msg
		// );
	// // fprintf(fp,"%s[%.2f] [%s] %s\n", sz_time_tail, 0, s.svc_name, msg);

	// fclose(fp);

	// return 0;

// }

// /*
// 打印TRACE
// */
// BM2_FUNCTION_EXPORT
// int ZZLog(int type, int level, char *formate, ...)
// {
	// // static int cqid;
	// va_list argptr;
	// int cnt;
	// int ret = 0;
	// char buffer[5120];

	// va_start(argptr, formate);
	// cnt = vsprintf(buffer, formate, argptr);
	// va_end(argptr);

	// //EILog(formate,argptr);
	// switch (type)
	// {
	// case 1:                 /* dump the trace to file */
		// ret = ZZPrint(level, buffer);
		// break;

	// case 2:                /*dump the trace to database */
		// // cqid=EDOpenQue();
		// // printf("send cqid: %d\n",cqid);
		// // ret=EDEnterQue(cqid,buffer,MAX_LEN);
		// // if(( cqid < 0) ||(ret <0))
		// // {
		// // ret=1;
		// // }
		// // else
		// // {
		// // ret=0;
		// // }
		// break;

	// case 3:                 /* dump the trace to form */
		// break;

	// default:
		// break;
	// }
	// return(ret);
// }