/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SKIMessagesInvocation : NSObject
+(BOOL)isMessagesNativeFlowEnabled;
+(id)beginSiriRequestForApp:(id)arg1 ;
+(id)composeNewMessageRequestToContact:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 inApp:(id)arg4 ;
+(id)composeNewMessageRequestInApp:(id)arg1 ;
+(id)readMessagesRequestFromConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)readMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
+(id)composeReplyRequestToConversationIdentifier:(id)arg1 inApp:(id)arg2 ;
+(id)makeParameterMetadataForIntent:(id)arg1 ;
+(id)makeParameterMetadataForParameterNamed:(id)arg1 ;
+(id)announceMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 ;
+(id)updateMessageContentFromInteractiveSnippet:(id)arg1 withContext:(id)arg2 ;
+(id)sendMessageFromInteractiveSnippetWithUpdatedContent:(id)arg1 withContext:(id)arg2 ;
@end

