/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BWMetadataTimeMachineRequest : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)init;
-(void)dealloc;
-(void)complete;
-(void)waitForCompletionWithTimeout:(float)arg1 ;
@end

