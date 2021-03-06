/******************************************************************************
	项目名称	：SGE800计量智能终端业务平台
	文件		：dbserver.c
	描述		：本文件实现了数据访问模块接口
	版本		：0.1
	作者		：孙锐
	创建日期	：2010.12
******************************************************************************/

//业务平台配置头文件
#include "framework/config.h"

//C库头文件
#include <sqlite3.h>

//基础平台头文件
#include "sge_core/error.h"

//业务平台头文件
#include "framework/dbserver.h"


/*************************************************
  宏定义
*************************************************/


/*************************************************
  结构类型定义
*************************************************/



/*************************************************
  静态全局变量定义
*************************************************/




/*************************************************
  API函数实现
*************************************************/
//数据访问模块初始化
int dbserver_init(void){
	int ret = 0;
	goto error;error:
	return ret;
}
