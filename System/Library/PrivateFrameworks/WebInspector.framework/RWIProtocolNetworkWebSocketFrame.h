/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (assign,nonatomic) double opcode; 
@property (assign,nonatomic) BOOL mask; 
@property (nonatomic,copy) NSString * payloadData; 
@property (assign,nonatomic) double payloadLength; 
-(BOOL)mask;
-(void)setMask:(BOOL)arg1 ;
-(void)setOpcode:(double)arg1 ;
-(double)opcode;
-(double)payloadLength;
-(void)setPayloadLength:(double)arg1 ;
-(void)setPayloadData:(NSString *)arg1 ;
-(NSString *)payloadData;
-(id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4 ;
@end

