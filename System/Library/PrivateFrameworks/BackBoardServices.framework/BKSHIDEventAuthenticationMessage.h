/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSData, BSAuditToken, NSString;

@interface BKSHIDEventAuthenticationMessage : NSObject <NSSecureCoding, NSCopying, BSProtobufSerializable> {

	long long _versionedPID;
	unsigned _eventType;
	unsigned long long _timestamp;
	long long _keyGeneration;
	unsigned long long _originIdentifier;
	unsigned long long _context;
	BOOL _registrantEntitled;
	NSData* _signature;

}

@property (nonatomic,readonly) BSAuditToken * destinationAuditToken; 
@property (nonatomic,readonly) long long versionedPID;                            //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long originIdentifier;               //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL registrantEntitled;                           //@synthesize registrantEntitled=_registrantEntitled - In the implementation block
@property (nonatomic,readonly) long long keyGeneration;                           //@synthesize keyGeneration=_keyGeneration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)withKey:(id)arg1 buildMessage:(/*^block*/id)arg2 ;
+(id)messageWithOriginIdentifier:(unsigned long long)arg1 context:(unsigned long long)arg2 destinationAuditToken:(id)arg3 signWithKey:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(unsigned long long)timestamp;
-(id)initForProtobufDecoding;
-(long long)versionedPID;
-(BSAuditToken *)destinationAuditToken;
-(unsigned)eventType;
-(long long)keyGeneration;
-(unsigned long long)originIdentifier;
-(BOOL)registrantEntitled;
-(id)initWithOriginIdentifier:(unsigned long long)arg1 context:(unsigned long long)arg2 destinationAuditToken:(id)arg3 signWithKey:(id)arg4 ;
-(BOOL)_verifySignatureWithKey:(id)arg1 ;
-(BOOL)verifySignatureWithKeys:(id)arg1 ;
-(BOOL)verifySignatureWithKey:(id)arg1 ;
@end

