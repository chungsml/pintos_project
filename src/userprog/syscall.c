#include "userprog/syscall.h"
#include <stdio.h>
#include <syscall-nr.h>
#include "threads/interrupt.h"
#include "threads/thread.h"

static void syscall_handler (struct intr_frame *);

void
syscall_init (void) 
{
  intr_register_int (0x30, 3, INTR_ON, syscall_handler, "syscall");
}

static void
syscall_handler (struct intr_frame *f) 
{ 
  
  printf ("system call!\n");
  void *sp = f->esp;
  switch (*(uint32_t *)sp) {
  case SYS_EXIT :
    exit(*(uint32_t *)(sp+4));
    break;



}

//  thread_exit ();

}
void exit(int status) {

   printf("%s: exit(%d)\n", thread_name(), status);
   thread_current()->exit_code = status;

   thread_exit();

}
