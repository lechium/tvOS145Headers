/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>

@class NSDateInterval, NSString;

@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing> {

	double absoluteTimestamp;
	double duration;

}

@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
@end
