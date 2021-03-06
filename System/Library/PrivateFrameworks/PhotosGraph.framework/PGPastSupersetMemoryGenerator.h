/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator {

	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoryAssetsForSupersetLocationNodes:(id)arg1 interestingMomentNodes:(id)arg2 andMomentNodes:(id)arg3 result:(/*^block*/id)arg4 ;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
@end

