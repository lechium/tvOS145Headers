/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PLMomentProtocol.h>
#import <libobjc.A.dylib/PGGraphFullEvent.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGGraphRelatableEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSDate, CLLocation, NSString, PGGraphHighlightNode, NSSet, CLSHolidayCalendarEventRuleTraits, PGGraphHighlightGroupNode;

@interface PGGraphMomentNode : PGGraphOptimizedNode <PLMomentProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment> {

	NSString* _localIdentifier;
	double _localStartTimestamp;
	double _localEndTimestamp;
	unsigned _numberOfAssetsWithPersons : 32;
	unsigned _numberOfAssets : 32;
	unsigned _numberOfPersonNodes : 16;
	unsigned _totalNumberOfPersons : 16;
	unsigned _numberOfShinyGemAssets : 32;
	unsigned _numberOfRegularGemAssets : 32;
	unsigned _hasHigherThanImprovedAssets : 1;
	unsigned _hasAssetsWithInterestingScenes : 1;
	unsigned _containsBetterScoringAsset : 1;
	unsigned _containsNonJunkAssets : 1;
	unsigned _isInteresting : 1;
	unsigned _isInterestingWithAlternateJunking : 1;
	unsigned _isSmartInteresting : 1;
	NSString* _name;
	double _inhabitationScore;
	double _contentScore;
	double _behavioralScore;
	double _universalStartTimestamp;
	double _universalEndTimestamp;
	double _scenesProcessedRatio;
	double _facesProcessedRatio;
	unsigned long long _numberOfAssetsInExtendedCuration;

}

