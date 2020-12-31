//#include<stdio.h>
//#define MAXNAME 25  /*the largest length of mfdname,ufdname,filename*/
//#define MAXCHILD 50 /*the largest child*/
//#define MAX (MAXCHILD*MAXCHILD) /*the size of fpaddrno*/
//
//typedef struct  /*文件结构体*/
//{
//	int  fpaddr;                /*file physical address*/
//	int  flength;               /*file length*/
//	int  fmode;   /*file mode:0-Read Only;1-Write Only;2-Read and Write(default);*/
//	char fname[MAXNAME];        /*file name*/
//} OSFILE;
//
//typedef struct     /*用户结构体*/
//{
//	char ufdname[MAXNAME];   /*ufd name*/
//	OSFILE ufdfile[MAXCHILD];   /*ufd own file*/
//}OSUFD;
//
//typedef struct  /*用户登录结构体*/
//{
//	char ufdname[MAXNAME];       /*ufd name*/
//	char ufdpword[8];            /*ufd password*/
//} OSUFD_LOGIN;
//
//typedef struct     /*文件模式*/
//{
//	int ifopen;     /*ifopen:0-close,1-open*/
//	int openmode;   /*0-read only,1-write only,2-read and write,3-initial*/
//}OSUFD_OPENMODE;
//
//OSUFD *ufd[MAXCHILD];   /*ufd and ufd own files*/
//OSUFD_LOGIN ufd_lp;
//
//int ucount = 0;  /*用户数目*/
//int fcount[MAXCHILD];  /*the count of ufd's files*/
//int loginsuc = 0; /*登录是否成功*/
//
//char username[MAXNAME];  /*record login user's name22*/
//char dirname[MAXNAME];/*record current directory*/
//
//int fpaddrno[MAX];  /*record file physical address num*/
//OSUFD_OPENMODE ifopen[MAXCHILD][MAXCHILD]; /*record file open/close*/
//int wgetchar; /*whether getchar() 0是要getchar 1是不要*/
//
//FILE *fp_mfd, *fp_ufd, *fp_file_p, *fp_file;//货真价实的文件指针
//
//void LoginF() {
//	char loginame[MAXNAME], loginpw[9], logincpw[9], str[50];
//	//登录名称，登录密码，正确的密码，个人文件目录位置
//	int findout; /*login user not exist*/
//	char *rtrim(char *str);  /*remove the trailing blanks.*/
//	char *ltrim(char *str);  /*remove the heading blanks.*/
//	void InputPW(char *password);  /*input password,use '*' replace*/
//	void SetPANo(int RorW);  /*Set physical address num*/
//}
//
//void SetPANo(int RorW) //0 read 1 write
//{
//	if (RorW) {
//		//对"c:\\osfile\\file\\file_p"文件读取
//		//读取的内容放入j中
//		// fpaddrno[j] = 1
//	}
//	else {
//		//对"c:\\osfile\\file\\file_p"文件写入
//		//for (i = 0; i < MAX; i++)
//		//	if (fpaddrno[i] == 1)
//		//		fwrite(&i, sizeof(int), 1, fp_file_p);
//	}
//}
//
//void InputPW(char *password) //录入pw
//{
//	//最长8位
//	//输入'Enter'(13)退出
//	//输入'BackSpace'(8)退格
//}
//
//int ExistD(char *dirname) {
//	//遍历所拥有的用户，找到对应目录下标
//}
//
//void DirF() {
//	//检查相应用户目录是否存在
//	//dirname = username
//	int ExistD(char *dirname);  /*Whether DirName Exist,Exist-i,Not Exist-0*/
//	//存在
//	int j = ExistD(dirname);
//	for (int i; i < fcount[j]; i++) {
//		//展示该目录用户的文件信息
//	}
//	//不存在
//	//展示所有用户信息
//}
//
//void CdF() /*Exchange Dir*/
//{
//	//通过修改dirname来切换目录
//	//如果cd .. 讲dirname 
//}
//
//int ExistF(char *filename)  /*Whether FileName Exist,Exist-i,Not Exist-0*/
//{
//	//遍历用户的文件
//}
//
//int FindPANo()  /*find out physical address num*/
//{
//	int i;
//	for (i = 0; i < MAX; i++)
//		//置1代表有文件，返回位置i
//		if (fpaddrno[i] == 0) { fpaddrno[i] = 1; break; }
//	if (i < MAX) return(i);
//	else return(-1);
//}
//
//int WriteF1()  /*write file*/
//{
//
//}
//
//void CreateF()  /*Create File*/
//{
//	int FindPANo();  /*find out physical address num*/
//	int WriteF1(); /*write file*/
//	int ExistF(char *filename);  /*Whether FileName Exist,Exist-i,Not Exist-0*/
//	int ExistD(char *dirname);  /*Whether DirName Exist,Exist-i,Not Exist-0*/
//	//创建文件，检查用户目录，检查文件重名
//	//一切满足后，开始添加文件信息
//}
//
//int main() {
//	char *rtrim(char *str);  /*remove the trailing blanks.*/
//	char *ltrim(char *str);  /*remove the heading blanks.*/
//	void LoginF();  /*LOGIN FileSystem*/
//	void DirF();  /*Dir FileSystem*/
//	void CdF();  /*Change Dir*/
//	void CreateF();  /*Create File*/
//	void DeleteF(); /*Delete File*/
//	void ModifyFM(); /*Modify FileMode*/
//	void OpenF();  /*Open File*/
//	void CloseF();  /*Close File*/
//	void ReadF(); /*Read File*/
//	void WriteF(); /*Write File*/
//	void QuitF(); /*Quit FileSystem*/
//	void help();
//}