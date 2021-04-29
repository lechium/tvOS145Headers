/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject {

	NSString* _character;
	SCNNode* _node;

}

@property (nonatomic,retain) NSString * character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,retain) SCNNode * node;                    //@synthesize node=_node - In the implementation block
+(id)characterWithCharacter:(id)arg1 node:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(NSString *)character;
-(void)setCharacter:(NSString *)arg1 ;
@end

