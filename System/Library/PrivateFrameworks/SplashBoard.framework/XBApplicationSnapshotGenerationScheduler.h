/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/XBApplicationSnapshotImageGenerationScheduling.h>

@protocol OS_dispatch_workloop, OS_dispatch_queue;
@class NSObject, NSString;

@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling> {

	NSObject*<OS_dispatch_workloop> _imageGenerationWorkloop;
	NSObject*<OS_dispatch_queue> _imageGenerationQueue;
	NSObject*<OS_dispatch_workloop> _dataGenerationWorkloop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(void)performImageGenerationAsync:(/*^block*/id)arg1 ;
-(void)performImageGenerationAsyncAndWait:(/*^block*/id)arg1 ;
-(void)performImageDataGenerationAsync:(/*^block*/id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)performImageDataGenerationAsyncAndWait:(/*^block*/id)arg1 withHandler:(/*^block*/id)arg2 ;
@end
