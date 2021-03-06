/*
* Copyright (c) 2003-2016 Rony Shapiro <ronys@pwsafe.org>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/

/**
 * \file Linux-specific implementation of some time related functionality
 */

#include "pws_time.h"
#include "../utf8conv.h"

int localtime64_r(const __time64_t *timep, struct tm *result)
{
  return localtime_r(reinterpret_cast<const time_t *>(timep), result) != 0;
}

int pws_os::asctime(TCHAR *s, size_t, tm const *t)
{
  char cbuf[26]; // length specified in man (3) asctime
  asctime_r(t, cbuf);
  std::wstring wstr = pws_os::towc(cbuf);
  std::copy(wstr.begin(), wstr.end(), s);
  return 0;
}
