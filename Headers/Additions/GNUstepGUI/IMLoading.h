/*
   IMLoading.h

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author: Ovidiu Predescu <ovidiu@net-community.com>
   Date: November 1997
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _GNUstep_H_IMLoading
#define _GNUstep_H_IMLoading

#ifndef GNUSTEP
#include <Foundation/Foundation.h>
#else
#include <Foundation/NSBundle.h>
#endif

@interface NSObject (NibAwaking)
- (void)awakeFromModel;
@end

@interface GMModel : NSObject
{
  NSArray* objects;
  NSArray* connections;
}
+ (BOOL)loadIMFile:(NSString*)path owner:(id)owner;
+ (BOOL)loadIMFile:(NSString*)path owner:(id)owner bundle:(NSBundle*)bundle;
- (void)_makeConnections;
- (void)_setObjects:objects connections:connections;
- (NSArray *) objects;
- (NSArray *) connections;
@end

#endif /* _GNUstep_H_IMLoading */