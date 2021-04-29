/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CoreRCHIDEvent : NSObject <NSSecureCoding, NSCopying> {

	IOHIDEventRef _event;
	IOHIDEventRef _3rdPartyChildEvent;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOHIDEventRef)event;
-(id)initWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 ;
-(void)getCommand:(unsigned long long*)arg1 pressed:(BOOL*)arg2 ;
-(BOOL)isRepeat;
-(id)initWithIOHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initKeyboardEventWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 pressed:(BOOL)arg3 timestamp:(unsigned long long)arg4 ;
-(BOOL)isEqualToRCHIDEvent:(id)arg1 ;
-(BOOL)getCECUserControl:(CECUserControl*)arg1 pressed:(BOOL*)arg2 ;
-(id)initWithCECUserControl:(CECUserControl)arg1 pressed:(BOOL)arg2 ;
-(id)initWithCECDeckControlMode:(unsigned char)arg1 pressed:(BOOL)arg2 ;
-(id)initWithCECPlayMode:(unsigned char)arg1 pressed:(BOOL)arg2 ;
@end

