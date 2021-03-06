/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphPersonNode.h>

@interface PGGraphMeNode : PGGraphPersonNode
+(id)filter;
-(id)label;
-(void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2 ;
-(void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_relationshipLabelForRelationship:(unsigned long long)arg1 ;
-(void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2 ;
-(void)updateLocalIdentifier:(id)arg1 isFavorite:(BOOL)arg2 isUserCreated:(BOOL)arg3 ;
@end

