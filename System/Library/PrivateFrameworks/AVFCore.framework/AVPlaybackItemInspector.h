/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(SCD_Struct_AV6)duration;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(id)metadataForFormat:(id)arg1 ;
-(id)lyrics;
-(long long)trackCount;
-(id)availableMetadataFormats;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
@end

