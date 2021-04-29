/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _nodes;
	GKCGraph* _cGraph;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain) NSMutableDictionary * _info;              //@synthesize _info=__info - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
+(BOOL)supportsSecureCoding;
+(id)graph;
+(id)graphWithNodes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)_info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)nodes;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(id)initWithNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(GKCGraph*)cGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)removeNodes:(id)arg1 ;
-(void)addNodes:(id)arg1 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
@end

