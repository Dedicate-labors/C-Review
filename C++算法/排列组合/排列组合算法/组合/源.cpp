//#include<stdio.h>
//#define MAXNAME 25  /*the largest length of mfdname,ufdname,filename*/
//#define MAXCHILD 50 /*the largest child*/
//#define MAX (MAXCHILD*MAXCHILD) /*the size of fpaddrno*/
//
//typedef struct  /*�ļ��ṹ��*/
//{
//	int  fpaddr;                /*file physical address*/
//	int  flength;               /*file length*/
//	int  fmode;   /*file mode:0-Read Only;1-Write Only;2-Read and Write(default);*/
//	char fname[MAXNAME];        /*file name*/
//} OSFILE;
//
//typedef struct     /*�û��ṹ��*/
//{
//	char ufdname[MAXNAME];   /*ufd name*/
//	OSFILE ufdfile[MAXCHILD];   /*ufd own file*/
//}OSUFD;
//
//typedef struct  /*�û���¼�ṹ��*/
//{
//	char ufdname[MAXNAME];       /*ufd name*/
//	char ufdpword[8];            /*ufd password*/
//} OSUFD_LOGIN;
//
//typedef struct     /*�ļ�ģʽ*/
//{
//	int ifopen;     /*ifopen:0-close,1-open*/
//	int openmode;   /*0-read only,1-write only,2-read and write,3-initial*/
//}OSUFD_OPENMODE;
//
//OSUFD *ufd[MAXCHILD];   /*ufd and ufd own files*/
//OSUFD_LOGIN ufd_lp;
//
//int ucount = 0;  /*�û���Ŀ*/
//int fcount[MAXCHILD];  /*the count of ufd's files*/
//int loginsuc = 0; /*��¼�Ƿ�ɹ�*/
//
//char username[MAXNAME];  /*record login user's name22*/
//char dirname[MAXNAME];/*record current directory*/
//
//int fpaddrno[MAX];  /*record file physical address num*/
//OSUFD_OPENMODE ifopen[MAXCHILD][MAXCHILD]; /*record file open/close*/
//int wgetchar; /*whether getchar() 0��Ҫgetchar 1�ǲ�Ҫ*/
//
//FILE *fp_mfd, *fp_ufd, *fp_file_p, *fp_file;//�����ʵ���ļ�ָ��
//
//void LoginF() {
//	char loginame[MAXNAME], loginpw[9], logincpw[9], str[50];
//	//��¼���ƣ���¼���룬��ȷ�����룬�����ļ�Ŀ¼λ��
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
//		//��"c:\\osfile\\file\\file_p"�ļ���ȡ
//		//��ȡ�����ݷ���j��
//		// fpaddrno[j] = 1
//	}
//	else {
//		//��"c:\\osfile\\file\\file_p"�ļ�д��
//		//for (i = 0; i < MAX; i++)
//		//	if (fpaddrno[i] == 1)
//		//		fwrite(&i, sizeof(int), 1, fp_file_p);
//	}
//}
//
//void InputPW(char *password) //¼��pw
//{
//	//�8λ
//	//����'Enter'(13)�˳�
//	//����'BackSpace'(8)�˸�
//}
//
//int ExistD(char *dirname) {
//	//������ӵ�е��û����ҵ���ӦĿ¼�±�
//}
//
//void DirF() {
//	//�����Ӧ�û�Ŀ¼�Ƿ����
//	//dirname = username
//	int ExistD(char *dirname);  /*Whether DirName Exist,Exist-i,Not Exist-0*/
//	//����
//	int j = ExistD(dirname);
//	for (int i; i < fcount[j]; i++) {
//		//չʾ��Ŀ¼�û����ļ���Ϣ
//	}
//	//������
//	//չʾ�����û���Ϣ
//}
//
//void CdF() /*Exchange Dir*/
//{
//	//ͨ���޸�dirname���л�Ŀ¼
//	//���cd .. ��dirname 
//}
//
//int ExistF(char *filename)  /*Whether FileName Exist,Exist-i,Not Exist-0*/
//{
//	//�����û����ļ�
//}
//
//int FindPANo()  /*find out physical address num*/
//{
//	int i;
//	for (i = 0; i < MAX; i++)
//		//��1�������ļ�������λ��i
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
//	//�����ļ�������û�Ŀ¼������ļ�����
//	//һ������󣬿�ʼ����ļ���Ϣ
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