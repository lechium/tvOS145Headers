/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlayerResponseItemMusicAudio.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class MPCPlayerAudioFormat, NSArray, MPCPlayerAudioRoute, NSString, MPCPlayerResponse, NSIndexPath, MPModelGenericObject;

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio, _MPCStateDumpPropertyListTransformable> {

	unsigned long long _seekSupport;
	BOOL _placeholder;
	BOOL _autoPlay;
	MPCPlayerAudioFormat* _preferredFormat;
	MPCPlayerAudioFormat* _activeFormat;
	unsigned long long _preferredTiers;
	long long _activeFormatJustification;
	NSArray* _alternateFormats;
	MPCPlayerAudioRoute* _audioRoute;
	NSString* _contentItemIdentifier;
	long long _revision;
	NSString* _localizedDurationString;
	NSString* _explicitBadge;
	NSArray* _languageOptionGroups;
	MPCPlayerResponse* _response;
	NSIndexPath* _indexPath;
	MPModelGenericObject* _metadataObject;
	SCD_Struct_MP16 _duration;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                     //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                       //@synthesize metadataObject=_metadataObject - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (getter=isAutoPlay,nonatomic,readonly) BOOL autoPlay;                             //@synthesize autoPlay=_autoPlay - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentItemIdentifier;                       //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) long long revision;                                          //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP16 duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDurationString;                     //@synthesize localizedDurationString=_localizedDurationString - In the implementation block
@property (nonatomic,copy,readonly) NSString * explicitBadge;                               //@synthesize explicitBadge=_explicitBadge - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptionGroups;                              //@synthesize languageOptionGroups=_languageOptionGroups - In the implementation block
@property (nonatomic,readonly) id<MPCPlayerResponseItemMusicAudio> musicAudio; 
@property (nonatomic,readonly) MPCPlayerAudioFormat * preferredFormat;                      //@synthesize preferredFormat=_preferredFormat - In the implementation block
@property (nonatomic,readonly) MPCPlayerAudioFormat * activeFormat;                         //@synthesize activeFormat=_activeFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredTiers;                           //@synthesize preferredTiers=_preferredTiers - In the implementation block
@property (nonatomic,readonly) long long activeFormatJustification;                         //@synthesize activeFormatJustification=_activeFormatJustification - In the implementation block
@property (nonatomic,readonly) NSArray * alternateFormats;                                  //@synthesize alternateFormats=_alternateFormats - In the implementation block
@property (nonatomic,readonly) MPCPlayerAudioRoute * audioRoute;                            //@synthesize audioRoute=_audioRoute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(MPCPlayerResponse *)response;
-(id)remove;
-(NSIndexPath *)indexPath;
-(SCD_Struct_MP16)duration;
-(BOOL)isPlaceholder;
-(MPCPlayerAudioFormat *)preferredFormat;
-(MPCPlayerAudioRoute *)audioRoute;
-(id)_stateDumpObject;
-(long long)revision;
-(NSString *)localizedDurationString;
-(NSString *)explicitBadge;
-(id)likeCommand;
-(id)dislikeCommand;
-(MPCPlayerAudioFormat *)activeFormat;
-(long long)activeFormatJustification;
-(NSArray *)alternateFormats;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(MPModelGenericObject *)metadataObject;
-(BOOL)isAutoPlay;
-(NSString *)contentItemIdentifier;
-(id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 ;
-(unsigned long long)_determineSeekSupport;
-(id)_feedbackCommandWithMediaRemoteCommand:(unsigned)arg1 ;
-(id)confirmHeadphonesRoute;
-(id)switchToAlternativeFormat:(id)arg1 ;
-(unsigned long long)preferredTiers;
-(id)seekCommand;
-(id)playbackRateCommand;
-(id)wishlistCommand;
-(id)rateCommand;
-(id<MPCPlayerResponseItemMusicAudio>)musicAudio;
-(NSArray *)languageOptionGroups;
@end

