/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, CKDPSubscriptionNotification, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {

	SCD_Struct_CK24* _mutationTriggers;
	int _evaluationType;
	NSMutableArray* _filters;
	CKDPIdentifier* _identifier;
	CKDPSubscriptionNotification* _notification;
	int _owner;
	NSMutableArray* _recordTypes;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _fireOnce;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationType; 
@property (assign,nonatomic) int evaluationType;                                       //@synthesize evaluationType=_evaluationType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) int owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mutationTriggersCount; 
@property (nonatomic,readonly) int* mutationTriggers; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) CKDPSubscriptionNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordTypes;                             //@synthesize recordTypes=_recordTypes - In the implementation block
@property (assign,nonatomic) BOOL hasFireOnce; 
@property (assign,nonatomic) BOOL fireOnce;                                            //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
+(Class)filtersType;
+(Class)recordTypesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(CKDPIdentifier *)identifier;
-(void)setOwner:(int)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)owner;
-(CKDPSubscriptionNotification *)notification;
-(void)setNotification:(CKDPSubscriptionNotification *)arg1 ;
-(NSMutableArray *)filters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasNotification;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOwner;
-(void)setHasOwner:(BOOL)arg1 ;
-(void)addRecordTypes:(id)arg1 ;
-(unsigned long long)mutationTriggersCount;
-(void)clearMutationTriggers;
-(int)mutationTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addMutationTriggers:(int)arg1 ;
-(unsigned long long)recordTypesCount;
-(void)clearRecordTypes;
-(id)recordTypesAtIndex:(unsigned long long)arg1 ;
-(int)evaluationType;
-(void)setEvaluationType:(int)arg1 ;
-(void)setHasEvaluationType:(BOOL)arg1 ;
-(BOOL)hasEvaluationType;
-(id)evaluationTypeAsString:(int)arg1 ;
-(int)StringAsEvaluationType:(id)arg1 ;
-(id)ownerAsString:(int)arg1 ;
-(int)StringAsOwner:(id)arg1 ;
-(int*)mutationTriggers;
-(void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mutationTriggersAsString:(int)arg1 ;
-(int)StringAsMutationTriggers:(id)arg1 ;
-(void)setFireOnce:(BOOL)arg1 ;
-(void)setHasFireOnce:(BOOL)arg1 ;
-(BOOL)hasFireOnce;
-(NSMutableArray *)recordTypes;
-(void)setRecordTypes:(NSMutableArray *)arg1 ;
-(BOOL)fireOnce;
@end

