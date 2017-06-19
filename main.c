//
//  main.c
//  GPS
//
//  Created by 20161104614 on 2017/6/16.
//  Copyright © 2017年 20161104614. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,a[10],j,t;
    FILE *fp1 = fopen("//Users//a20161104614//Desktop//GPS//gpsdata.txt","r+");
    FILE *fp2 = fopen("//Users//a20161104614//Desktop/GPS//gpsdatas.txt","w");
    if(fp1==NULL)
    {
        printf("打开文件夹失败!\n");
    }
    else
    {
        return 0;
    }
}
