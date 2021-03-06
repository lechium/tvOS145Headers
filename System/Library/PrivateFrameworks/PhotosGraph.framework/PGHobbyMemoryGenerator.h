/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _onlyOverTheYears;
	BOOL _keepsOnlyIsInteresting;
	long long _hobbyType;

}

@property (assign,nonatomic) long long hobbyType;                      //@synthesize hobbyType=_hobbyType - In the implementation block
@property (assign,nonatomic) BOOL onlyOverTheYears;                    //@synthesize onlyOverTheYears=_onlyOverTheYears - In the implementation block
@property (assign,nonatomic) BOOL keepsOnlyIsInteresting;              //@synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting - In the implementation block
-(id)confidenceThresholdByWhitelistedSceneIdentifier;
-(id)confidenceThresholdByBlacklistedSceneIdentifier;
-(void)_potentialHobbyMemoryForHobby:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(SCD_Struct_PG0*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(long long)hobbyType;
-(void)setHobbyType:(long long)arg1 ;
-(BOOL)onlyOverTheYears;
-(void)setOnlyOverTheYears:(BOOL)arg1 ;
-(BOOL)keepsOnlyIsInteresting;
-(void)setKeepsOnlyIsInteresting:(BOOL)arg1 ;
@end

