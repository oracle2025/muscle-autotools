/* This file is Copyright 2000-2013 Meyer Sound Laboratories Inc.  See the included LICENSE.txt file for details. */  

#include <stdio.h>

#include "message/Message.h"
#include "util/String.h"
#include "util/MiscUtilityFunctions.h"
#include "util/NetworkUtilityFunctions.h"
#include "support/Tuple.h"  // make sure the template operators don't mess us up

using namespace muscle;

#define TEST(x) if (!(x)) printf("Test failed, line %i\n",__LINE__)

// This program exercises the String class.
int main(void) 
{
#ifdef TEST_PARSE_ARGS
   while(1)
   {
      char base[512];  printf("Enter string: "); fflush(stdout); if (fgets(base, sizeof(base), stdin) == NULL) base[0] = '\0';

      Message args;
      if (ParseArgs(base, args) == B_NO_ERROR)
      {
         printf("Parsed: "); args.PrintToStream();
      }
      else printf("Parse failed!\n");
   }
#endif

#ifdef TEST_REPLACE_METHOD
   while(1)
   {
      char base[512];      printf("Enter string:    "); fflush(stdout); if (fgets(base,      sizeof(base),      stdin) == NULL) base[0]      = '\0';
      char replaceMe[512]; printf("Enter replaceMe: "); fflush(stdout); if (fgets(replaceMe, sizeof(replaceMe), stdin) == NULL) replaceMe[0] = '\0';
      char withMe[512];    printf("Enter withMe:    "); fflush(stdout); if (fgets(withMe,    sizeof(withMe),    stdin) == NULL) withMe[0]    = '\0';

      String b(base);
      int32 ret = b.Replace(replaceMe, withMe);
      printf(INT32_FORMAT_SPEC": Afterwards, [%s] (" UINT32_FORMAT_SPEC")\n", ret, b(), b.Length());
   }
#endif

   int five=5, six=6;
   muscleSwap(five, six);
   if ((five != 6)||(six != 5)) {printf("Oh no, trivial muscleSwap() is broken!  five=%i six=%i\n", five, six); exit(10);}

   String ss1 = "This is string 1", ss2 = "This is string 2";
   PrintAndClearStringCopyCounts("Before Swap");
   muscleSwap(ss1, ss2);
   PrintAndClearStringCopyCounts("After Swap");
   printf("ss1=[%s] ss2=[%s]\n", ss1(), ss2());

   Point p(1.5,2.5);
   Rect r(3.5,4.5,5.5,6.5);
   int16 dozen = 13;
   String aString = String("%1 is a %2 %3 booltrue=%4 boolfalse=%5 point=%6 rect=%7").Arg(dozen).Arg("baker's dozen").Arg(3.14159).Arg(true).Arg(false).Arg(p).Arg(r);
   printf("arg string = [%s]\n", aString());

   String temp;
   temp.SetCstr("1234567890", 3);
   printf("123=[%s]\n", temp());
   temp.SetCstr("1234567890");
   printf("%s\n", temp());

   String scale("do"); scale = scale.AppendWord("re", ", ").AppendWord("mi").AppendWord(String("fa")).AppendWord("so").AppendWord("la").AppendWord("ti").AppendWord("do");
   printf("scale = [%s]\n", scale());
   
   String rem("Hello sailor");
   printf("[%s]\n", (rem+"maggot"-"sailor")());
   rem -= "llo";
   printf("[%s]\n", rem());
   rem -= "xxx";
   printf("[%s]\n", rem());
   rem -= 'H';
   printf("[%s]\n", rem());
   rem -= 'r';
   printf("[%s]\n", rem());
   rem -= rem;
   printf("[%s]\n", rem());

   String test = "hello";
   test = test + " and " + " goodbye " + '!';
   printf("test=[%s]\n", test());

   test.Replace(test, "foo");
   printf("foo=[%s]\n", test());
   test.Replace("o", test);
   printf("ffoofoo=[%s]\n", test());

   String s1("one");
   String s2("two");
   String s3;
   printf("[%s]\n", s1.AppendWord(s2, ", ").AppendWord(s3, ", ")());

   return 0;
}
