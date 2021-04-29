/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable> {

	NSRunLoop* _runLoop;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,copy) id block;                             //@synthesize block=_block - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(void)cancel;
-(id)block;
-(NSRunLoop *)runLoop;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inRunLoop:(id)arg2 ;
@end

