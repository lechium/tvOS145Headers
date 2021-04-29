/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BWLimitedGMErrorLogger : NSObject {

	int _maxLoggingCount;
	int _currentLoggingCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int maxLoggingCount;                  //@synthesize maxLoggingCount=_maxLoggingCount - In the implementation block
@property (nonatomic,readonly) int currentLoggingCount;              //@synthesize currentLoggingCount=_currentLoggingCount - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(id)initWithName:(id)arg1 maxLoggingCount:(int)arg2 ;
-(void)resetCurrentLoggingCounter;
-(void)logErrorNumber:(int)arg1 errorString:(id)arg2 ;
-(int)maxLoggingCount;
-(int)currentLoggingCount;
@end

