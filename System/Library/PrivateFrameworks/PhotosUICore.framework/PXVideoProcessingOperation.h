/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol PXVideoProcessingOperationResult;
@class PXVideoProcessingOperationSpec;

@interface PXVideoProcessingOperation : NSOperation {

	PXVideoProcessingOperationSpec* _spec;
	id<PXVideoProcessingOperationResult> _result;
	/*^block*/id _progressHandler;

}

@property (nonatomic,readonly) PXVideoProcessingOperationSpec * spec;                    //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) id<PXVideoProcessingOperationResult> result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id progressHandler;                                           //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)new;
-(id)init;
-(void)main;
-(id<PXVideoProcessingOperationResult>)result;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(PXVideoProcessingOperationSpec *)spec;
-(id)initWithSpec:(id)arg1 ;
-(id)performProcessing;
@end