@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (assign,nonatomic) unsigned long long numberOfAssets;                                       //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (assign,nonatomic) BOOL containsNonJunkAssets;                                              //@synthesize containsNonJunkAssets=_containsNonJunkAssets - In the implementation block
@property (assign,nonatomic) double scenesProcessedRatio;                                             //@synthesize scenesProcessedRatio=_scenesProcessedRatio - In the implementation block
@property (assign,nonatomic) double facesProcessedRatio;                                              //@synthesize facesProcessedRatio=_facesProcessedRatio - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAssetsInExtendedCuration;                     //@synthesize numberOfAssetsInExtendedCuration=_numberOfAssetsInExtendedCuration - In the implementation block
@property (readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long numberOfAssetsWithPersons;                                    //@synthesize numberOfAssetsWithPersons=_numberOfAssetsWithPersons - In the implementation block
@property (readonly) BOOL hasPersonNodes; 
@property (readonly) unsigned long long numberOfPersonNodes; 
@property (readonly) unsigned long long totalNumberOfPersons;                                         //@synthesize totalNumberOfPersons=_totalNumberOfPersons - In the implementation block
@property (readonly) BOOL hasAddressNodes; 
@property (readonly) BOOL hasMeanings; 
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL isPartOfTrip; 
@property (readonly) BOOL isBreakoutOfRoutineHigh; 
@property (readonly) BOOL isMeaningful; 
@property (readonly) BOOL isInterestingForMemories; 
@property (readonly) BOOL hasEnoughScenesProcessed; 
@property (readonly) BOOL hasEnoughFacesProcessed; 
@property (readonly) PGGraphHighlightNode * highlightNode; 
@property (readonly) unsigned long long locationMobilityType; 
@property (readonly) double inhabitationScore;                                                        //@synthesize inhabitationScore=_inhabitationScore - In the implementation block
@property (readonly) BOOL hasHigherThanImprovedAssets;                                                //@synthesize hasHigherThanImprovedAssets=_hasHigherThanImprovedAssets - In the implementation block
@property (readonly) BOOL hasAssetsWithInterestingScenes;                                             //@synthesize hasAssetsWithInterestingScenes=_hasAssetsWithInterestingScenes - In the implementation block
@property (readonly) BOOL containsBetterScoringAsset;                                                 //@synthesize containsBetterScoringAsset=_containsBetterScoringAsset - In the implementation block
@property (readonly) double neighborScore; 
@property (readonly) PGGraphMomentNode * previousMomentNode; 
@property (readonly) PGGraphMomentNode * nextMomentNode; 
@property (readonly) NSSet * frequentLocationNodes; 
@property (readonly) BOOL happensAtFrequentLocation; 
@property (readonly) CLSHolidayCalendarEventRuleTraits * holidayCalendarEventRuleTraits; 
@property (readonly) long long breakoutOfRoutineType; 
@property (readonly) unsigned long long numberOfShinyGemAssets;                                       //@synthesize numberOfShinyGemAssets=_numberOfShinyGemAssets - In the implementation block
@property (readonly) unsigned long long numberOfRegularGemAssets;                                     //@synthesize numberOfRegularGemAssets=_numberOfRegularGemAssets - In the implementation block
@property (readonly) double behavioralScore;                                                          //@synthesize behavioralScore=_behavioralScore - In the implementation block
@property (readonly) NSString * UUID; 
@property (readonly) double contentScore;                                                             //@synthesize contentScore=_contentScore - In the implementation block
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL babyIsPresent; 
@property (readonly) BOOL petIsPresent; 
@property (readonly) double timestampUTCStart;                                                        //@synthesize universalStartTimestamp=_universalStartTimestamp - In the implementation block
@property (readonly) double timestampUTCEnd;                                                          //@synthesize universalEndTimestamp=_universalEndTimestamp - In the implementation block
@property (readonly) BOOL isInteresting;                                                              //@synthesize isInteresting=_isInteresting - In the implementation block
@property (readonly) BOOL isInterestingWithAlternateJunking;                                          //@synthesize isInterestingWithAlternateJunking=_isInterestingWithAlternateJunking - In the implementation block
@property (readonly) BOOL isSmartInteresting;                                                         //@synthesize isSmartInteresting=_isSmartInteresting - In the implementation block
@property (readonly) PGGraphHighlightGroupNode * highlightGroupNode; 
@property (readonly) BOOL hasLocation; 
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isAggregation; 
+(id)filter;
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)scoreSortDescriptors;
+(id)contentScoreSortDescriptors;
+(id)propertiesWithMoment:(id)arg1 ;
+(id)contentBasedPropertiesWithMoment:(id)arg1 ;
+(id)firstAndLastMomentNodesInMomentNodes:(id)arg1 ;
+(id)dateOfMoment;
+(id)sceneOfMoment;
+(id)weekdayOfMoment;
+(id)weekendOfMoment;
+(id)roiOfMoment;
+(id)poiOfMoment;
+(id)publicEventOfMoment;
+(id)personInMoment;
+(id)frequentLocationOfMoment;
+(id)addressOfMoment;
+(id)partOfDayOfMoment;
+(id)mobilityOfMoment;
+(id)babyPresentInMoment;
+(id)petPresentInMoment;
+(id)businessOfMoment;
+(id)meaningOfMoment;
+(id)meaningHierarchyOfMoment;
+(id)socialGroupInMoment;
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(unsigned short)domain;
-(void)setName:(NSString *)arg1 ;
-(NSString *)UUID;
-(id)label;
-(NSString *)uuid;
-(BOOL)hasLocation;
-(NSString *)localIdentifier;
-(CLLocationCoordinate2D)pl_coordinate;
-(unsigned long long)numberOfAssets;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(double)behavioralScore;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;
-(unsigned long long)pl_numberOfAssets;
-(id)debugDictionary;
-(CLLocation *)pl_location;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(id)meaningLabels;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)isAggregation;
-(void)setNumberOfAssets:(unsigned long long)arg1 ;
-(double)contentScore;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(double)neighborScore;
-(double)graphScore;
-(unsigned long long)numberOfMoments;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)addressNodes;
-(void)enumerateBabyNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)personNodes;
-(id)reliableMeaningLabels;
-(id)sortedMomentNodes;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(id)fetchAssetCollection;
-(double)weightForMoment:(id)arg1 ;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1 ;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2 ;
-(BOOL)startsAfterLocalDate:(id)arg1 ;
-(BOOL)endsBeforeLocalDate:(id)arg1 ;
-(id)naturalLanguageFeatures;
-(id)timedEvent;
-(id)locatedEvent;
-(id)peopledEvent;
-(id)scenedEvent;
-(id)meaningfulEvent;
-(id)businessedEvent;
-(id)enrichableEvent;
-(id)relatableEvent;
-(BOOL)babyIsPresent;
-(BOOL)petIsPresent;
-(double)timestampUTCStart;
-(double)timestampUTCEnd;
-(BOOL)isInteresting;
-(BOOL)isInterestingWithAlternateJunking;
-(BOOL)isSmartInteresting;
-(PGGraphHighlightGroupNode *)highlightGroupNode;
-(id)businessNodes;
-(id)publicEventNodes;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(id)sceneNodes;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;
-(BOOL)hasPeopleCountingMe:(BOOL)arg1 ;
-(id)socialGroupNodes;
-(id)poiNodes;
-(id)roiNodes;
-(BOOL)happensPartiallyAtMyHome;
-(BOOL)happensPartiallyAtMyWork;
-(id)dateNodes;
-(id)seasonNodes;
-(id)holidayNodes;
-(id)celebratedHolidayNodes;
-(unsigned long long)numberOfRegularGemAssets;
-(unsigned long long)numberOfShinyGemAssets;
-(id)meaningNodes;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)relatableNode;
-(unsigned long long)totalNumberOfPersons;
-(double)inhabitationScore;
-(BOOL)hasHigherThanImprovedAssets;
-(BOOL)hasAssetsWithInterestingScenes;
-(BOOL)containsBetterScoringAsset;
-(BOOL)containsNonJunkAssets;
-(double)scenesProcessedRatio;
-(double)facesProcessedRatio;
-(unsigned long long)numberOfAssetsInExtendedCuration;
-(void)enumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBusinessNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePublicEventNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCelebratedHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphHighlightNode *)highlightNode;
-(id)cityNodes;
-(id)countryNodes;
-(void)enumerateMeaningfulEventsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfPersonNodes;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)locationMobilityType;
-(void)enumeratePetNodesUsingBlock:(/*^block*/id)arg1 ;
-(double)meaningScore;
-(BOOL)happensPartiallyAtMyHomeOrWork;
-(BOOL)isBreakoutOfRoutineHigh;
-(long long)breakoutOfRoutineType;
-(BOOL)hasEnoughScenesProcessed;
-(BOOL)hasEnoughFacesProcessed;
-(BOOL)isInterestingForMemories;
-(BOOL)isMeaningful;
-(PGGraphMomentNode *)previousMomentNode;
-(PGGraphMomentNode *)nextMomentNode;
-(id)bestAddressNode;
-(CLLocationCoordinate2D)bestLocationCoordinate;
-(unsigned long long)partsOfDay;
-(unsigned long long)significantPartsOfDay;
-(void)enumeratePartsOfDayUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSignificantPartsOfDayUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_partsOfDayWithThreshold:(float)arg1 ;
-(void)_enumeratePartsOfDayWithThreshold:(float)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePartOfDayNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setContainsNonJunkAssets:(BOOL)arg1 ;
-(void)enumerateDateNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPersonNodes;
-(id)addressEdges;
-(id)preciseAddressEdges;
-(BOOL)hasAddressNodes;
-(void)enumerateAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePreciseAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateRemoteAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateConsolidatedAddressesUsingBlock:(/*^block*/id)arg1 ;
-(id)remoteAddressEdges;
-(void)enumeratePOINodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateROINodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSceneNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFrequentLocationNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)frequentLocationNodes;
-(BOOL)happensAtFrequentLocation;
-(BOOL)hasMeanings;
-(id)meaningLabelsIncludingParents;
-(id)earlierMomentNode:(id)arg1 ;
-(id)laterMomentNode:(id)arg1 ;
-(long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2 ;
-(BOOL)isWeekend;
-(id)weekendNode;
-(id)lastWeekendMoments;
-(id)sameWeekendMoments;
-(id)sameMonthMoments;
-(CLSHolidayCalendarEventRuleTraits *)holidayCalendarEventRuleTraits;
-(unsigned long long)_eventRulePeopleTrait;
-(unsigned long long)_eventRuleLocationTrait;
-(BOOL)_isMePresent;
-(unsigned long long)numberOfAssetsWithPersons;
-(void)setScenesProcessedRatio:(double)arg1 ;
-(void)setFacesProcessedRatio:(double)arg1 ;
-(void)setNumberOfAssetsInExtendedCuration:(unsigned long long)arg1 ;
@end

