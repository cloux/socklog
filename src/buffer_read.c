/* Public domain. */

#include <unistd.h>
#include "buffer.h"

ssize_t buffer_unixread(int fd,char *buf,unsigned int len)
{
  return read(fd,buf,len);
}
