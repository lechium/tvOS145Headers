/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _hour;
	unsigned long long _minute;

}

@property (nonatomic,readonly) unsigned long long hour;                //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;              //@synthesize minute=_minute - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultStartTime;
+(id)defaultEndTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(id)dateComponents;
-(id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(id)_initWithTime:(id)arg1 ;
@end

