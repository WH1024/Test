/* ************************************************************************
> File Name:     lseek.c
> Author:        huangweihan
> 
> Created Time:  Tue 09 Nov 2021 06:34:30 AM PST
> Description:   
 ************************************************************************/
/*
 * 标准C库的函数
   #include<stdio.h>
    int fseek(FILE *stream, long offset, int whence);

   Linux系统函数
    #include<sys/types.h>
    #include<unistd.h>
    off_t lseek(int fd, off_t offset, int whence);
        参数：
            - fd: 文件描述符，通过open得到的，通过这个fd操作某个文件
            - offset：偏移量
            - whence: 
                SEEK_SET
                    设置文件指针的偏移量
                SEEK_CUR
                    设置偏移量：当前位置+第二个参数offset的值
                SEEK_END
                    设置偏移量：文件大小+第二个参数offset的值
    作用：
        1. 移动文件指针到头文件

                    
 
 */

