/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItemRules.h>
#import <IMCore/IMChatItemRules.h>

@class NSString;

@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules <IMChatItemRules> {

	NSString* _threadIdentifier;
	NSString* _threadOriginatorMessageGUID;
	NSRange _threadOriginatorRange;

}

@property (nonatomic,copy) NSString * threadIdentifier;                         //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy) NSString * threadOriginatorMessageGUID;              //@synthesize threadOriginatorMessageGUID=_threadOriginatorMessageGUID - In the implementation block
@property (assign,nonatomic) NSRange threadOriginatorRange;                     //@synthesize threadOriginatorRange=_threadOriginatorRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(void)setThreadOriginatorMessageGUID:(NSString *)arg1 ;
-(void)setThreadOriginatorRange:(NSRange)arg1 ;
-(id)initWithChat:(id)arg1 threadIdentifier:(id)arg2 ;
-(BOOL)_supportsContiguousChatItems;
-(id)_chatItemsWithReplyCountsForNewChatItems:(id)arg1 messageItem:(id)arg2 ;
-(BOOL)_hasEarlierMessagesToLoad;
-(BOOL)_hasRecentMessagesToLoad;
-(id)_filteredChatItemsForNewChatItems:(id)arg1 ;
-(BOOL)_shouldAppendDateForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldAppendServiceForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldShowReportSpamForChat:(id)arg1 withItems:(id)arg2 ;
-(BOOL)_shouldAppendReplyContextForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldAppendReplyCountIfNeeded;
-(NSString *)threadOriginatorMessageGUID;
-(NSRange)threadOriginatorRange;
@end

