/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSUUID, TUCTCapabilitiesState, TUThumperCTCapabilitiesState, NSString;

@interface TUSenderIdentityCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _supportsSimultaneousVoiceAndData;
	NSUUID* _senderIdentityUUID;
	TUCTCapabilitiesState* _csCallingCapabilitiesState;
	TUCTCapabilitiesState* _voLTECallingCapabilitiesState;
	TUCTCapabilitiesState* _wiFiCallingCapabilitiesState;
	TUThumperCTCapabilitiesState* _thumperCallingCapabilitiesState;

}

@property (nonatomic,copy,readonly) NSUUID * senderIdentityUUID;                                        //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
@property (assign,nonatomic) BOOL supportsSimultaneousVoiceAndData;                                     //@synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * csCallingCapabilitiesState;                          //@synthesize csCallingCapabilitiesState=_csCallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * voLTECallingCapabilitiesState;                       //@synthesize voLTECallingCapabilitiesState=_voLTECallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * wiFiCallingCapabilitiesState;                        //@synthesize wiFiCallingCapabilitiesState=_wiFiCallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUThumperCTCapabilitiesState * thumperCallingCapabilitiesState;              //@synthesize thumperCallingCapabilitiesState=_thumperCallingCapabilitiesState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsSimultaneousVoiceAndData;
-(TUCTCapabilitiesState *)csCallingCapabilitiesState;
-(TUCTCapabilitiesState *)voLTECallingCapabilitiesState;
-(TUCTCapabilitiesState *)wiFiCallingCapabilitiesState;
-(TUThumperCTCapabilitiesState *)thumperCallingCapabilitiesState;
-(NSUUID *)senderIdentityUUID;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)publiclyAccessibleCopy;
-(id)initWithSenderIdentityUUID:(id)arg1 ;
-(void)setCsCallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setVoLTECallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setWiFiCallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setThumperCallingCapabilitiesState:(TUThumperCTCapabilitiesState *)arg1 ;
-(void)setSupportsSimultaneousVoiceAndData:(BOOL)arg1 ;
@end

