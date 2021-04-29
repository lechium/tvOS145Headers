/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSString, NSObject, NSMutableDictionary;

@interface VCSessionMessageTopic : NSObject {

	NSArray* associatedStrings;
	NSString* topicKey;
	BOOL allowConcurrent;
	NSObject*<OS_dispatch_queue> outMessageQueue;
	id controlChannelWeak;
	NSObject*<OS_dispatch_queue> inMessageQueue;
	/*^block*/id receiveBlock;
	long long latestOutgoingMessageIndex;
	BOOL isSendingEnabled;
	BOOL shouldEncodeTopicKeyInMessage;
	NSString* topicPrefix;
	NSMutableDictionary* transactionCache;

}

@property (assign,setter=setIsSendingEnabled:,nonatomic) BOOL isSendingEnabled; 
@property (readonly) NSString * topicKey; 
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)setIsSendingEnabled:(BOOL)arg1 ;
-(id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(BOOL)arg3 controlChannel:(id)arg4 receiveHandler:(/*^block*/id)arg5 ;
-(NSString *)topicKey;
-(id)messageForCommand:(id)arg1 ;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(BOOL)isStringAssociated:(id)arg1 ;
-(void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3 ;
-(void)clearTransactionCacheForParticipant:(id)arg1 ;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4 ;
-(BOOL)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3 ;
-(void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3 ;
-(BOOL)isSendingEnabled;
@end
