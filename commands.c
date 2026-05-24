


// kali linux commands must know before hacking 

#include<stdio.h>

int main (){
     printf("\n \n /////--->welcome into a ethical hackers lobby--->\n");
     printf("\n ====cyberangles\n");
     printf("\n!!!! ====kali linux commands must know before ethical hacking\n\n");

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
        printf("21--# ===== command not found====\n");
          
        
        int sel ; 
        printf("select category of command you want :");
        if(scanf("%d",&sel)!=1){   // this line stop loop if while running programme 
            printf("enter a only numeric value \n");
            while(getchar()!='\n');  // this line clear input buffer 
            continue;
        }

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
        else if(sel == 11){
            printf("apt\n apt-get\n dpkg\n snap\napt\n apt-get\n dpkg\n snap\n");
        }
        else if(sel == 12){
            printf("tar\n zip\n unzip\n gzip\n gunzip\n rar\n unrar\n");
        }
        else if(sel == 13){
            printf("df\n du\n fdisk\n mount\n umount\n lsblk\n");
        }
        else if(sel == 14){
            printf("uname\n hostname\n date\n uptime\n free\n dmesg\n journalctl\n history\n");
        }else if(sel == 15){
            printf("ln\n stat\n file\n");
        }
        else if(sel == 16){
            printf(">\n >>\n <\n |\n tee\n xargs\n>\n >>\n <\n |\n tee\n xargs\n>\n >>\n <\n |\n tee\n xargs\n");
        }else if(sel == 17){
            printf("env\n export\n echo $PATH\n printenv\n");
        }else if(sel == 18){
            printf("cron\n crontab\n at\n");
        }else if(sel == 19){
            printf("nmap\n whatweb\n whois\n sqlmap\n hydra\n aircrack-ng\n wireshark\n tcpdump\n john\n hashcat\n nikto\n gobuster\n");
        }else if(sel == 20){
            printf("man\n --help\n apropos\n info\n");
        }
        else if (sel == 21){
            printf("\n=== if any commands is missed so you can read manually or you can search===\n");
        }
        else {
            printf("\nwarning --- enter a valid option ---\n");
        }

     }



    return 0;
}


// ready to push on git hub --cyberangles