/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSMutableArray, NSObject, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVAssetImageGeneratorInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetImageGeneratorRef generator;
	AVAsset* asset;
	BOOL appliesPreferredTrackTransform;
	CGSize maximumSize;
	NSString* apertureMode;
	SCD_Struct_AV6 requestedTimeToleranceBefore;
	SCD_Struct_AV6 requestedTimeToleranceAfter;
	NSMutableArray* requests;
	NSObject*<OS_dispatch_queue> requestsQueue;
	int nextRequestID;
	AVVideoComposition* videoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSObject*<OS_dispatch_queue> imageRequestQueue;
	int cancelledRequestIDThreshold;
	NSObject*<OS_dispatch_queue> generateImagesAsyncQueue;
	BOOL prefersStandardDynamicRange;

}
@end

