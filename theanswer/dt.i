# 1 "dt.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "dt.c"
# 1 "dt.h" 1
# 10 "dt.h"
extern int dt_base_value;
int dt_get_answer(void);
# 2 "dt.c" 2

int dt_base_value;

static int dt_answer;

static void run_computer(void)
{
 dt_answer = dt_base_value * 7;
}

int dt_get_answer(void)
{
 run_computer();
 return dt_answer;
}
