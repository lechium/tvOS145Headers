/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CAPContactFillerUserEvent;

@interface CAPContactFillerShareEvent : PBCodable <NSCopying> {

	NSMutableArray* _contactEvents;
	CAPContactFillerUserEvent* _userEvent;

}

@property (nonatomic,retain) NSMutableArray * contactEvents;                     //@synthesize contactEvents=_contactEvents - In the implementation block
@property (nonatomic,retain) CAPContactFillerUserEvent * userEvent;              //@synthesize userEvent=_userEvent - In the implementation block
+(Class)contactEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContactEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contactEvents;
-(void)addContactEvent:(id)arg1 ;
-(unsigned long long)contactEventsCount;
-(void)clearContactEvents;
-(id)contactEventAtIndex:(unsigned long long)arg1 ;
-(void)setUserEvent:(CAPContactFillerUserEvent *)arg1 ;
-(CAPContactFillerUserEvent *)userEvent;
@end

