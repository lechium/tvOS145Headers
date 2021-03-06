/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface BTAudioRoutingResponse : NSObject <NSSecureCoding> {

	int _action;
	unsigned _clientID;
	NSString* _deviceAddress;
	NSError* _error;
	NSString* _reason;

}

@property (assign,nonatomic) int action;                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned)clientID;
-(void)setReason:(NSString *)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
@end

