/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSClue.h>

@class NSMutableArray, CLSEvent, CLSPersonIdentity, CLSPlace;

@interface CLSOutputClue : CLSClue {

	NSMutableArray* _relatedInputTimeClues;
	NSMutableArray* _relatedInputLocationClues;
	NSMutableArray* _relatedInputPeopleClues;
	CLSEvent* _relatedEvent;
	CLSPersonIdentity* _relatedPerson;
	CLSPlace* _relatedPlace;

}

@property (retain) CLSPlace * relatedPlace;                        //@synthesize relatedPlace=_relatedPlace - In the implementation block
@property (retain) CLSPersonIdentity * relatedPerson;              //@synthesize relatedPerson=_relatedPerson - In the implementation block
@property (retain) CLSEvent * relatedEvent;                        //@synthesize relatedEvent=_relatedEvent - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(id)description;
-(id)init;
-(CLSPlace *)relatedPlace;
-(void)setRelatedPlace:(CLSPlace *)arg1 ;
-(CLSEvent *)relatedEvent;
-(void)addRelatedInputClues:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(CLSPersonIdentity *)relatedPerson;
-(id)relatedInputClues;
-(id)relatedInputLocationClues;
-(id)relatedInputPeopleClues;
-(id)relatedInputTimeClues;
-(void)setRelatedEvent:(CLSEvent *)arg1 ;
-(void)setRelatedPerson:(CLSPersonIdentity *)arg1 ;
@end
