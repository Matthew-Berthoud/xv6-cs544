#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


void delay(int count)
{
    int i;
    int j, k;
    int *data;

    data = (int *)malloc(sizeof(int) * 1024 * 10);
    if (data <= 0)
        printf(1, "Error on memory allocation \n");

    for (i = 0; i < count; i++)
    {
        for (k = 0; k < 5700; k++)
            for (j = 0; j < 1024 * 10; j++)
                data[j]++;
    }
}


// int testcase5_main(int argc, char *argv[])
// {
//     if (argc < 2)
//     {
//         printf(1, "test-case <number-of-children>\n");
//         exit();
//     }
//     int N = atoi(argv[1]);
// 
//     int pids[N];
//     int rets[N];
//     setprio(1000);
//     printf(1, "Priority of parent process = %d\n", getprio());
// 
//     for (int i = 0; i < N; i++)
//     {
//         // * Set process priority
//         // * Change priority of children in different order
//         //   and verify your implementations !!!
//         int priority = 10*i + 1 ;
// 
//         int ret = fork();
//         if (ret == 0)
//         {
//             setprio(priority);
//             delay(20);
//             exit();
//         }
//         else if (ret > 0)
//         {
//             pids[i] = ret;
//         }
//         else
//         {
//             printf(1, "fork error \n");
//             exit();
//         }
//     }
// 
//     for (int i = 0; i < N; i++)
//     {
//         rets[i] = wait();
//     }
// 
//     printf(1, "\nAll children completed\n");
//     for (int i = 0; i < N; i++)
//         printf(1, "Child %d.    pid %d\n", i, pids[i]);
// 
//     printf(1, "\nExit order \n");
//     for (int i = 0; i < N; i++)
//         printf(1, "pid %d\n", rets[i]);
// 
//     //exit();
// }
// 
// 
// int testcase6_main(int argc, char *argv[])
// {
//     if (argc < 2)
//     {
//         printf(1, "test-case <number-of-children>\n");
//         exit();
//     }
//     int N = atoi(argv[1]);
// 
//     int pids[N];
//     int rets[N];
//     setprio(1000);
//     printf(1, "Priority of parent process = %d\n", getprio());
// 
//     for (int i = 0; i < N; i++)
//     {
//         // * Set process priority
//         // * Change priority of children in different order
//         //   and verify your implementations !!!
//       int priority = 10*(N - i);
// 
//         int ret = fork();
//         if (ret == 0)
//         {
//             setprio(priority);
//             delay(20);
//             exit();
//         }
//         else if (ret > 0)
//         {
//             pids[i] = ret;
//         }
//         else
//         {
//             printf(1, "fork error \n");
//             exit();
//         }
//     }
// 
//     for (int i = 0; i < N; i++)
//     {
//         rets[i] = wait();
//     }
// 
//     printf(1, "\nAll children completed\n");
//     for (int i = 0; i < N; i++)
//         printf(1, "Child %d.    pid %d\n", i, pids[i]);
// 
//     printf(1, "\nExit order \n");
//     for (int i = 0; i < N; i++)
//         printf(1, "pid %d\n", rets[i]);
// 
//     //exit();
// }


int main(void)
{
    printf(0, "\n======== testcase 0 ========\n");
    for(int i=0; i<10; i++)
        hello();

    printf(0, "\n======== testcase 1 ========\n");
    for (int i = 0; i < 10; i++){
        helloYou("Calling from XV6");
        helloYou("Welcome to XV6");
    }

    printf(0, "\n======== testcase 2 ========\n");
    printf(1, "Total Number of Active Processes: %d\n", getNumProc());
    printf(1, "Maximum PID: %d\n", getMaxPid());

    printf(0, "\n======== testcase 3 ========\n");
    // struct processInfo info;
    // int pid;
    // printf(1, "PID\tSIZE\tNumber of Context Switch\n");
    // for(int i=1; i<=getMaxPid(); i++)
    // {
    //     pid = i;
    //     if(getProcInfo(pid, &info) == 0)
	//   printf(1, "%d\t%d\t%d\n", info.pid, info.psize, info.numberContextSwitches);
    // }

    printf(0, "\n======== testcase 4 ========\n");
    // for(int i=1; i<10; i++){
    //     setprio(i);
    //     printf(1, "Priority : %d\n", getprio());
    // }

    printf(0, "\n======== testcase 5 ========\n");
    // char *argv = {"test-case", "5"};
    // testcase5_main(2, argv);

    printf(0, "\n======== testcase 6 ========\n");
    // testcase6_main(2, argv);

    exit();
}
