/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP2 : PBCodable <NSCopying> {

	NSData* _padding;
	NSString* _threadIdentifier;
	unsigned _version;
	SCD_Struct_IM7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasThreadIdentifier; 
@property (nonatomic,retain) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                         //@synthesize padding=_padding - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)padding;
-(void)setPadding:(NSData *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(BOOL)hasPadding;
-(BOOL)hasThreadIdentifier;
@end

