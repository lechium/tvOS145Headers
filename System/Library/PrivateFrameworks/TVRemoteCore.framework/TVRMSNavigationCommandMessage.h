/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSNavigationCommandMessage : PBCodable <NSCopying> {

	int _navigationCommand;
	int _sessionIdentifier;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasNavigationCommand; 
@property (assign,nonatomic) int navigationCommand;                  //@synthesize navigationCommand=_navigationCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setNavigationCommand:(int)arg1 ;
-(void)setHasNavigationCommand:(BOOL)arg1 ;
-(BOOL)hasNavigationCommand;
-(int)navigationCommand;
@end

