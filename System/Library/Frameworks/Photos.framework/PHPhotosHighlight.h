/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetCollection.h>

@class NSString, NSDate, NSManagedObjectID;

@interface PHPhotosHighlight : PHAssetCollection {

	unsigned long long _assetsCount;
	BOOL _curated;
	BOOL _enriched;
	BOOL _recent;
	unsigned short _kind;
	unsigned short _type;
	unsigned short _category;
	unsigned short _visibilityState;
	unsigned short _enrichmentState;
	short _highlightVersion;
	short _enrichmentVersion;
	unsigned long long _extendedCount;
	unsigned long long _summaryCount;
	NSString* _verboseSmartDescription;
	long long _startTimeZoneOffset;
	long long _endTimeZoneOffset;
	double _promotionScore;
	unsigned long long _mood;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	unsigned long long _dayGroupAssetsCount;
	unsigned long long _dayGroupExtendedAssetsCount;
	unsigned long long _dayGroupSummaryAssetsCount;
	NSString* _subtitle;
	NSManagedObjectID* _parentPhotosHighlight;
	NSManagedObjectID* _keyAsset;
	NSManagedObjectID* _dayGroupKeyAsset;
	NSManagedObjectID* _monthKeyAsset;
	NSManagedObjectID* _yearKeyAsset;

}

@property (assign,getter=isEnriched,nonatomic) BOOL enriched;                               //@synthesize enriched=_enriched - In the implementation block
@property (assign,getter=isRecent,nonatomic) BOOL recent;                                   //@synthesize recent=_recent - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate;                                       //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,retain) NSDate * localEndDate;                                         //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupAssetsCount;                      //@synthesize dayGroupAssetsCount=_dayGroupAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupExtendedAssetsCount;              //@synthesize dayGroupExtendedAssetsCount=_dayGroupExtendedAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dayGroupSummaryAssetsCount;               //@synthesize dayGroupSummaryAssetsCount=_dayGroupSummaryAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned short enrichmentState;                              //@synthesize enrichmentState=_enrichmentState - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) short highlightVersion;                                      //@synthesize highlightVersion=_highlightVersion - In the implementation block
@property (nonatomic,readonly) short enrichmentVersion;                                     //@synthesize enrichmentVersion=_enrichmentVersion - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * parentPhotosHighlight;                   //@synthesize parentPhotosHighlight=_parentPhotosHighlight - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * keyAsset;                                //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * dayGroupKeyAsset;                        //@synthesize dayGroupKeyAsset=_dayGroupKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * monthKeyAsset;                           //@synthesize monthKeyAsset=_monthKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * yearKeyAsset;                            //@synthesize yearKeyAsset=_yearKeyAsset - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * keyAssetForKind; 
@property (nonatomic,readonly) unsigned short preferredCurationType; 
@property (nonatomic,readonly) NSString * dateDescription; 
@property (nonatomic,readonly) NSString * smartDescription; 
@property (nonatomic,readonly) NSString * verboseSmartDescription;                          //@synthesize verboseSmartDescription=_verboseSmartDescription - In the implementation block
@property (nonatomic,readonly) unsigned short kind;                                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned short visibilityState;                              //@synthesize visibilityState=_visibilityState - In the implementation block
@property (getter=isCurated,nonatomic,readonly) BOOL curated;                               //@synthesize curated=_curated - In the implementation block
@property (nonatomic,readonly) long long startTimeZoneOffset;                               //@synthesize startTimeZoneOffset=_startTimeZoneOffset - In the implementation block
@property (nonatomic,readonly) long long endTimeZoneOffset;                                 //@synthesize endTimeZoneOffset=_endTimeZoneOffset - In the implementation block
@property (nonatomic,readonly) double promotionScore;                                       //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,readonly) unsigned long long mood;                                     //@synthesize mood=_mood - In the implementation block
@property (nonatomic,readonly) unsigned long long extendedCount;                            //@synthesize extendedCount=_extendedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryCount;                             //@synthesize summaryCount=_summaryCount - In the implementation block
+(id)dateRangeTitleGenerator;
+(BOOL)processRecentHighlights;
+(BOOL)processUnprocessedMomentLocations;
+(BOOL)updateHighlightTitles;
+(BOOL)cleanupEmptyHighlights;
+(id)managedEntityName;
+(id)fetchType;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchParentHighlightForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchParentHighlightsForHighlights:(id)arg1 options:(id)arg2 ;
+(id)fetchChildHighlightsForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchParentDayGroupHighlightForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchChildDayGroupHighlightsForHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg1 options:(id)arg2 ;
+(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;
-(id)description;
-(unsigned short)type;
-(unsigned short)category;
-(unsigned long long)mood;
-(id)title;
-(unsigned short)kind;
-(id)localizedSubtitle;
-(NSString *)subtitle;
-(unsigned short)visibilityState;
-(NSManagedObjectID *)keyAsset;
-(BOOL)isCurated;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(NSString *)verboseSmartDescription;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(long long)startTimeZoneOffset;
-(long long)endTimeZoneOffset;
-(double)promotionScore;
-(unsigned short)enrichmentState;
-(unsigned long long)extendedCount;
-(unsigned long long)summaryCount;
-(unsigned long long)dayGroupAssetsCount;
-(unsigned long long)dayGroupExtendedAssetsCount;
-(unsigned long long)dayGroupSummaryAssetsCount;
-(NSManagedObjectID *)parentPhotosHighlight;
-(short)highlightVersion;
-(short)enrichmentVersion;
-(NSManagedObjectID *)monthKeyAsset;
-(NSManagedObjectID *)yearKeyAsset;
-(NSManagedObjectID *)dayGroupKeyAsset;
-(NSManagedObjectID *)keyAssetForKind;
-(BOOL)isRecent;
-(NSString *)dateDescription;
-(NSString *)smartDescription;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(unsigned long long)estimatedAssetCount;
-(long long)assetCollectionSubtype;
-(unsigned long long)countForCurationType:(unsigned short)arg1 ;
-(id)dateDescriptionWithOptions:(unsigned long long)arg1 ;
-(unsigned short)preferredCurationType;
-(BOOL)isEnriched;
-(void)setEnriched:(BOOL)arg1 ;
-(void)setRecent:(BOOL)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
@end

