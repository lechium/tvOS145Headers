/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATIDSMessage.h>

@protocol CATInitializingIDSServiceConnectionMessageContent;
@class NSUUID, NSDictionary;

@interface CATInitializingServiceConnectionIDSMessage : NSObject <CATIDSMessage> {

	NSUUID* _invitationIdentifier;
	id<CATInitializingIDSServiceConnectionMessageContent> _content;

}

@property (nonatomic,readonly) NSUUID * invitationIdentifier;                                              //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) id<CATInitializingIDSServiceConnectionMessageContent> content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(id<CATInitializingIDSServiceConnectionMessageContent>)content;
-(long long)messageType;
-(NSDictionary *)dictionaryValue;
-(NSUUID *)invitationIdentifier;
-(id)initWithInvitationIdentifier:(id)arg1 content:(id)arg2 ;
@end

