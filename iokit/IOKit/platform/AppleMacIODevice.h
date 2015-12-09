/*
 * Copyright (c) 1998-2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1999 Apple Computer, Inc.  All rights reserved. 
 *
 * HISTORY
 *
 */


#ifndef _IOKIT_APPLEMACIODEVICE_H
#define _IOKIT_APPLEMACIODEVICE_H

#include <IOKit/IOService.h>

class AppleMacIODevice : public IOService
{
  OSDeclareDefaultStructors(AppleMacIODevice);

private:  
  struct ExpansionData { };
  ExpansionData *reserved;

public:
  virtual bool compareName( OSString * name, OSString ** matched = 0 ) const;
  virtual IOService *matchLocation(IOService *client);
  virtual IOReturn getResources( void );
    
  OSMetaClassDeclareReservedUnused(AppleMacIODevice,  0);
  OSMetaClassDeclareReservedUnused(AppleMacIODevice,  1);
  OSMetaClassDeclareReservedUnused(AppleMacIODevice,  2);
  OSMetaClassDeclareReservedUnused(AppleMacIODevice,  3);
};

#endif /* ! _IOKIT_APPLEMACIODEVICE_H */
