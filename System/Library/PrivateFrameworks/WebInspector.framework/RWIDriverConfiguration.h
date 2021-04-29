/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RWIDriverConfiguration : NSObject <NSCopying> {

	NSString* _driverIdentifier;
	NSString* _driverName;
	NSString* _driverVersion;
	NSString* _driverHost;
	long long _driverPort;

}

@property (nonatomic,copy) NSString * driverIdentifier;              //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,copy) NSString * driverName;                    //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,copy) NSString * driverVersion;                 //@synthesize driverVersion=_driverVersion - In the implementation block
@property (nonatomic,copy) NSString * driverHost;                    //@synthesize driverHost=_driverHost - In the implementation block
@property (assign,nonatomic) long long driverPort;                   //@synthesize driverPort=_driverPort - In the implementation block
+(BOOL)isValidPayload:(id)arg1 ;
+(id)decodeFromPayload:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)driverVersion;
-(void)setDriverVersion:(NSString *)arg1 ;
-(NSString *)driverName;
-(NSString *)driverIdentifier;
-(void)encodeToPayload:(id)arg1 ;
-(void)setDriverIdentifier:(NSString *)arg1 ;
-(void)setDriverName:(NSString *)arg1 ;
-(NSString *)driverHost;
-(void)setDriverHost:(NSString *)arg1 ;
-(long long)driverPort;
-(void)setDriverPort:(long long)arg1 ;
@end

