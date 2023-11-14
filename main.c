#include "main.h"

#define EMBEDDED_CLI_IMPL
#include "embedded_cli.h"

// compiler won't find the .c unless added here
#include "embedded_cli.c"

EmbeddedCli *cli = embeddedCliNewDefault();

void writeChar(EmbeddedCli *embeddedCli, char c)
{
  // Hello !
  // Handle some serial characters here
  
}

void main()
{

   EmbeddedCliConfig *config = embeddedCliDefaultConfig();
   config->maxBindingCount = 16;
   cli->writeChar = writeChar;

   while(TRUE)
   {
      embeddedCliProcess(cli);

   }

}


/// For eCLI Command Processing
void onLed(EmbeddedCli *cli, char *args, void *context)
{
   // use args as raw null-terminated string of all arguments
  
   // Use if args should be tokenized
//   cnst char * arg = embeddedCliGetToken(args, pos); // args are counted from 1 (not from 0)
// uint8_t pos = embeddedCliFindToken(args, argument);
// uint8_t count = embeddedCliGetTokenCount(const char *tokenizedStr);

}
