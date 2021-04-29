/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/VEiOSSharedObject.h>

@class NSDictionary, NSArray;

@interface MiroMoodManager : VEiOSSharedObject {

	BOOL _isObserverAttached;
	NSDictionary* _rawSongList;
	NSArray* _songList;
	NSDictionary* _rawTitlesList;
	NSArray* _titlesList;
	NSDictionary* _rawEditStylesList;
	NSArray* _editStylesList;
	NSDictionary* _rawTransitionDetailsList;
	NSArray* _titleStylesForTitlePicker;

}

@property (nonatomic,retain) NSDictionary * rawSongList;                           //@synthesize rawSongList=_rawSongList - In the implementation block
@property (nonatomic,retain) NSArray * songList;                                   //@synthesize songList=_songList - In the implementation block
@property (nonatomic,retain) NSDictionary * rawTitlesList;                         //@synthesize rawTitlesList=_rawTitlesList - In the implementation block
@property (nonatomic,retain) NSArray * titlesList;                                 //@synthesize titlesList=_titlesList - In the implementation block
@property (nonatomic,retain) NSDictionary * rawEditStylesList;                     //@synthesize rawEditStylesList=_rawEditStylesList - In the implementation block
@property (nonatomic,retain) NSArray * editStylesList;                             //@synthesize editStylesList=_editStylesList - In the implementation block
@property (nonatomic,retain) NSDictionary * rawTransitionDetailsList;              //@synthesize rawTransitionDetailsList=_rawTransitionDetailsList - In the implementation block
@property (nonatomic,retain) NSArray * titleStylesForTitlePicker;                  //@synthesize titleStylesForTitlePicker=_titleStylesForTitlePicker - In the implementation block
@property (assign,nonatomic) BOOL isObserverAttached;                              //@synthesize isObserverAttached=_isObserverAttached - In the implementation block
+(void)purgeSharedInstance;
+(id)titleListForTitlePicker;
+(id)fontNameFromTitleDictionary:(id)arg1 ;
+(id)displayNameForSong:(id)arg1 ;
+(BOOL)transitionEndsAtEditPoint:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 ;
+(id)blueprintForBlueprint:(id)arg1 replaceSongByiTunesMediaID:(unsigned long long)arg2 ;
+(id)blueprintForBlueprint:(id)arg1 replaceSongByID:(id)arg2 shouldLockSong:(BOOL)arg3 ;
+(id)allMoodIDs;
+(id)blueprintForBlueprint:(id)arg1 replaceSongWithKeywords:(id)arg2 musicGenreDistribution:(id)arg3 shouldLockSong:(BOOL)arg4 ;
+(id)blueprintWithMood:(id)arg1 keywords:(id)arg2 musicGenreDistribution:(id)arg3 allowNonLocalSongs:(BOOL)arg4 ;
+(id)_randomMoodID;
+(id)_projectFilterForMood:(id)arg1 ;
+(id)sharedMoodManager;
+(id)randomBlueprint;
+(id)replaceBlueprint:(id)arg1 usingMoodID:(id)arg2 ;
+(void)separateAnimationSpecifier:(id*)arg1 fromTitleStyleID:(id*)arg2 ;
+(void)incrementAnimationSpecifier:(id*)arg1 forTitleStyleID:(id)arg2 by:(unsigned long long)arg3 ;
+(BOOL)titleValid:(id)arg1 forClipLength:(id)arg2 ;
+(id)_availableProjectFilterIDsSorted;
+(id)_moodIDsForProjectFilterID:(id)arg1 ;
+(id)_displayNameForSingleTransition:(id)arg1 ;
+(id)_projectFilterNameForID:(id)arg1 ;
+(id)_pacingDescriptionForSongDict:(id)arg1 ;
+(id)displayNameForMoodID:(id)arg1 ;
+(BOOL)_effectIsACut:(id)arg1 ;
+(BOOL)_effectIsAFade:(id)arg1 ;
+(BOOL)_effectIsASlide:(id)arg1 organicOnly:(BOOL)arg2 ;
+(id)_projectFiltersForMood:(id)arg1 ;
+(unsigned long long)_projectFilterCountForMood:(id)arg1 ;
+(id)backstopEditValuesForPacing:(id)arg1 ;
+(id)blueprintWithNewTitleStyleForBlueprint:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 shouldLockTitle:(BOOL)arg3 ;
+(id)blueprintWithNewSongForBlueprint:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 orChangeAnimation:(BOOL)arg3 ;
+(id)blueprintForBlueprint:(id)arg1 titleValidforClipLength:(id)arg2 ;
+(id)blueprintForBlueprint:(id)arg1 replaceEditStyleByID:(id)arg2 ;
+(id)blueprintForBlueprint:(id)arg1 replaceEditStyleBySingleTransition:(id)arg2 ;
+(id)blueprintForBlueprint:(id)arg1 replaceProjectFilterByID:(id)arg2 ;
+(id)requestStyleBForBlueprint:(id)arg1 ;
+(id)incrementAnimationStyleForBlueprint:(id)arg1 by:(unsigned long long)arg2 ;
+(id)titleIDsByMoodIDSorted;
+(id)editStyleIDsByMoodIDSorted;
+(id)transitionsByMoodIDSortedForBlueprint:(id)arg1 ;
+(id)projectFilterIDsByMoodIDSorted;
+(id)displayNamesByTitleID;
+(id)displayNamesByEditStyleID;
+(id)displayNamesByTransitionForBlueprint:(id)arg1 ;
+(id)displayNamesByProjectFilterID;
+(id)multiUpTransitionsForMood:(id)arg1 ;
+(void)populateBlueprint:(id)arg1 ;
+(id)titleList;
+(id)displayNameForArtist:(id)arg1 ;
+(id)displayNameForPacingOfSongID:(id)arg1 ;
+(id)displayNameForTitle:(id)arg1 ;
+(id)displayNameForEditStyle:(id)arg1 ;
+(id)displayNameForFilter:(id)arg1 ;
+(id)displayNameForSingleTransition:(id)arg1 ;
+(id)fontNameFromBlueprint:(id)arg1 ;
+(id)allMoodIDsSorted;
+(unsigned long long)allMoodsCount;
+(BOOL)blueprintTitleSupportsSubtitle:(id)arg1 ;
+(BOOL)titleHasPortraitContentOption:(id)arg1 ;
+(double)minimumAllowedDurationForTitle:(id)arg1 ;
+(BOOL)buildInTitle:(id)arg1 forClipLength:(id)arg2 ;
+(BOOL)buildOutTitle:(id)arg1 forClipLength:(id)arg2 ;
+(id)_randomPortraitSafeTitleForBlueprint:(id)arg1 ;
+(id)blueprintWithPortraitSafeTitleForBlueprint:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg1 replaceTitleSettingsEffectIDOnly:(id)arg2 ;
+(id)titlePartnerTransitionsFromTransitionSet:(id)arg1 forTitleID:(id)arg2 forClipLength:(id)arg3 ;
+(void)logMoodPermutationTallies;
-(id)init;
-(void)dealloc;
-(void)_ingestMoodPartLists;
-(void)_addObserverForAvalaibleSongChange;
-(void)_removeObserverForAvalaibleSongChange;
-(void)_resetSongList;
-(void)setIsObserverAttached:(BOOL)arg1 ;
-(BOOL)isObserverAttached;
-(void)setSongList:(NSArray *)arg1 ;
-(void)_buildSongList;
-(void)updateTitleListsToIncludeOldContent:(id)arg1 titleSettings:(id)arg2 moodMatchList:(id)arg3 moodCommentList:(id)arg4 ;
-(void)setRawTitlesList:(NSDictionary *)arg1 ;
-(NSDictionary *)rawTitlesList;
-(void)setTitlesList:(NSArray *)arg1 ;
-(void)updateEditStyleListsToIncludeAdditionalStyles:(id)arg1 moodMatchList:(id)arg2 moodCommentList:(id)arg3 transitionSetList:(id)arg4 effectSetList:(id)arg5 multiUpTransitionsStyleList:(id)arg6 burstStyleList:(id)arg7 ;
-(void)setRawEditStylesList:(NSDictionary *)arg1 ;
-(NSDictionary *)rawEditStylesList;
-(void)setEditStylesList:(NSArray *)arg1 ;
-(id)_useSet_VtoV:(BOOL)arg1 PtoP:(BOOL)arg2 PtoV:(BOOL)arg3 VtoP:(BOOL)arg4 MultiUp:(BOOL)arg5 Pano:(BOOL)arg6 intoOneUp:(BOOL)arg7 outOfOneUp:(BOOL)arg8 ;
-(id)_KenBurnsORFXUseSet_UseKB:(BOOL)arg1 fxSway:(BOOL)arg2 fxFS:(BOOL)arg3 fxDrift:(BOOL)arg4 transDir:(BOOL)arg5 kbType:(id)arg6 ;
-(void)setRawTransitionDetailsList:(NSDictionary *)arg1 ;
-(unsigned long long)_totalTransitionWeightsForEditStyleDict:(id)arg1 ;
-(id)_updateTransitionDurationsInTransitionDict:(id)arg1 withPacing:(id)arg2 withUsage:(unsigned long long)arg3 ;
-(unsigned long long)minDurationForTransition:(id)arg1 withPacing:(id)arg2 ;
-(unsigned long long)maxDurationForTransition:(id)arg1 withPacing:(id)arg2 ;
-(unsigned long long)candenceForTransition:(id)arg1 ;
-(id)useWhereSetForTransition:(id)arg1 ;
-(id)useKenBurnsSetForTransition:(id)arg1 ;
-(NSArray *)songList;
-(void)setRawSongList:(NSDictionary *)arg1 ;
-(NSDictionary *)rawSongList;
-(NSArray *)titlesList;
-(NSArray *)editStylesList;
-(NSDictionary *)rawTransitionDetailsList;
-(void)_constructTitleList;
-(void)_constructEditStyleList;
-(void)_constructTransitionDetailList;
-(id)_prunedMoodPartList:(id)arg1 forMood:(id)arg2 defaultsOnly:(BOOL)arg3 ;
-(id)_prunedTitleList:(id)arg1 forMood:(id)arg2 defaultsOnly:(BOOL)arg3 ;
-(id)defaultTitleFrom:(id)arg1 ;
-(id)_prunedList:(id)arg1 usingPaceKeywordsInDict:(id)arg2 ;
-(id)_updateTransitionDurationsInEditSytleDict:(id)arg1 withPacing:(id)arg2 ;
-(id)_allMoodIDsForMoodPart:(id)arg1 prioritizingMood:(id)arg2 ;
-(id)_randomBlueprintForMoodID:(id)arg1 keywords:(id)arg2 musicGenreDistribution:(id)arg3 andSongID:(id)arg4 excludingPartsInMood:(id)arg5 defaultsOnly:(BOOL)arg6 ;
-(id)_prunedTitleList:(id)arg1 forMood:(id)arg2 andClipLength:(id)arg3 ;
-(id)_availableTransitionsWithPacing:(id)arg1 ;
-(id)_availableTitleIDsSorted;
-(id)_availableEditStyleIDsSorted;
-(id)_availableTransitionsSortedWithPacing:(id)arg1 ;
-(NSArray *)titleStylesForTitlePicker;
-(void)setTitleStylesForTitlePicker:(NSArray *)arg1 ;
-(id)_prunedList:(id)arg1 usingEffectInDict:(id)arg2 ;
-(id)_uniqueStringForMoodID:(id)arg1 ;
-(id)fontToDefaultStyleMap;
-(id)fontToStandardMoodMap;
-(id)_allSongIDsSorted;
-(void)_dumpPartList:(id)arg1 forMood:(id)arg2 ;
-(void)_dumpProjectFiltersForMood:(id)arg1 ;
-(void)_loadMoodPartListsFromFiles;
-(id)_prunedTitlesRemovingDuplicateEffects:(id)arg1 ;
-(id)_availableSongIDsSorted;
@end

