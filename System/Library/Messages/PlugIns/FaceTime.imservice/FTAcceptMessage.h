/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSString;

@interface FTAcceptMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfBlob;
	NSData* _selfNATIP;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _peerNATType;
	NSData* _peerBlob;
	NSData* _peerNATIP;
	NSNumber* _relayType;
	NSData* _relayConnectionId;
	NSData* _relayTransactionIdAlloc;
	NSData* _relayTokenAllocReq;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfNATIP;                            //@synthesize selfNATIP=_selfNATIP - In the implementation block
@property (copy) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                        //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * peerNATType;                        //@synthesize peerNATType=_peerNATType - In the implementation block
@property (copy) NSData * peerBlob;                             //@synthesize peerBlob=_peerBlob - In the implementation block
@property (copy) NSData * peerNATIP;                            //@synthesize peerNATIP=_peerNATIP - In the implementation block
@property (copy) NSNumber * relayType;                          //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSData * relayConnectionId;                    //@synthesize relayConnectionId=_relayConnectionId - In the implementation block
@property (copy) NSData * relayTransactionIdAlloc;              //@synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc - In the implementation block
@property (copy) NSData * relayTokenAllocReq;                   //@synthesize relayTokenAllocReq=_relayTokenAllocReq - In the implementation block
@property (copy) NSData * selfRelayIP;                          //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                      //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * peerRelayIP;                          //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                      //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setSelfBlob:(NSData *)arg1 ;
-(NSData *)selfBlob;
-(NSData *)peerBlob;
-(NSData *)peerPushToken;
-(NSNumber *)peerNATType;
-(NSData *)peerNATIP;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(void)setPeerNATType:(NSNumber *)arg1 ;
-(void)setPeerNATIP:(NSData *)arg1 ;
-(void)setPeerBlob:(NSData *)arg1 ;
-(NSNumber *)relayType;
-(NSData *)relayConnectionId;
-(NSData *)relayTransactionIdAlloc;
-(NSData *)relayTokenAllocReq;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfNATIP:(NSData *)arg1 ;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATType;
-(NSData *)selfNATIP;
-(void)setRelayConnectionId:(NSData *)arg1 ;
-(void)setRelayTransactionIdAlloc:(NSData *)arg1 ;
-(void)setRelayTokenAllocReq:(NSData *)arg1 ;
@end

