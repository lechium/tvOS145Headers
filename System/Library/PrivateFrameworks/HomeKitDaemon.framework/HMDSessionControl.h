/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMDSessionControl : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	unsigned long long _controlCommand;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) unsigned long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionID;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)controlCommand;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2 ;
@end

