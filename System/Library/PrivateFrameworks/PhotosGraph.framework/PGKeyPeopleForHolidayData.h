/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, PGGraphSocialGroupNode, PGGraphPersonNode, NSString;

@interface PGKeyPeopleForHolidayData : NSObject {

	NSMutableSet* _holidayRules;
	PGGraphSocialGroupNode* _socialGroupNode;
	PGGraphPersonNode* _personNode;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSMutableSet * holidayRules;                           //@synthesize holidayRules=_holidayRules - In the implementation block
@property (nonatomic,retain) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;                        //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) double score; 
@property (readonly) NSString * uuid; 
-(id)init;
-(double)score;
-(NSString *)uuid;
-(NSMutableSet *)momentNodes;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 ;
-(id)initWithPersonNode:(id)arg1 ;
-(NSMutableSet *)holidayRules;
-(void)setHolidayRules:(NSMutableSet *)arg1 ;
-(void)setSocialGroupNode:(PGGraphSocialGroupNode *)arg1 ;
@end

