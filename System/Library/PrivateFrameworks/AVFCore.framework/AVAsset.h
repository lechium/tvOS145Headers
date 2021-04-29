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

@class AVAssetInternal, NSValue, NSArray, AVDisplayCriteria;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (nonatomic,readonly) NSValue * px_cachedDuration; 
@property (nonatomic,readonly) SCD_Struct_AV6 px_duration; 
@property (nonatomic,readonly) CGSize px_dimensionsOfFirstVideoTrack; 
@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) long long moovAtomSize; 
@property (nonatomic,readonly) NSArray * fragments; 
@property (nonatomic,retain,readonly) id<AVLoggingIdentifier> loggingIdentifier; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumTimeOffsetFromLive; 
+(id)assetWithIdentifierURL:(id)arg1 ;
+(void)setPluginEditedAsset:(id)arg1 ;
+(id)pluginEditedAsset;
+(id)tvp_groupedAudioAVMediaSelectionOptionsFromOptions:(id)arg1 ;
+(id)tvp_filteredAndSubsortedMainProgramSubtitleOptionsFromOptions:(id)arg1 ;
+(id)tvp_sortedAuxSubtitleOptionsFromOptions:(id)arg1 ;
+(id)assetWithURL:(id)arg1 ;
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
+(id)makeAssetLoggingIdentifier;
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)arg1 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(BOOL)supportsPlayerItems;
+(id)inspectionOnlyAssetWithFigAsset:(OpaqueFigAssetRef)arg1 ;
+(id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2 ;
-(id)creationDateFromMetadata;
-(id)tvp_sortedAudioAVMediaSelectionOptions;
-(id)tvp_sortedSubtitleAVMediaSelectionOptions;
-(long long)tvp_maximumVideoResolution;
-(long long)tvp_maximumVideoRange;
-(NSValue *)px_cachedDuration;
-(void)_px_setCachedDuration:(id)arg1 ;
-(SCD_Struct_AV6)px_duration;
-(void)px_loadDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGSize)px_dimensionsOfFirstVideoTrack;
-(id)vcp_enabledTracksWithMediaType:(id)arg1 ;
-(BOOL)vcp_isShortMovie;
-(void)vcp_scaleSlowmoTimeRange:(SCD_Struct_AV7)arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3 ;
-(void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(SCD_Struct_AV7)arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5 ;
-(id)vcp_firstEnabledTrackWithMediaType:(id)arg1 ;
-(SCD_Struct_AV6)vcp_livePhotoStillDisplayTime;
-(id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2 ;
-(id)createLanguageOptionGroups;
-(void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)plVideoCodecFourCharCodeString;
-(id)plVideoCodecName;
-(id)ipaVideoCodecName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isProxy;
-(id)init;
-(void)dealloc;
-(id)creationDate;
-(id)valueForUndefinedKey:(id)arg1 ;
-(SCD_Struct_AV6)duration;
-(id)metadata;
-(BOOL)hasProtectedContent;
-(id)_weakReference;
-(id)tracks;
-(id)commonMetadata;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(long long)moovAtomSize;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)propertyListForProxy;
-(BOOL)_isStreaming;
-(id)lyrics;
-(NSArray *)availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)allMediaSelections;
-(id)trackWithTrackID:(int)arg1 ;
-(id)trackReferences;
-(id<AVLoggingIdentifier>)loggingIdentifier;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(float)preferredRate;
-(id)availableVideoDynamicRanges;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(BOOL)isComposable;
-(id)availableMetadataFormats;
-(BOOL)isCompatibleWithAirPlayVideo;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(CGSize)maximumVideoResolution;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)availableChapterLanguages;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)_mindsFragments;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaTypes:(id)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)preferredMediaSelection;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV6)overallDurationHint;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(void)_setLoggingIdentifier:(id)arg1 ;
-(id)_nameForLogging;
-(id)_comparisonToken;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(BOOL)_needsLegacyChangeNotifications;
-(unsigned long long)referenceRestrictions;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)_ID3Metadata;
-(id)_tracksWithClass:(Class)arg1 ;
-(void)_tracksDidChange;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_availableCanonicalizedChapterLanguages;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterTracks;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(id)_exportURL;
-(NSArray *)fragments;
-(int)unusedTrackID;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
@end

