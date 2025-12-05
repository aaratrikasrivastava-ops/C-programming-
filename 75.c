#include <stdio.h>
int main(){
    char filename[100], text[1000];
    scanf("%s", filename);
    getchar();
    fgets(text,sizeof(text),stdin);
    FILE *fp=fopen(filename,"a");
    if(fp==NULL){
        printf("Error opening file.");return 1;}
    fputs(text,fp);
    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}
