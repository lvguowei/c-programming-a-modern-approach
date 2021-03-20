#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void new_cmd() {
  puts("new");
}
void open_cmd() {
  puts("open");
}
void close_cmd() {
  puts("close");
}
void close_all_cmd() {
  puts("close all");
}
void save_cmd() {
  puts("save");
}
void save_as() {
  puts("save as");
}
void save_all_cmd() {
  puts("save all");
}
void print_cmd() {
  puts("print");
}
void exit_cmd() {
  puts("exit");
}

struct {
  char *cmd_name;
  void (*cmd_pointer) (void);
} file_cmd[] = 
  {{"new", new_cmd},
   {"open", open_cmd},
   {"close", close_cmd},
   {"close all", close_all_cmd},
   {"save", save_cmd},
   {"save as", save_as},
   {"save all", save_all_cmd},
   {"print", print_cmd},
   {"exit", exit_cmd}
  };

void run(const char *cmd) {

  for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++) {
    if (strcmp(cmd, file_cmd[i].cmd_name) == 0) {
     file_cmd[i].cmd_pointer();
    }
  }
}

int main(void) {
  run("close");
  return 0;
}
