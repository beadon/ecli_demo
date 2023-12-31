#include "main.h"

#define EMBEDDED_CLI_IMPL
#include "embedded_cli.h"

EmbeddedCli *cli = embeddedCliNewDefault();

void writeChar(EmbeddedCli *embeddedCli, char c)
{
  // Hello !
  // Handle some serial characters here
  
}

void onCommand(EmbeddedCli *embeddedCli, CliCommand *command)
{
    // your implementation

}

void main()
{

   EmbeddedCliConfig *config = embeddedCliDefaultConfig();
   config->maxBindingCount = 16;
   cli->onCommand = onCommand;
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
