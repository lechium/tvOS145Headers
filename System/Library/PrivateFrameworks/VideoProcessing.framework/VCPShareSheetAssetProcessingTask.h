/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMABaseTask.h>
#import <libobjc.A.dylib/VCPMAImageProcessingTaskProtocol.h>

@class NSURL;

@interface VCPShareSheetAssetProcessingTask : VCPMABaseTask <VCPMAImageProcessingTaskProtocol> {

	CF<__CVBuffer *>* _pixelBuffer;
	NSURL* _assetURL;

}
+(id)taskWithPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
+(id)taskWithAssetURL:(id)arg1 options:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)run:(id*)arg1 ;
-(id)processObservations:(id)arg1 ;
@end

