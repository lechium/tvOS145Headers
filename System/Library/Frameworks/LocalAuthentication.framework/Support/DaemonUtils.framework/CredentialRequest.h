/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DaemonUtils/Request.h>

@class LASecureData;

@interface CredentialRequest : Request {

	BOOL _readOnly;
	long long _credentialType;
	LASecureData* _credentialData;

}

@property (nonatomic,readonly) long long credentialType;                   //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) LASecureData * credentialData;              //@synthesize credentialData=_credentialData - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                              //@synthesize readOnly=_readOnly - In the implementation block
-(BOOL)readOnly;
-(long long)credentialType;
-(id)initWithCredential:(long long)arg1 value:(id)arg2 readOnly:(BOOL)arg3 ;
-(LASecureData *)credentialData;
@end

