/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {

	unsigned long long _stateHeldForSecs;
	unsigned long long _timestamp;
	int _inState;
	NSString* _symptomName;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInState; 
@property (assign,nonatomic) int inState;                                      //@synthesize inState=_inState - In the implementation block
@property (assign,nonatomic) BOOL hasStateHeldForSecs; 
@property (assign,nonatomic) unsigned long long stateHeldForSecs;              //@synthesize stateHeldForSecs=_stateHeldForSecs - In the implementation block
@property (nonatomic,readonly) BOOL hasSymptomName; 
@property (nonatomic,retain) NSString * symptomName;                           //@synthesize symptomName=_symptomName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setInState:(int)arg1 ;
-(void)setStateHeldForSecs:(unsigned long long)arg1 ;
-(NSString *)symptomName;
-(int)inState;
-(void)setHasInState:(BOOL)arg1 ;
-(BOOL)hasInState;
-(id)inStateAsString:(int)arg1 ;
-(int)StringAsInState:(id)arg1 ;
-(void)setHasStateHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasStateHeldForSecs;
-(BOOL)hasSymptomName;
-(unsigned long long)stateHeldForSecs;
@end

