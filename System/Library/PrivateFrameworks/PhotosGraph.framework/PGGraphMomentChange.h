/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange {

	NSString* _momentLocalIdentifier;
	PGGraphMomentNode* _momentNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * momentLocalIdentifier;              //@synthesize momentLocalIdentifier=_momentLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphMomentNode * momentNode;                  //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                //@synthesize updateTypes=_updateTypes - In the implementation block
-(id)description;
-(unsigned long long)type;
-(PGGraphMomentNode *)momentNode;
-(id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)mergeChange:(id)arg1 ;
-(NSString *)momentLocalIdentifier;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(unsigned long long)updateTypes;
@end

