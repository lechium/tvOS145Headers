/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGDejunkerDeduper.h>

@class NSDictionary, NSSet;

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper {

	NSDictionary* _personLocalIdentifiersByItemIdentifier;
	NSDictionary* _peopleScenesByItemIdentifier;
	NSDictionary* _averageFaceQualityByItemIdentifier;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
-(id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)bestItemsInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(BOOL*)arg3 ;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(void)_buildCachesWithItems:(id)arg1 options:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2 ;
-(BOOL)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2 ;
@end

