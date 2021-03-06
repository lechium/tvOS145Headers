/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVStreamDataParser, AVStreamDataAssetInspector, AVAssetSynchronousInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

@interface AVStreamDataAsset : AVAsset {

	AVStreamDataParser* _weakReferenceToParser;
	AVStreamDataAssetInspector* _inspector;
	AVAssetSynchronousInspectorLoader* _inspectorLoader;
	AVDispatchOnce* _tracksOnce;
	NSArray* _tracks;
	NSDictionary* _trackDictsByTrackID;

}
-(void)dealloc;
-(id)parser;
-(id)tracks;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)copyAssetWithReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forTrackID:(int)arg2 ;
-(id)copyAssetRemovingTrackID:(int)arg1 ;
-(id)formatDescriptionsForTrackID:(int)arg1 ;
-(id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2 ;
-(id)mediaTypeForTrackID:(int)arg1 ;
-(id)initWithParser:(id)arg1 tracks:(id)arg2 ;
@end

