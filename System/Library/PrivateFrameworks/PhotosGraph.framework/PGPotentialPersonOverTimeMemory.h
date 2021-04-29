/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _bestAssetLocalIdentifiers;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSArray * bestAssetLocalIdentifiers;               //@synthesize bestAssetLocalIdentifiers=_bestAssetLocalIdentifiers - In the implementation block
-(id)uuid;
-(PGGraphPersonNode *)personNode;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(NSArray *)bestAssetLocalIdentifiers;
-(void)setBestAssetLocalIdentifiers:(NSArray *)arg1 ;
@end
