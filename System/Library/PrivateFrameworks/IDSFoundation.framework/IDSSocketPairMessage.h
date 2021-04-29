/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData, NSString, NSDate;


@protocol IDSSocketPairMessage
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
@optional
-(NSData *)data;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1;
-(void)setExpiryDate:(id)arg1;
-(NSDate *)expiryDate;
-(BOOL)expectsPeerResponse;
-(BOOL)wantsAppAck;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1;
-(BOOL)didWakeHint;
-(NSString *)peerResponseIdentifier;
-(NSString *)messageUUID;

@end

