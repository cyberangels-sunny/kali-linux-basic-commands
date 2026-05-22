


// kali linux commands must know before hacking 

#include<stdio.h>

int main (){
     printf("welcome into a ethical hackers lobby \n");
     printf("cyberangles\n");
     printf("kali linux commands must know before ethical hacking\n");

     while(1){
        printf("1--# ===== NAVIGATION =====\n");
        printf("2--# ===== FILE & DIRECTORY MANAGEMENT =====\n");
        printf("3--# ===== FILE VIEWING =====\n");
        printf("4--# ===== FILE EDITORS =====\n");
        printf("5--# ===== SEARCHING =====\n");
        printf("6--# ===== PERMISSIONS & OWNERSHIP =====\n");
        printf("7--# ===== USER MANAGEMENT =====\n");
        printf("8--# ===== PROCESS MANAGEMENT =====\n");
        printf("9--# ===== NETWORKING =====\n");
        printf("10--# ===== DOWNLOAD / REMOTE =====\n");
        printf("11-# ===== PACKAGE MANAGEMENT =====\n");
        printf("12--# ===== COMPRESSION =====\n");
    printf("13--# ===== DISK & STORAGE =====\n");
        printf("14--# ===== SYSTEM INFO & LOGS =====\n");
        printf("15--# ===== LINKS / FILE INFO =====\n");
        printf("16--# ===== REDIRECTION & PIPES =====\n");
        printf("17--# ===== ENVIRONMENT VARIABLES =====\n");
        printf("18--# ===== TASK SCHEDULING =====\n");
        printf("19--# ===== CYBERSECURITY TOOLS =====\n");
        printf("20--# ===== HELP COMMANDS =====\n");
          
        int sel ; 
        printf("select category of command you want :");
        scanf("%d",&sel);

        if (sel ==1 ){
        printf("pwd\n ls\n cd\n tree\n clear\n");
        } else if(sel == 2){
         printf("touch\n mkdir\n rmdir\n cp\n mv\n rm\n unlink\n");
        }else if (sel ==3 ){
         printf("cat\n less\n more\n head\n tail\n nl\n");
        }else if(sel == 4){
         printf("nano\n vim\n gedit\n");
        }else if (sel == 5){
         printf("find\n grep\n locate\n which\n whereis\n");
        }else if (sel == 6){
         printf("chmod\n chown\n chgrp\n sudo\n su\n");
        }else if(sel == 7){
         printf("whoami\n who\n id\n passwd\n adduser\n userdel\n groups\n");
        }else if (sel == 8){
         printf("ps\n top\n htop\n kill\n killall\n jobs\n bg\n fg\n");
        }
        else if(sel == 9 ){
         printf("ping \n ifconfig \n ip \n netstat \n ss\n traceroute\n dig\n nslookup \nhost \narp");
        }
        else if(sel == 10){
         printf("curl \n wget \n scp \n ssh \n ftp");
        }
     }



    return 0;
}