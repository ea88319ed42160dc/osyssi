section .data

  msg db "Hello, world!",0x0a

section .text

  global _start
  
  _start:
    mov eax, 0x0

    loop:    
      call print
      inc eax
      cmp eax, 10
      jl loop

    call quit

  quit:
    ; SYSCALL(1) : exit(0)
    mov eax, 1
    mov ebx, 0
    int 0x80

  print:    
    ; SYSCALL (4): write(1, msg, 14)
    push eax
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, 14
    int 0x80
    pop eax;
    ret
