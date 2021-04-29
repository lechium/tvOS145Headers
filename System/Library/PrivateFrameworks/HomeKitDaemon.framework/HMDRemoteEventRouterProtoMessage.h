/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDRemoteEventRouterProtoChangeRegistrationsMessage, HMDRemoteEventRouterProtoConnectMessage, HMDRemoteEventRouterProtoDisconnectMessage, NSString, HMDRemoteEventRouterProtoKeepAliveMessage;

@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying> {

	HMDRemoteEventRouterProtoChangeRegistrationsMessage* _changeRegistrations;
	HMDRemoteEventRouterProtoConnectMessage* _connect;
	HMDRemoteEventRouterProtoDisconnectMessage* _disconnect;
	NSString* _identifier;
	HMDRemoteEventRouterProtoKeepAliveMessage* _keepAlive;
	int _request;
	SCD_Struct_AW7 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

