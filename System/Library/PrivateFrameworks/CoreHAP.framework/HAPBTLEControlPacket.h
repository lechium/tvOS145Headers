/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : HMFObject {

	unsigned char _type;
	BOOL _continuationPacket;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (getter=isContinuationPacket,nonatomic,readonly) BOOL continuationPacket;               //@synthesize continuationPacket=_continuationPacket - In the implementation block
+(id)shortDescription;
+(id)packetWithSerializedData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(unsigned char)type;
-(NSData *)payload;
-(id)shortDescription;
-(id)serialize;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(BOOL)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5 ;
-(BOOL)isContinuationPacket;
@end

