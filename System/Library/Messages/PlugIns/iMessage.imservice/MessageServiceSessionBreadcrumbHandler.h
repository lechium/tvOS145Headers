/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MessageServiceSessionBreadcrumbHandler : NSObject
+(id)storeBreadcrumbAndSetConsumedPayloadsForNewMessageItemIfNecessary:(id)arg1 inChatWithIdentifier:(id)arg2 ;
+(id)_messageItemToConsumeForNewBreadcrumbMessage:(id)arg1 outBreadcrumbItems:(id*)arg2 ;
+(void)_updateStoredBreadcrumbIfNeeded:(id)arg1 onChat:(id)arg2 ;
+(void)handleBreadcrumbForNewMessageItemIfNecessary:(id)arg1 withContext:(id)arg2 ;
@end
