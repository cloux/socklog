/* Public domain. */

#include <unistd.h>
#include "buffer.h"

ssize_t buffer_unixwrite(int fd,const char *buf,unsigned int len)
{
  return write(fd,buf,len);
}
