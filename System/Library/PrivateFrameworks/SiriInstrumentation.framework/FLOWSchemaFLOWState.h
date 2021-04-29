/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, FLOWSchemaFLOWStateReason, NSData;

@interface FLOWSchemaFLOWState : SISchemaInstrumentationMessage {

	NSString* _currentTaskName;
	NSString* _currentTaskType;
	int _flowStateType;
	FLOWSchemaFLOWStateReason* _flowStateReason;
	NSString* _resolvedSlotName;
	SCD_Struct_SI0 _has;
	BOOL _hasCurrentTaskName;
	BOOL _hasCurrentTaskType;
	BOOL _hasFlowStateReason;
	BOOL _hasResolvedSlotName;

}

@property (nonatomic,copy) NSString * currentTaskName;                                 //@synthesize currentTaskName=_currentTaskName - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTaskName;                                  //@synthesize hasCurrentTaskName=_hasCurrentTaskName - In the implementation block
@property (nonatomic,copy) NSString * currentTaskType;                                 //@synthesize currentTaskType=_currentTaskType - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTaskType;                                  //@synthesize hasCurrentTaskType=_hasCurrentTaskType - In the implementation block
@property (assign,nonatomic) int flowStateType;                                        //@synthesize flowStateType=_flowStateType - In the implementation block
@property (assign,nonatomic) BOOL hasFlowStateType; 
@property (nonatomic,retain) FLOWSchemaFLOWStateReason * flowStateReason;              //@synthesize flowStateReason=_flowStateReason - In the implementation block
@property (assign,nonatomic) BOOL hasFlowStateReason;                                  //@synthesize hasFlowStateReason=_hasFlowStateReason - In the implementation block
@property (nonatomic,copy) NSString * resolvedSlotName;                                //@synthesize resolvedSlotName=_resolvedSlotName - In the implementation block
@property (assign,nonatomic) BOOL hasResolvedSlotName;                                 //@synthesize hasResolvedSlotName=_hasResolvedSlotName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setCurrentTaskName:(NSString *)arg1 ;
-(void)setCurrentTaskType:(NSString *)arg1 ;
-(void)setFlowStateType:(int)arg1 ;
-(void)setFlowStateReason:(FLOWSchemaFLOWStateReason *)arg1 ;
-(void)setResolvedSlotName:(NSString *)arg1 ;
-(NSString *)currentTaskName;
-(NSString *)currentTaskType;
-(FLOWSchemaFLOWStateReason *)flowStateReason;
-(NSString *)resolvedSlotName;
-(int)flowStateType;
-(BOOL)hasCurrentTaskName;
-(BOOL)hasCurrentTaskType;
-(BOOL)hasFlowStateType;
-(void)setHasFlowStateType:(BOOL)arg1 ;
-(BOOL)hasFlowStateReason;
-(BOOL)hasResolvedSlotName;
-(void)setHasCurrentTaskName:(BOOL)arg1 ;
-(void)setHasCurrentTaskType:(BOOL)arg1 ;
-(void)setHasFlowStateReason:(BOOL)arg1 ;
-(void)setHasResolvedSlotName:(BOOL)arg1 ;
@end
