/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMNetworkConfigurationWiFiOptions : HMFObject {

	BOOL _rotate;
	long long _credentialType;

}

@property (nonatomic,readonly) long long credentialType;              //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic) BOOL rotate;                             //@synthesize rotate=_rotate - In the implementation block
-(id)description;
-(long long)credentialType;
-(BOOL)rotate;
-(id)initWithCredentialType:(long long)arg1 ;
-(void)setRotate:(BOOL)arg1 ;
@end

