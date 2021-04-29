/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject {

	BOOL _useCities;
	BOOL _showAllCities;
	BOOL _useTripTitleForLongDuration;
	BOOL _useBusinessItems;
	BOOL _useDistrict;
	BOOL _allowFamilyHome;
	NSSet* _momentNodes;
	PGGraphAddressNode* _keyAssetAddressNode;
	NSSet* _curationAddressNodes;
	unsigned long long _aoiDisplayType;
	unsigned long long _peopleDisplayType;
	unsigned long long _filterSignificantLocationsType;
	unsigned long long _lineBreakBehavior;

}

@property (nonatomic,retain) NSSet * momentNodes;                                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) PGGraphAddressNode * keyAssetAddressNode;                       //@synthesize keyAssetAddressNode=_keyAssetAddressNode - In the implementation block
@property (nonatomic,retain) NSSet * curationAddressNodes;                                   //@synthesize curationAddressNodes=_curationAddressNodes - In the implementation block
@property (assign,nonatomic) unsigned long long aoiDisplayType;                              //@synthesize aoiDisplayType=_aoiDisplayType - In the implementation block
@property (assign,nonatomic) unsigned long long peopleDisplayType;                           //@synthesize peopleDisplayType=_peopleDisplayType - In the implementation block
@property (assign,nonatomic) BOOL useCities;                                                 //@synthesize useCities=_useCities - In the implementation block
@property (assign,nonatomic) BOOL showAllCities;                                             //@synthesize showAllCities=_showAllCities - In the implementation block
@property (assign,nonatomic) BOOL useTripTitleForLongDuration;                               //@synthesize useTripTitleForLongDuration=_useTripTitleForLongDuration - In the implementation block
@property (assign,nonatomic) unsigned long long filterSignificantLocationsType;              //@synthesize filterSignificantLocationsType=_filterSignificantLocationsType - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakBehavior;                           //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (assign,nonatomic) BOOL useBusinessItems;                                          //@synthesize useBusinessItems=_useBusinessItems - In the implementation block
@property (assign,nonatomic) BOOL useDistrict;                                               //@synthesize useDistrict=_useDistrict - In the implementation block
@property (assign,nonatomic) BOOL allowFamilyHome;                                           //@synthesize allowFamilyHome=_allowFamilyHome - In the implementation block
+(id)onlyPeopleLocationTitleOptions;
-(id)init;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
-(BOOL)allowFamilyHome;
-(BOOL)useDistrict;
-(BOOL)showAllCities;
-(BOOL)useCities;
-(unsigned long long)aoiDisplayType;
-(unsigned long long)peopleDisplayType;
-(BOOL)useTripTitleForLongDuration;
-(unsigned long long)filterSignificantLocationsType;
-(NSSet *)curationAddressNodes;
-(PGGraphAddressNode *)keyAssetAddressNode;
-(BOOL)useBusinessItems;
-(void)setKeyAssetAddressNode:(PGGraphAddressNode *)arg1 ;
-(void)setCurationAddressNodes:(NSSet *)arg1 ;
-(void)setAoiDisplayType:(unsigned long long)arg1 ;
-(void)setUseCities:(BOOL)arg1 ;
-(void)setShowAllCities:(BOOL)arg1 ;
-(void)setPeopleDisplayType:(unsigned long long)arg1 ;
-(void)setUseTripTitleForLongDuration:(BOOL)arg1 ;
-(void)setFilterSignificantLocationsType:(unsigned long long)arg1 ;
-(void)setUseBusinessItems:(BOOL)arg1 ;
-(void)setUseDistrict:(BOOL)arg1 ;
-(void)setAllowFamilyHome:(BOOL)arg1 ;
@end

