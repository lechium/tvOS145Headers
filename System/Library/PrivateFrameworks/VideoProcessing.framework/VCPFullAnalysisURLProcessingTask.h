/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {

	BOOL _cancel;
	BOOL _noResultStrip;
	NSURL* _assetURL;
	NSURL* _pairedAssetURL;
	unsigned long long _analysisTypes;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}
+(id)taskForURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)run;
-(void)cancel;
-(float)resourceRequirement;
-(id)initWithURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

