/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _error;
	int _processingType;
	BOOL _fileBacked;
	unsigned _commitDurationInMilliseconds;
	unsigned _flushDurationInMilliseconds;

}

@property (assign,nonatomic) int error;                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int processingType;                                 //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL fileBacked;                                    //@synthesize fileBacked=_fileBacked - In the implementation block
@property (assign,nonatomic) unsigned commitDurationInMilliseconds;              //@synthesize commitDurationInMilliseconds=_commitDurationInMilliseconds - In the implementation block
@property (assign,nonatomic) unsigned flushDurationInMilliseconds;               //@synthesize flushDurationInMilliseconds=_flushDurationInMilliseconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(int)error;
-(void)setError:(int)arg1 ;
-(void)reset;
-(id)eventName;
-(id)eventDictionary;
-(int)processingType;
-(void)setProcessingType:(int)arg1 ;
-(void)setFileBacked:(BOOL)arg1 ;
-(void)setCommitDurationInMilliseconds:(unsigned)arg1 ;
-(void)setFlushDurationInMilliseconds:(unsigned)arg1 ;
-(BOOL)fileBacked;
-(unsigned)commitDurationInMilliseconds;
-(unsigned)flushDurationInMilliseconds;
@end
