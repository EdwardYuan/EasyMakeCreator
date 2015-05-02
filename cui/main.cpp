#include <QCoreApplication>
#include <stdio.h>

void printHelp()
{
    printf("type command easymake with these arguments: \n");
    printf("-h\t show help info");
    printf("-v\t show version");
    printf("-n\"project name\"\t generate makefile with project name \"project name\" ");

}

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    printf("%s", argv[1]);
    if (argc == 0)
        exit(EXIT_FAILURE);
    else if (argv[1] == "--help")
        printHelp();


//    return a.exec();
}


