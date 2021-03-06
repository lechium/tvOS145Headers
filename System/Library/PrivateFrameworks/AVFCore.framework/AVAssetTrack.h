/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(CGAffineTransform)px_changeTranslationOfTransform:(CGAffineTransform)arg1 forAssetSize:(CGSize)arg2 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(CGAffineTransform)px_preferredTransformBasedOnNaturalSize;
-(CGSize)px_transformedNaturalSize;
-(CGSize)vcp_fullFrameSize;
-(CGRect)vcp_cleanApertureRect;
-(unsigned)vcp_imageOrientation;
-(long long)vcp_orientation;
-(SCD_Struct_AV6)vcp_endTime;
-(SCD_Struct_AV6)vcp_startTime;
-(SCD_Struct_AV6)avkit_timeForFrameSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(SCD_Struct_AV6)arg2 ;
-(SCD_Struct_AV6)_avkit_timeForFrameUsingSampleCursorSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(SCD_Struct_AV6)arg2 ;
-(SCD_Struct_AV6)_avkit_findTimeForFrameUsingFrameRateSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(SCD_Struct_AV6)arg2 ;
-(BOOL)_avkit_frameRateIsValid:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)locale;
-(id)languageCode;
-(BOOL)isEnabled;
-(id)metadata;
-(BOOL)hasProtectedContent;
-(long long)layer;
-(SCD_Struct_AV7)timeRange;
-(int)trackID;
-(id)segments;
-(id)mediaType;
-(CGSize)dimensions;
-(AVAsset *)asset;
-(id)_weakReference;
-(id)formatDescriptions;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(BOOL)isDecodable;
-(SCD_Struct_AV6)minFrameDuration;
-(float)nominalFrameRate;
-(id)metadataForFormat:(id)arg1 ;
-(id)mediaCharacteristics;
-(id)availableMetadataFormats;
-(id)associatedTracksOfType:(id)arg1 ;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 ;
-(BOOL)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(BOOL)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(id)segmentsAsPresented;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(id)_assetTrackInspector;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(BOOL)_hasMultipleEdits;
-(BOOL)_hasScaledEdits;
-(BOOL)_hasEmptyEdits;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(BOOL)_firstFormatDescriptionIsLPCM;
@end

