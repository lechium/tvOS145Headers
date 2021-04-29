/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelArtist, MPModelGenre, NSDate, NSDateComponents, MPModelSong;

@interface MPModelAlbum : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelGenre * genre; 
@property (assign,nonatomic) long long trackCount; 
@property (assign,nonatomic) long long maximumItemTrackNumber; 
@property (assign,nonatomic) long long discCount; 
@property (assign,nonatomic) BOOL hasCleanContent; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,getter=isCompilation,nonatomic) BOOL compilation; 
@property (assign,getter=isClassical,nonatomic) BOOL classical; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) float volumeNormalization; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (nonatomic,retain) MPModelSong * representativeSong; 
@property (assign,nonatomic) long long year; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy) NSDate * lastDevicePlaybackDate; 
@property (assign,getter=isPreorder,nonatomic) BOOL preorder; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) unsigned long long traits; 
@property (nonatomic,copy) id songPopularityBlock; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
+(id)__title_KEY;
+(id)__artist_KEY;
+(id)__genre_KEY;
+(id)__copyrightText_KEY;
+(id)__trackCount_KEY;
+(id)__volumeNormalization_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__year_KEY;
+(id)__downloadedDate_KEY;
+(id)__traits_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)__hasCleanContent_KEY;
+(id)__releaseDateComponents_KEY;
+(id)kindWithSongKind:(id)arg1 ;
+(id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2 ;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 ;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)__representativeSong_KEY;
+(id)__maximumItemTrackNumber_KEY;
+(id)__discCount_KEY;
+(id)__compilation_KEY;
+(id)__classical_KEY;
+(id)__preorder_KEY;
+(id)__songPopularityBlock_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(id)contentItemCollectionInfo;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end
