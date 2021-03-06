/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding> {

	NSUUID* _cbuuid;
	NSData* _BTOutOfBandKey;
	NSData* _bluetoothMACAddress;
	long long _pairingProtocolVersion;
	long long _pairingType;
	BOOL _supportsIPsecWithSPPLink;
	BOOL _shouldPairDirectlyOverIPsec;

}

@property (nonatomic,readonly) NSUUID * cbuuid;                               //@synthesize cbuuid=_cbuuid - In the implementation block
@property (nonatomic,readonly) long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (nonatomic,readonly) NSData * BTOutOfBandKey;                       //@synthesize BTOutOfBandKey=_BTOutOfBandKey - In the implementation block
@property (assign,nonatomic) BOOL supportsIPsecWithSPPLink;                   //@synthesize supportsIPsecWithSPPLink=_supportsIPsecWithSPPLink - In the implementation block
@property (assign,nonatomic) long long pairingType;                           //@synthesize pairingType=_pairingType - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                    //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
@property (assign,nonatomic) BOOL shouldPairDirectlyOverIPsec;                //@synthesize shouldPairDirectlyOverIPsec=_shouldPairDirectlyOverIPsec - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)cbuuid;
-(long long)pairingProtocolVersion;
-(NSData *)BTOutOfBandKey;
-(BOOL)supportsIPsecWithSPPLink;
-(BOOL)shouldPairDirectlyOverIPsec;
-(NSData *)bluetoothMACAddress;
-(long long)pairingType;
-(id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3 ;
-(void)setSupportsIPsecWithSPPLink:(BOOL)arg1 ;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(void)setShouldPairDirectlyOverIPsec:(BOOL)arg1 ;
-(void)setPairingType:(long long)arg1 ;
@end

