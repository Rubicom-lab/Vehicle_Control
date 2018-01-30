#pragma once
#include <pthread.h>
#define ECAT_START 1
#define OBD2_START 101
#define APP_START 1001

typedef struct variables {
  const char * name;
  int value;
  int ID;
  int timestamp;
  int timestampS;
  int timestampO;
  int timestampE;
} Var;

enum {APP, TELNET, ECAT, OBD2};
enum {NON, GET, SET};

//extern int segNo;
//extern Var ecat_var[14];
//extern Var obd2_var[10];
