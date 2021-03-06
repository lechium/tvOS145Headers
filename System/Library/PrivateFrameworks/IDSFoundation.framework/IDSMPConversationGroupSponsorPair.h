/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject {

	IDSMPConversationKey* _conversationKey;
	NSString* _sponsorAlias;

}

@property (nonatomic,readonly) IDSMPConversationKey * conversationKey;              //@synthesize conversationKey=_conversationKey - In the implementation block
@property (nonatomic,readonly) NSString * sponsorAlias;                             //@synthesize sponsorAlias=_sponsorAlias - In the implementation block
-(NSString *)sponsorAlias;
-(id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2 ;
-(IDSMPConversationKey *)conversationKey;
@end

