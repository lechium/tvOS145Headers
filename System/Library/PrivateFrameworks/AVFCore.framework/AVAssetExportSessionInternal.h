/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVVideoComposition, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	OpaqueFigAssetExportSessionRef figExportSession;
	AVAsset* asset;
	AVAudioMix* audioMix;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	AVVideoComposition* videoComposition;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	/*^block*/id handler;

}
@end

