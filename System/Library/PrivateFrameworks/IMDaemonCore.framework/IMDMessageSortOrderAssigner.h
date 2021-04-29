/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDMessageSortOrderAssigner : NSObject
-(id)messageWithGUID:(id)arg1 ;
-(id)copyOfMessagesWithReplyToGUID:(id)arg1 ;
-(void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2 ;
-(void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2 ;
-(void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2 ;
-(void)persistMessage:(id)arg1 ;
-(void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2 ;
@end
