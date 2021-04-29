/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class NSDictionary, AVAssetInspectorLoader, AVDispatchOnce, NSArray;

@interface AVDataAsset : AVAsset {

	NSDictionary* _initializationOptions;
	AVAssetInspectorLoader* _loader;
	AVDispatchOnce* _allocateTracksOnceOnly;
	NSArray* _tracks;

}
+(unsigned long long)_dataLengthLimit;
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)tracks;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(unsigned long long)referenceRestrictions;
-(BOOL)_requiresInProcessOperation;
@end

