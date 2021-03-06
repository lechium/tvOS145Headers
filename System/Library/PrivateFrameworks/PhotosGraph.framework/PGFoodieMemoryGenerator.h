/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDictionary, NSMutableDictionary, PGGraphSceneNode, CLSCurationSession, NSString;

@interface PGFoodieMemoryGenerator : PGFeaturedMemoryGenerator {

	NSDictionary* _confidenceThresholdByFoodSceneIdentifier;
	NSDictionary* _confidenceThresholdByDrinkSceneIdentifier;
	NSDictionary* _confidenceThresholdByForbiddenSceneIdentifiers;
	NSMutableDictionary* _locationCoordinateByAssetUUID;
	NSMutableDictionary* _relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;
	NSMutableDictionary* _assetUUIDsWithPeopleByMomentNodeLocalIdentifier;
	NSMutableDictionary* _cityNodesByMomentLocalIdentifier;
	long long _currentYear;
	PGGraphSceneNode* _foodSceneNode;
	CLSCurationSession* _curationSession;
	NSString* _foodieMemoryType;
	NSString* _foodieMemoryKind;

}

@property (nonatomic,retain) NSDictionary * confidenceThresholdByFoodSceneIdentifier;                                //@synthesize confidenceThresholdByFoodSceneIdentifier=_confidenceThresholdByFoodSceneIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * confidenceThresholdByDrinkSceneIdentifier;                               //@synthesize confidenceThresholdByDrinkSceneIdentifier=_confidenceThresholdByDrinkSceneIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * confidenceThresholdByForbiddenSceneIdentifiers;                          //@synthesize confidenceThresholdByForbiddenSceneIdentifiers=_confidenceThresholdByForbiddenSceneIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationCoordinateByAssetUUID;                                    //@synthesize locationCoordinateByAssetUUID=_locationCoordinateByAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;              //@synthesize relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier=_relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetUUIDsWithPeopleByMomentNodeLocalIdentifier;                  //@synthesize assetUUIDsWithPeopleByMomentNodeLocalIdentifier=_assetUUIDsWithPeopleByMomentNodeLocalIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cityNodesByMomentLocalIdentifier;                                 //@synthesize cityNodesByMomentLocalIdentifier=_cityNodesByMomentLocalIdentifier - In the implementation block
@property (assign,nonatomic) long long currentYear;                                                                  //@synthesize currentYear=_currentYear - In the implementation block
@property (nonatomic,retain) PGGraphSceneNode * foodSceneNode;                                                       //@synthesize foodSceneNode=_foodSceneNode - In the implementation block
@property (nonatomic,retain) CLSCurationSession * curationSession;                                                   //@synthesize curationSession=_curationSession - In the implementation block
@property (nonatomic,retain) NSString * foodieMemoryType;                                                            //@synthesize foodieMemoryType=_foodieMemoryType - In the implementation block
@property (nonatomic,retain) NSString * foodieMemoryKind;                                                            //@synthesize foodieMemoryKind=_foodieMemoryKind - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(CLSCurationSession *)curationSession;
-(PGGraphSceneNode *)foodSceneNode;
-(NSDictionary *)confidenceThresholdByFoodSceneIdentifier;
-(NSDictionary *)confidenceThresholdByDrinkSceneIdentifier;
-(BOOL)_hasEnoughAssetsWithMinimumSceneAnalysisVersion;
-(id)_preferredPotentialMemoriesFromPotentialMemories:(id)arg1 ;
-(id)_assetUUIDsFromAssets:(id)arg1 ;
-(id)_potentialMemoriesFromMomentNodes:(id)arg1 atLocationCoordinate:(CLLocationCoordinate2D)arg2 atLocationNode:(id)arg3 requireMinimumTimeInterval:(BOOL)arg4 includeSingleYearMemories:(BOOL)arg5 features:(id)arg6 featuredNode:(id)arg7 kind:(unsigned long long)arg8 cancelled:(BOOL*)arg9 ;
-(id)_incompatiblePOILabels;
-(id)_momentNodesFilteredForIncompatiblePOIFromMomentNodes:(id)arg1 ;
-(id)_incompatibleMeanings;
-(id)_momentNodesFilteredForIncompatibleMeaningsFromMomentNodes:(id)arg1 ;
-(BOOL)_aggregationMeetsMinimumTimeIntervalForMomentNodes:(id)arg1 ;
-(id)_momentNodesByYearFromMomentNodes:(id)arg1 ;
-(id)_potentialGenericMemoriesWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_potentialMemoriesForTripsWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_potentialMemoriesForPeopleWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_cityNodesForMomentNode:(id)arg1 ;
-(id)_potentialMemoriesForCitiesWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_potentialMemoriesForRestaurantsWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_potentialMemoriesForHomeWithGraph:(id)arg1 cancelled:(BOOL*)arg2 ;
-(id)_assetUUIDsAtLocationCoordinate:(CLLocationCoordinate2D)arg1 inAssetsWithUUIDs:(id)arg2 ;
-(id)_assetUUIDsWithPeopleForMomentNode:(id)arg1 ;
-(id)_relevantFoodieAssetUUIDsForMomentNode:(id)arg1 ;
-(void)_calculateRelevantFoodieAssetUUIDsForMomentNode:(id)arg1 ;
-(id)_assetUUIDsAtLocationNode:(id)arg1 forMomentNodes:(id)arg2 assetUUIDs:(id)arg3 ;
-(id)_fetchAssetsForAssetUUIDsByMomentNodeLocalIdentifier:(id)arg1 controller:(id)arg2 ;
-(id)_uuidsOfRequiredFoodAssetsWithNumberOfFoodAssetsToRequirePerMoment:(unsigned long long)arg1 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg2 controller:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_foodieCurationCriteriaWithGraph:(id)arg1 personNode:(id)arg2 ;
-(id)_assetsCloseInTimeAndLocationToAsset:(id)arg1 inAssets:(id)arg2 stopAtFirstMatch:(BOOL)arg3 ;
-(id)_curatedPersonAssetsFromPersonAssetsByMomentNodeLocalIdentifier:(id)arg1 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg2 momentNodes:(id)arg3 featuringPersonNode:(id)arg4 outValidMomentNodes:(id*)arg5 outRelevantFoodAssetsForFeaturedPersonByMomentNodeLocalIdentifier:(id*)arg6 controller:(id)arg7 progressBlock:(/*^block*/id)arg8 ;
-(id)_extendedCurationForAssets:(id)arg1 controller:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)confidenceThresholdByForbiddenSceneIdentifiers;
-(void)setConfidenceThresholdByFoodSceneIdentifier:(NSDictionary *)arg1 ;
-(void)setConfidenceThresholdByDrinkSceneIdentifier:(NSDictionary *)arg1 ;
-(void)setConfidenceThresholdByForbiddenSceneIdentifiers:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)locationCoordinateByAssetUUID;
-(void)setLocationCoordinateByAssetUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;
-(void)setRelevantFoodieAssetUUIDsByMomentNodeLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetUUIDsWithPeopleByMomentNodeLocalIdentifier;
-(void)setAssetUUIDsWithPeopleByMomentNodeLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cityNodesByMomentLocalIdentifier;
-(void)setCityNodesByMomentLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(long long)currentYear;
-(void)setCurrentYear:(long long)arg1 ;
-(void)setFoodSceneNode:(PGGraphSceneNode *)arg1 ;
-(void)setCurationSession:(CLSCurationSession *)arg1 ;
-(NSString *)foodieMemoryType;
-(void)setFoodieMemoryType:(NSString *)arg1 ;
-(NSString *)foodieMemoryKind;
-(void)setFoodieMemoryKind:(NSString *)arg1 ;
@end

