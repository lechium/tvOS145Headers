/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAMailboxFetchMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@protocol MFRequestQueueResponseConsumer;
@class MFDAMessageStore, MFMessage;

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {

	id<MFRequestQueueResponseConsumer> consumer;
	MFDAMessageStore* store;
	MFMessage* message;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
@end

