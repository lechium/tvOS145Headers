/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MRTelevisionControllerBlockCallback : NSObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)callbackBlock;
@end

