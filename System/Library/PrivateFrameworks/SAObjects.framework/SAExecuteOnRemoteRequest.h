/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SARemoteDevice, NSData;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL requiresResponseFromRemote; 
@property (nonatomic,copy) NSData * serializedCommand; 
@property (assign,nonatomic) BOOL suppressResponse; 
@property (assign,nonatomic) BOOL useGuaranteedDelivery; 
+(id)executeOnRemoteRequest;
+(id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)requiresResponseFromRemote;
-(void)setRequiresResponseFromRemote:(BOOL)arg1 ;
-(NSData *)serializedCommand;
-(void)setSerializedCommand:(NSData *)arg1 ;
-(BOOL)suppressResponse;
-(void)setSuppressResponse:(BOOL)arg1 ;
-(BOOL)useGuaranteedDelivery;
-(void)setUseGuaranteedDelivery:(BOOL)arg1 ;
@end
