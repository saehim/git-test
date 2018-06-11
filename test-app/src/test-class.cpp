/*
 * test-class.cpp
 *
 *  Created on: 2018. 6. 8.
 *      Author: saehim
 */

#include <stdio.h>

#include "test-class.h"

void
PrintX::PrintAny(BYTE *byData, int iSize)
{
	for (int i = 0; i < iSize; i++)
	{
		printf("%02x ", byData[i]);
	}
	printf("\n");
}
