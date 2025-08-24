#include "logger.h"

int main ()
{
    log_start ("stdout");
    log_string ("<b>bold</b> <i>italic</i> normal\n");
    log_string ("<red>red<dft> <grn>green<dft> <ylw>yellow<dft> <blu>blue<dft>"
                " <mgn>magenta<dft> <cyn>cyan<dft> <wht>white<dft> default\n");
    log_string ("<b><red>bold red</b><dft>\n");
    return 0;
}