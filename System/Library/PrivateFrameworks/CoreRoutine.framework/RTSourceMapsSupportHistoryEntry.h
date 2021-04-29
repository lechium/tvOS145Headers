/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {

	NSDate* _usageDate;

}

@property (nonatomic,readonly) NSDate * usageDate;              //@synthesize usageDate=_usageDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUsageDate:(id)arg1 ;
-(NSDate *)usageDate;
@end

