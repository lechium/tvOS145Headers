/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : HMFObject {

	HAPCharacteristic* _hapCharacteristic;
	NSString* _serverIdentifier;
	long long _linkType;

}

@property (nonatomic,retain) HAPCharacteristic * hapCharacteristic;              //@synthesize hapCharacteristic=_hapCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;                        //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (assign) long long linkType;                                           //@synthesize linkType=_linkType - In the implementation block
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(HAPCharacteristic *)hapCharacteristic;
-(void)setHapCharacteristic:(HAPCharacteristic *)arg1 ;
@end

