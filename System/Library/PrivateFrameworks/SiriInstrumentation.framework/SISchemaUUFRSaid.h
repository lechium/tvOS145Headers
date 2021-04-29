/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage {

	NSString* _dialogIdentifier;
	SISchemaSiriResponseContext* _siriResponseContext;
	NSString* _aceViewID;
	NSString* _aceViewClass;
	BOOL _hasDialogIdentifier;
	BOOL _hasSiriResponseContext;
	BOOL _hasAceViewID;
	BOOL _hasAceViewClass;

}

@property (nonatomic,copy) NSString * dialogIdentifier;                                      //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDialogIdentifier;                                       //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,copy) NSString * aceViewID;                                             //@synthesize aceViewID=_aceViewID - In the implementation block
@property (assign,nonatomic) BOOL hasAceViewID;                                              //@synthesize hasAceViewID=_hasAceViewID - In the implementation block
@property (nonatomic,copy) NSString * aceViewClass;                                          //@synthesize aceViewClass=_aceViewClass - In the implementation block
@property (assign,nonatomic) BOOL hasAceViewClass;                                           //@synthesize hasAceViewClass=_hasAceViewClass - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(void)setAceViewID:(NSString *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(BOOL)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(BOOL)arg1 ;
-(void)setAceViewClass:(NSString *)arg1 ;
-(NSString *)aceViewID;
-(NSString *)aceViewClass;
-(BOOL)hasDialogIdentifier;
-(BOOL)hasAceViewID;
-(BOOL)hasAceViewClass;
-(void)setHasDialogIdentifier:(BOOL)arg1 ;
-(void)setHasAceViewID:(BOOL)arg1 ;
-(void)setHasAceViewClass:(BOOL)arg1 ;
@end

