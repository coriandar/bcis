#include <stdio.h>

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;

void print_string(const s8 * p_string)
{
  printf("%s", p_string);
}

void print_byte(u8 byte)
{
  printf("%c", byte);
}

void print_word(u16 word)
{
  printf("%4x", word);
}

void print_dword(u32 dword)
{
  printf("%8x", dword);
}

void print_newline()
{
  printf("\n");
}

s32 get_length(const s8 * p_string)
{
  const s8 * p_start = p_string;
  
  while ( * p_string != '\0')
  {
    ++p_string;
  }
  return (p_string - p_start);
}

s32 main(void)
{
  s8 text[] = "typedef example text";
  
  print_string(text);
  print_newline();
  
  s32 length = get_length(text);
  for (s32 k = 0; k < length; ++k)
  {
    print_byte(text[k]);
    print_byte('-');
  }
  print_newline();
  
  u16 data = 0xABCD;
  
  u32 more_data = 0x0FEDCBA0;
  
  print_word(data);
  print_newline();
  
  print_dword(more_data);
  print_newline();
  
  return 0;
}