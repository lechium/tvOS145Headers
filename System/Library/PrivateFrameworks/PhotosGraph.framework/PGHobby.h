/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSMutableSet;

@interface PGHobby : NSObject {

	long long _type;
	NSSet* _personNodes;
	NSMutableSet* _momentNodes;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSSet * personNodes;                     //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSMutableSet *)momentNodes;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(NSSet *)personNodes;
-(void)setPersonNodes:(NSSet *)arg1 ;
@end

