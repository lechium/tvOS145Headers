/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDDateRangeProtocol.h>

@class NSDate;

@interface _CDDateRange : NSObject <_CDDateRangeProtocol> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;
-(BOOL)contains:(id)arg1 ;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
@end

