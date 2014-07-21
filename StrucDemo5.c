/*
$ gcc StrucDemo5.c -o StrucDemo5
$ ./StrucDemo5
Those who wish to change the world according with their desire cannot succeed.
Trying to change it, you damage it; Trying to possess it, you lose it.
So some will lead, while others follow. Some will be warm, others cold. Some will be strong, others weak.
Some will get where they are going. While others fall by the side of the road. So the sage will be neither extravagant nor violent.
				--- Lao Tse
I said, "Preacher, give me strength for round 5."
He said,"What you need is to grow up, son."
I said,"Growin' up leads to growin' old,
And then to dying, and to me that don't sound like much fun."
				--- John Cougar

*/
#include <stdio.h>
 
  struct tao {
   char author[16];
   char str1[256];
   char str2[256];
   char str3[256];
   char str4[256];
  };
 
  typedef struct tao T;
 
  void DataDisplay(T *ptr_s)
 {
   printf("%s\n", ptr_s->str1);
   printf("%s\n", ptr_s->str2);
   printf("%s\n", ptr_s->str3);
   printf("%s\n", ptr_s->str4);
   printf("\t\t\t\t--- %s\n", ptr_s->author);
 }
 
 main()
 {
   T ins[2] = { { "Lao Tse",
     "Those who wish to change the world according with their desire cannot succeed.",
     "Trying to change it, you damage it; Trying to possess it, you lose it.",
     "So some will lead, while others follow. Some will be warm, others cold. Some will be strong, others weak.",
     "Some will get where they are going. While others fall by the side of the road. So the sage will be neither extravagant nor violent." },
     { "John Cougar",
   "I said, \"Preacher, give me strength for round 5.\"",
   "He said,\"What you need is to grow up, son.\"",
   "I said,\"Growin' up leads to growin' old,",
   "And then to dying, and to me that don't sound like much fun.\""
  } };
  int i;
 
 for (i=0; i<2; i++)
     DataDisplay(&ins[i]);
     return 0;
}
