/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoardUI/BSUIDefaultDateLabel.h>
#import <libobjc.A.dylib/BSRelativeDateTimerDelegate.h>

@class BSRelativeDateTimer, NSString;

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate> {

	BSRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	unsigned long long _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3 ;
-(void)prepareForReuse;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
@end

