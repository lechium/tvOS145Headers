/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;
	BOOL _disable;
	BOOL _pause;

}

@property (assign,nonatomic) BOOL pause;              //@synthesize pause=_pause - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)pause;
-(void)addEntry:(id)arg1 ;
-(void)setPause:(BOOL)arg1 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
@end

