/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, NSObject;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {

	BWPixelBufferPool* _pool;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(void)dealloc;
-(void)signal;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
@end

