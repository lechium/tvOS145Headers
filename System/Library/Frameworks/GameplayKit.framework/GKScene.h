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

@protocol GKSceneRootNodeType;
@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface GKScene : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entities;
	NSMutableDictionary* _graphs;
	id<GKSceneRootNodeType> _rootNode;

}

@property (nonatomic,readonly) NSArray * entities;                          //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) id<GKSceneRootNodeType> rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,readonly) NSDictionary * graphs;                       //@synthesize graphs=_graphs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2 ;
+(id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2 ;
+(id)sceneWithFileNamed:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<GKSceneRootNodeType>)rootNode;
-(NSArray *)entities;
-(void)setRootNode:(id<GKSceneRootNodeType>)arg1 ;
-(void)addEntity:(id)arg1 ;
-(void)removeEntity:(id)arg1 ;
-(void)addGraph:(id)arg1 name:(id)arg2 ;
-(void)removeGraph:(id)arg1 ;
-(NSDictionary *)graphs;
@end

