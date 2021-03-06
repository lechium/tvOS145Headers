/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSDictionary;

@interface VCPVoiceOverAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	BOOL _processingTypeScene;
	BOOL _processingTypeFace;
	unsigned long long _analysisFlags;
	NSDictionary* _options;
	CF<__CVBuffer *>* _inputBuffer;
	atomic<bool> _started;
	atomic<bool> _cancel;
	/*^block*/id _completionHandler;

}
+(id)taskWithProcessingTypes:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(float)resourceRequirement;
-(id)initWithProcessingTypes:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)_analyzeFace:(id*)arg1 error:(id*)arg2 ;
-(int)_analyzeScene:(id*)arg1 error:(id*)arg2 ;
@end

