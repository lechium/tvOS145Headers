/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned long long _offset;
	unsigned _fragmentedMessageID;
	unsigned _fragmentIndex;
	unsigned _totalFragmentCount;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned fragmentedMessageID;                   //@synthesize fragmentedMessageID=_fragmentedMessageID - In the implementation block
@property (nonatomic,readonly) unsigned fragmentIndex;                         //@synthesize fragmentIndex=_fragmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned totalFragmentCount;                    //@synthesize totalFragmentCount=_totalFragmentCount - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
+(id)createOriginalMessageFromFragmentedMessages:(id)arg1 ;
+(id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentSize:(unsigned)arg3 ;
-(id)description;
-(NSData *)data;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned)totalFragmentCount;
-(id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentIndex:(unsigned)arg3 totalFragmentCount:(unsigned)arg4 ;
-(unsigned)fragmentedMessageID;
-(unsigned)fragmentIndex;
@end

