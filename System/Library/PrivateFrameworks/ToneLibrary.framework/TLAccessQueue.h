/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TLAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
-(void)assertNotRunningInAccessQueue;
-(void)_performSynchronousBlockInSerialQueue:(/*^block*/id)arg1 ;
-(void)performAsynchronousBlock:(/*^block*/id)arg1 ;
@end

