/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIBCRequestMessage.h>

@class NSUUID, NSString;

@interface SIBCResumeSessionRequestMessage : NSObject <SIBCRequestMessage> {

	NSUUID* _hubIdentifier;

}

@property (nonatomic,readonly) NSUUID * hubIdentifier;              //@synthesize hubIdentifier=_hubIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageId;
+(id)responseMessageId;
-(NSString *)description;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(id)dictionaryEncoding;
-(NSUUID *)hubIdentifier;
-(id)initWithHubIdentifier:(id)arg1 ;
@end

