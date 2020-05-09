/***************************************************************************
  Copyright (C) 2020 Christoph Reichenbach


 This program may be modified and copied freely according to the terms
 of the GNU general public license (GPL), verison 3, as long as the
 above copyright notice and the licensing information contained herein
 are preserved.

 Please refer to www.gnu.org for licensing details.

 This work is provided AS IS, without warranty of any kind, expressed or
 implied, including but not limited to the warranties of merchantability,
 noninfringement, and fitness for a specific purpose. The author will not
 be held liable for any damage caused by this work or derivatives of it.

 By using this source code, you agree to the licensing terms as stated
 above.


 Please contact the maintainer for bug reports or inquiries.

 Current Maintainer:

    Christoph Reichenbach (CR) <creichen@gmail.com>

***************************************************************************/
#include "papi_Wrapper.h"
#include "papijava.h"

#include "perf-events.h"

#include <stdlib.h>

JNIEXPORT jint JNICALL Java_papi_Wrapper_initLibrary
		(JNIEnv UNUSED_ARG(*env), jclass UNUSED_ARG(self), jint versionj) {
	unsigned int version = (unsigned int) versionj;
	if (version != PAPI_VER_CURRENT) {
		return PAPI_EINVAL;
	}

	return PAPI_VER_CURRENT;
}
