/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <NSCopying> {

	int _changeType;
	NSData* _message;
	int _messageType;
	NSString* _uniqueID;

}

@property (assign,nonatomic) int messageType;                  //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) int changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSData * message;                 //@synthesize message=_message - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)changeType;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(int)messageType;
-(NSData *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(NSData *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
@end

