/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject, AVKeyPathDependencyManager, AVAssetWriterInputPassDescriptionResponder;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject*<OS_dispatch_queue> helperQueue;
	AVWeakReference* weakReferenceToAttachedAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	AVKeyPathDependencyManager* keyPathDependencyManager;
	long long numberOfAppendFailures;
	BOOL markAsFinishedCalled;
	NSObject*<OS_dispatch_queue> appendFailureReadWriteQueue;
	AVAssetWriterInputPassDescriptionResponder* passDescriptionResponder;

}
@end

