/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface AVTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _invalidated;
	double _interval;

}

@property (readonly) double interval;              //@synthesize interval=_interval - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)interval;
-(id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 repeats:(BOOL)arg4 ;
@end

