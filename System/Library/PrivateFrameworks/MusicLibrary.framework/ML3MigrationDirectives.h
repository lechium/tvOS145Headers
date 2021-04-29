/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ML3MigrationDirectives : NSObject {

	BOOL _needsToRecreateIndexes;
	BOOL _needsToRecreateTriggers;
	BOOL _needsToRemoveLocationsForItemsMissingAssets;
	BOOL _needsToReloadStoreBookmarkMetadataIdentifiers;
	BOOL _needsToReloadContainerMediaTypes;
	BOOL _needsToReloadCollectionRepresentativeItems;
	BOOL _needsAnalyze;
	BOOL _needsToAutogenerateArtworkVariants;
	BOOL _needsToUpdateSortMap;
	BOOL _forceUpdateOriginals;
	int _originalUserVersion;
	int _currentUserVersion;

}

@property (nonatomic,readonly) int originalUserVersion;                                       //@synthesize originalUserVersion=_originalUserVersion - In the implementation block
@property (assign,nonatomic) int currentUserVersion;                                          //@synthesize currentUserVersion=_currentUserVersion - In the implementation block
@property (assign,nonatomic) BOOL needsToRecreateIndexes;                                     //@synthesize needsToRecreateIndexes=_needsToRecreateIndexes - In the implementation block
@property (assign,nonatomic) BOOL needsToRecreateTriggers;                                    //@synthesize needsToRecreateTriggers=_needsToRecreateTriggers - In the implementation block
@property (assign,nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets;                //@synthesize needsToRemoveLocationsForItemsMissingAssets=_needsToRemoveLocationsForItemsMissingAssets - In the implementation block
@property (assign,nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers;              //@synthesize needsToReloadStoreBookmarkMetadataIdentifiers=_needsToReloadStoreBookmarkMetadataIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL needsToReloadContainerMediaTypes;                           //@synthesize needsToReloadContainerMediaTypes=_needsToReloadContainerMediaTypes - In the implementation block
@property (assign,nonatomic) BOOL needsToReloadCollectionRepresentativeItems;                 //@synthesize needsToReloadCollectionRepresentativeItems=_needsToReloadCollectionRepresentativeItems - In the implementation block
@property (assign,nonatomic) BOOL needsAnalyze;                                               //@synthesize needsAnalyze=_needsAnalyze - In the implementation block
@property (assign,nonatomic) BOOL needsToAutogenerateArtworkVariants;                         //@synthesize needsToAutogenerateArtworkVariants=_needsToAutogenerateArtworkVariants - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateSortMap;                                       //@synthesize needsToUpdateSortMap=_needsToUpdateSortMap - In the implementation block
@property (assign,nonatomic) BOOL forceUpdateOriginals;                                       //@synthesize forceUpdateOriginals=_forceUpdateOriginals - In the implementation block
-(id)initWithOriginalUserVersion:(int)arg1 ;
-(int)originalUserVersion;
-(int)currentUserVersion;
-(void)setCurrentUserVersion:(int)arg1 ;
-(BOOL)needsToRecreateIndexes;
-(void)setNeedsToRecreateIndexes:(BOOL)arg1 ;
-(BOOL)needsToRecreateTriggers;
-(void)setNeedsToRecreateTriggers:(BOOL)arg1 ;
-(BOOL)needsToRemoveLocationsForItemsMissingAssets;
-(void)setNeedsToRemoveLocationsForItemsMissingAssets:(BOOL)arg1 ;
-(BOOL)needsToReloadStoreBookmarkMetadataIdentifiers;
-(void)setNeedsToReloadStoreBookmarkMetadataIdentifiers:(BOOL)arg1 ;
-(BOOL)needsToReloadContainerMediaTypes;
-(void)setNeedsToReloadContainerMediaTypes:(BOOL)arg1 ;
-(BOOL)needsToReloadCollectionRepresentativeItems;
-(void)setNeedsToReloadCollectionRepresentativeItems:(BOOL)arg1 ;
-(BOOL)needsAnalyze;
-(void)setNeedsAnalyze:(BOOL)arg1 ;
-(BOOL)needsToAutogenerateArtworkVariants;
-(void)setNeedsToAutogenerateArtworkVariants:(BOOL)arg1 ;
-(BOOL)needsToUpdateSortMap;
-(void)setNeedsToUpdateSortMap:(BOOL)arg1 ;
-(BOOL)forceUpdateOriginals;
-(void)setForceUpdateOriginals:(BOOL)arg1 ;
@end

